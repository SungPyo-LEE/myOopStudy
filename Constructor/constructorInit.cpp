#include <iostream>
using namespace std;

class B
{
private:
    int m_b;

public:
    B(const int& m_b_in)
        : m_b(m_b_in)
    {}
};


class Something
{
private:
    int m_i = 100; // 3��
    double m_d;
    char m_c;
    int m_array[5];
    B m_b;

public:
    Something()
        : m_i {3} // <- �����ڰ� �ʱ�ȭ �켱�� �ȴ�. 2��
        , m_d{3.14}
        , m_c{'a'}
        , m_array{1,2,3,4,5}
        , m_b{m_i - 1}
    {
        m_i *= 3; // <- �����ڰ� �ʱ�ȭ �켱�� �ȴ�. 1�� ���ʴ�� ������ �ż� �׷���
        m_d *= 1.2;
        m_c += 3; // a+3 = d
    }

    void print()
    {
        cout << m_i <<" " << m_d << " " << m_c <<endl;
        for(auto& e:m_array)
            cout << e << " ";
        cout << endl;
    }
};

int main()
{

    Something sth;
    sth.print();
    return 0;
}
