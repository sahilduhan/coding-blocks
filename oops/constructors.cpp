#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int age;
    int roll_num;
    void display()
    {
        cout << "the age and the roll number of the student is " << age << " " << roll_num << endl;
    }
    Student()
    {
        cout << "no args constructor called" << endl;
    }
    void set_age(int value, int number)
    {
        age = value;
        roll_num = number;
        cout << "the age and  roll number is " << age << " " << roll_num << endl;
    }
};

int main()
{

    return 0;
}