#include <iostream>

using namespace std;

class Mother
{
public:
    int m_i;

    Mother(const int & i_in = 0)
        : m_i(i_in)
    {
        cout<<"Mother contruction "<<m_i << endl;
    }
};

class Child : public Mother
{
public:
    double m_d;

public:
    Child()
        : m_d(1.0), Mother(1)
    {
        cout<<"Child contruction " << endl;
        //this->m_i = 10;
    }
};

int main()
{
    Child c1;

    return 0;
}
