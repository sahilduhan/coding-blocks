#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll_num;
    int age;

    void display()
    {
        cout << age << " " << roll_num << endl;
    }
    int get_age()
    {
        return age;
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
    sahil.age = 19;
    sahil.roll_num = 12;
    sahil.display();
    // cout << sahil.get_age();

    sahil.set_age(19, 100);
    return 0;
}