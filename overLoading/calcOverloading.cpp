#include <iostream>
using namespace std;

class Cents
{
private:
    int m_cents;

public:
    Cents(int cents = 0) { m_cents = cents;}
    int getCents() const {return m_cents;}
    int& getCents() {return m_cents;}

    Cents operator - () const
    {
        return Cents(-m_cents);
    }

    bool operator !() const
    {
//        if (m_cents == 0)
//        {
//            return false;
//        } else { return true;}
        return (m_cents == 0) ? true : false;
    }

    friend std::ostream& operator << (std::ostream &out, const Cents &cents)
    {
        out << cents.m_cents;
        return out;
    }
};

int main()
{
    Cents cents1(6);
    cout << cents1 << endl;
    cout << -cents1 << endl;
    int a = 3;
    auto temp = !cents1;
    cout << temp << endl;
    return 0;
}
