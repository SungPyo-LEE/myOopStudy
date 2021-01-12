#include <iostream>
using namespace std;

class Student
{
private:
    int m_id;
    string m_name;

public:

    /*Student(const int& id_in, const string& name_in)
        : m_id(id_in), m_name(name_in)
    {}

    Student(const string& name_in) // 위임 생성자. 디폴트 값 설정
        : Student(0, name_in)
    {}*/

    void init(const int& id_in, const string& name_in) // 초기화 코드의 분
    {
        m_id = id_in;
        m_name = name_in;
    }

    Student(const int& id_in, const string& name_in)
    {
        init(id_in, name_in);
    }

    Student(const string& name_in)
    {
        init(0, name_in);
    }
/*    Student(const string& name_in) // <- 엄청 비추천! 어떻게 init를 두군데나 하냐 생각만 해도 불편...
        : m_id(0), m_name(name_in)
    {}
    Student(const int& id_in, const string& name_in)
        : m_id(id_in), m_name(name_in)
    {}*/

    void print()
    {
        cout << m_id << " " << m_name << endl;
    }
};

int main()
{
    Student st1(1, "SP");
    st1.print();
    Student st2("Dash");
    st2.print();
    return 0;
}
