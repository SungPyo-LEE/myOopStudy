#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_numerator = 0;
    int m_denomiator = 1;

public:
    //Fraction () {} // default constructor hiding
    Fraction(const int& num_in, const int& denum_in)
    {
        m_numerator = num_in;
        m_denomiator = denum_in;
        cout <<"Fraction Constructor ()"<< endl;

    }
    void print()
    {
        cout << m_numerator << "-" << m_denomiator << endl;
    }
};

int main()
{
//    Fraction frac;
//    frac.print();
    //Fraction one_thirds(1, 3);
    Fraction one_thirds = Fraction{1, 3};
    one_thirds.print();
    return 0;
}
