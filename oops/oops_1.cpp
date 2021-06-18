#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int age;
    int roll_num;
};
int main()
{
    Student sahil;
    sahil.age = 19;
    sahil.roll_num = 12;

    // dynamic memory allocation
    
    Student *duhan = new Student;
    (*duhan).age = 19;
    (*duhan).roll_num = 12;
    cout << duhan->age << " " << duhan->roll_num;

    return 0;
}