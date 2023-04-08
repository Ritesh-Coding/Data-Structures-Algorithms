#include<iostream>
using namespace std;
class Student
{
    public:
    int rollno;
    static int total_students;
    Student()
    {
        total_students++;
    }

};

int Student :: total_students=20; //here we declared total_students as static hence by default it takes 0 value in initilization
int main()
{
    Student s1,s2,s3;
    cout<<s1.total_students<<endl;
    cout<<s1.rollno;
    return 0;
}