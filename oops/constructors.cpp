#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int age;
    int roll_num;
    Student()
    {
        cout << "no args constructor called" << endl;
    }
    Student(int age, int roll_num)
    {
        cout << "constructor with two args is called" << endl;
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
    Student sahil;
    sahil.set_age(19, 12);
    Student duhan(23, 15);

    return 0;
}