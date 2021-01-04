#pragma once

#include <iostream>
#include <vector>
#include <string>
class Teacher
{
private:
    std::string t_name;

public:
    Teacher(const std::string& name_in = "No Name")
        : t_name(name_in)
    {}

    void setName(const std::string& name_in)
    {
        t_name = name_in;
    }

    std::string getName()
    {
        return t_name;
    }

    friend std::ostream & operator<<(std::ostream & out, const Teacher & teacher)
    {
        out << teacher.t_name;
        return out;
    }
};
