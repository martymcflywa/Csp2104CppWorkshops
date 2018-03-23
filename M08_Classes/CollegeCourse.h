#pragma once
#include <string>

class CollegeCourse
{
    std::string _department;
    int _course;
    int _seats;
public:
    CollegeCourse(const std::string& department, int course, int seats);
    void setDepartmentAndCourse(std::string department, int course);
    void setSeats(int seats);
    void displayCourseData() const;
};
