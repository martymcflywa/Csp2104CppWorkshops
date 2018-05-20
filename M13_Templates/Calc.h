#pragma once

class Calc
{
public:
    template<typename T>
    static T multiply(T a, T b);

    template<typename T>
    static T add(T a, T b);
};

template <typename T>
T Calc::multiply(T a, T b)
{
    return a * b;
}

template <typename T>
T Calc::add(T a, T b)
{
    return a + b;
}
