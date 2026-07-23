#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int age;
    int roll_no;
    Student(int id, string name, int age, int roll_no)
    // This is Constructor
    {
        cout << "This is Constructor" << endl;
        this->id = id;
        this->name = name;
        this->age = age;
        this->roll_no = roll_no;
    }

    void Learning()
    {
        cout << "Student is Learning" << endl;
    }
    void Sleeping()
    {
        cout << "Student is Sleeping" << endl;
    }

    void display()
    {
        cout << "ID:" << id << endl;
        cout << "Name:" << name << endl;
        cout << "Age:" << age << endl;
        cout << "Roll_no:" << roll_no << endl;
    }
    ~Student()
    {
        // This is Deconstructor
        cout << "This is Destructor" << endl;
    }
};

int main()
{
    Student str1(01, "Lakshit paliwal", 20, 2601);
    cout << "Student Id:" << str1.id << endl;
    cout << "Student Name:" << str1.name << endl;
    cout << "Student Age:" << str1.age << endl;
    cout << "Student Roll_No:" << str1.roll_no << endl;
    str1.display();
    str1.Learning();
    str1.Sleeping();
    return 0;
}