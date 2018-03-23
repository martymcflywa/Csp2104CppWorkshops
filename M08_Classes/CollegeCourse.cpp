#include "stdafx.h"
#include "CollegeCourse.h"
#include <iostream>

using namespace std;

CollegeCourse::CollegeCourse(const std::string& department, int course, int seats) :
    _department(department),
    _course(course),
    _seats(seats)
{
}

void CollegeCourse::setDepartmentAndCourse(std::string department, int course)
{
    _department = department;
    _course = course;
}

void CollegeCourse::setSeats(int seats)
{
    _seats = seats;
}

void CollegeCourse::displayCourseData() const
{
    const auto out = "dept=" + _department +
        "\ncourse=" + std::to_string(_course) +
        "\nseats=" + std::to_string(_seats);

    cout << out << endl;
}
