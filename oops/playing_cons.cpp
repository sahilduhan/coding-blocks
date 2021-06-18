#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll_num;
    int age;

    Student(int num)
    {
        cout << "single args " << endl;
    }
    Student(int num, int roll_val)
    {
        age = num;
        roll_num = roll_val;
        cout << "the age"
             << " " << age << " roll num is"
             << " " << roll_num << endl;
    }
    Student(int num, int val, int key)
    {
        cout << "tripple args " << endl;
    }
    ~Student()
    {
        cout << "destructor called" << endl;
    }
};
int main()
{


    return 0;
}