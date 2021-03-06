// E01_Async.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <climits>
#include <future>
#include <iostream>

using namespace std;

int compute(int x)
{
    for (unsigned i = 0; i < INT_MAX; i++)
    {
        x++;
    }
    return x;
}

void computeWithPackagedTask()
{
    cout << "Compute with packaged_task" << endl;

    auto task1 = packaged_task<int(int)>(compute);
    auto task2 = packaged_task<int(int)>(compute);

    auto val1 = task1.get_future();
    auto val2 = task2.get_future();

    thread t1(move(task1), 0);
    thread t2(move(task2), 5);

    auto s1 = false, s2 = false;

    do
    {
        s1 = val1.wait_for(chrono::milliseconds(50)) == future_status::ready;
        s2 = val2.wait_for(chrono::milliseconds(50)) == future_status::ready;

        cout << "val1 is " << (s1 ? "" : "not ") << "ready" << endl;
        cout << "val2 is " << (s2 ? "" : "not ") << "ready" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
    } 
    while (!s1 || !s2);

    t1.join();
    t2.join();

    cout << "val1=" << val1.get() << endl;
    cout << "val2=" << val2.get() << endl;
}

void computeWithAsync()
{
    cout << "Compute with async" << endl;

    auto result1 = async([]{ return compute(0); });
    auto result2 = async([](){ return compute(5); });

    auto done1 = false, done2 = false;
    do
    {
        done1 = result1.wait_for(chrono::milliseconds(50)) == future_status::ready;
        done2 = result2.wait_for(chrono::milliseconds(50)) == future_status::ready;

        cout << "result1 is " << (done1 ? "" : "not ") << "ready" << endl;
        cout << "result2 is " << (done2 ? "" : "not ") << "ready" << endl;
        this_thread::sleep_for(chrono::milliseconds(300));
    }
    while (!done1 || !done2);

    cout << "result1=" << result1.get() << endl;
    cout << "result2=" << result2.get() << endl;
}

int main()
{   
    computeWithPackagedTask();
    computeWithAsync();
    return 0;
}

