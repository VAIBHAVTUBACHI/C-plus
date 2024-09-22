#include<iostream>
using namespace std;

//parent class , first constructor of parent class is called 
class teacher{
    public:
    int roll_no;
    teacher()
    {
         cout<<" i am parent constructor";
    }
    teacher(int roll_no)
    {
       
        this->roll_no=roll_no;
    }
    private:
};

//child class, then constructor of child class is called
class student : public teacher{
    public:
    float cgpa;
    student(float cgpa)
    {
        this->cgpa=cgpa;
        cout<<" i am child constructor";
    }
    void getInfo()
    {
        cout<<roll_no;
        cout<<cgpa;
    }


};
int main()
{
    teacher t1(58);
    student s1(8.7);
   return 0;
}