#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;


    void display(){
        cout<<"Student Name :" << name << endl;
        cout<<"Student Age :" << age << endl;
    }
};

int main(){
    student st1;
    st1.name = "Lakshit paliwal";
    st1.age = 19;
    st1.display();

    return 0;
}