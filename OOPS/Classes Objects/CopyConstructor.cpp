#include <iostream>
using namespace std;
class Student
{
    int num;

public:
    Student()
    // This is Copy Constructor
    {
        num = 0;
    }
    Student(int num1)
    {
        num = num1;
    }
    Student(Student &num2)
    {
        num = num2.num;
    }
    void display()
    {
        cout << "Return the value of Number : " << num;
    }
};

int main()
{
    Student A(100);
    Student B(A);
    Student C = B;
    Student D;
    D = A;
    A.display();
    cout << endl;
    B.display();
    cout << endl;
    C.display();
    cout << endl;
    D.display();
    cout << endl;

    return 0;
}