#include <iostream>
#include <fstream>
using namespace std;

class point
{
private:
    double m_x, m_y, m_z;

public:
    point(double x = 0.0, double y = 0.0, double z = 0.0)
        : m_x(x), m_y(y), m_z(z)
        {}
    double getX() {return m_x;}
    double getY() {return m_y;}
    double getZ() {return m_z;}

    friend std::ostream& operator << (std::ostream &out, const point &p)
    {
        out << p.m_x <<" " << p.m_y<< " " <<p.m_z << "end one\n";
        return out;
    }

    friend std::istream& operator >> (std::istream &in, point &p)
    {
        in >> p.m_x >> p.m_y >> p.m_z;
        //out << p.m_x <<" " << p.m_y<< " " <<p.m_z << "end one\n";
        return in;
    }
};

int main()
{

    ofstream of("out.txt");
//    point p1(1.2, 3.3, 4.4);
//    point p2 (1.2, 3.1);
    point p1, p2;

    cin >> p1 >> p2;
    of << p1 << " " << p2 << endl;

    of.close();

    return 0;
}
