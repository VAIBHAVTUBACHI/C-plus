include<iostream>
using namespace std;


class Teacher{  // Parent
    public:
    string person;

};
class student : public Teacher{  // first child
      public:
      int marks;
};
class gradstudent : public Teacher{  // second child
    public:
    int roll_no;

};
int main()
{
    student s1;
    gradstudent g1;
    s1.marks=50;
    s1.person="vaibhav";
    g1.person="sheetal";
    g1.roll_no=90;
    cout<<g1.person<<g1.roll_no<<s1.marks<<s1.person;

}