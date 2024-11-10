#include <iostream>
using namespace std;

class Teacher{
    
  public:
  string name;
  int age;
        Teacher(string name,int age)
        {
            this->name=name;
            this->age=age;
        }
};
class student : public Teacher
{
public:
int roll_no;
  student(string name,int age,int roll_no):Teacher(name,age) // passing name and age to parent construcotr to fill them
  {
      this->roll_no=roll_no;
      cout<<name<<age<<roll_no;
  }
};
int main()
{
    student s1("vaibhav",65,75); // calling the constructors
    return 0;
}