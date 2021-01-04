#pragma once

#include <iostream>
#include <string>
class Student
{
private:
    std::string s_name;
    int s_intel;
public:
    Student(const std::string & name_in = "No Name", const int & intel_in = 0)
        : s_name(name_in), s_intel(intel_in)
        {
        }
    void setName(const std::string & name_in)
    {
        s_name = name_in;
    }

    void setIntel(const int & intel_in)
    {
        s_intel = intel_in;
    }

    std::string getName()
    {
        return s_name;
    }
    int getIntel()
    {
        return s_intel;
    }

        friend std::ostream & operator<<(std::ostream & out, const Student & student)
    {
        out << student.s_name << " " << student.s_intel;
        return out;
    }
};
