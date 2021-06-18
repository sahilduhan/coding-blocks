#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll_num;
    int age;
    Student(int num, int roll_val)
    {
        age = num;
        roll_num = roll_val;
        cout << "the age"
             << " " << age << " roll num is"
             << " " << roll_num << endl;
    }
    void display()
    {
        cout << "the age"
             << " " << age << " roll num is"
             << " " << roll_num << endl;
    }
};
int main()
{
    Student sahil(19, 12);
    Student duhan(sahil);
    duhan.display();

    return 0;
}