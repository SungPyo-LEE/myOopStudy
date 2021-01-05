// 정리를 잘하는 뛰어난 프로그래머가 되자..

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date
{
private: //access specifer
    int m_month;
    int m_day;
    int m_year;
public:
    void setDate(const int& month_input, const int& day_input, const int& year_input)
    {
        m_month = month_input;
        m_day = day_input;
        m_year = year_input;
    }
    int getMonth()
    {
        return m_month;
    }
    int getDay()
    {
        return m_day;
    }
    void copyFrom(const Date& original)
    {
        m_month = original.m_month;
        m_day = original.m_day;
        m_year = original.m_year;
    }
};

int main()
{
    Date today;
//    today.m_month = 1;
//    today.m_day = 5;
//    today.m_year = 2021;
    today.setDate(1, 5, 2021);
    int a = today.getMonth();


    Date copy;
    copy.copyFrom(today);
    int b = today.getDay();
    cout << b << endl;
    return 0;
}
