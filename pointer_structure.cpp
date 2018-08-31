#include <iostream>

using namespace std;

struct Student{
    int ID;
    int Age;
    float Height;
};

int main(){
    // two instances of struct
    Student stu1;
    Student stu2;
    stu1.ID = 11510478;
    stu1.Age = 21;
    stu1.Height = 180.0;
    stu2.ID = 11510818;
    stu2.Age = 22;
    stu2.Height = 178.8;

    // pointer and struct
    Student *pointer1;
    pointer1 = &stu1;
    cout << "Student ID: " << pointer1 ->ID << "\n";
    cout << "Student Age: " << pointer1 ->Age << "\n";
    cout << "Student Height: " << pointer1 ->Height << "\n";

    Student *pointer2;
    pointer2 = &stu2;
    cout << "Student ID: " << pointer2 ->ID << "\n";
    cout << "Student Age: " << pointer2 ->Age << "\n";
    cout << "Student Height: " << pointer2 ->Height << "\n";
}
