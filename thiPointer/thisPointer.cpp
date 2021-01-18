#include <iostream>
using namespace std;

//class Simple
//{
//private:
//    int m_id;
//
//public:
//    Simple(int id)
//    {
//        this->setID(id);
//    }
//
//    void setID(int id) {m_id = id;}
//    int getID() {return m_id;}
//};
//
//int main()
//{
//    Simple s1(1), s2(2);
//    s1.setID(2);
//    cout<< &s1<<" "<<&s2 << endl;
//
//    //Simple::setID(&s1, 1);
//    return 0;
//}

class Calc
{
private:
    int m_value;

public:
    Calc(int init_value)
        : m_value(init_value)
    {}

    Calc& add(int value) {m_value += value; return *this;}
    Calc& sub(int value) {m_value -= value; return *this;}
    Calc& mul(int value) {m_value *= value; return *this;}
    Calc& print()
    {
        cout << m_value << endl;
    }
};

int main()
{
    Calc cal(10);
    cal.add(10).sub(1).mul(2);
    /*cal.add(10);
    cal.sub(1);
    cal.mul(2);*/
    cal.print();

    return 0;
}
