#include<iostream>
using namespace std;


class Teacher  // Parent 
{
    public:
    string name;
    

};

class student : public Teacher   //  LEVEL 1 of inhertiance  // Parent
{
    public:
   int roll_no;
};

class gradstudent: public student // LEVEL 2 of inheritance // Child
{
   public:
   string subject;
};
int  main()
{
     gradstudent g1;
     g1.name="vaibhav";
     g1.roll_no=90;
     g1.subject="maths";
     cout<<g1.name<<g1.roll_no<<g1.subject;

}
