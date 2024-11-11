#include<iostream>
using namespace std;

class Parent{
    public:
    void getinfo()
    {
        cout<<"i am parent";
    }

};

class child : public Parent{ // inheritance is done here 
    public:
    void getinfo()
    {
        cout<<"i am child";
    }

};

int main()
{
    child c1;  // child classs over rides the parent class
    c1.getinfo();
  
   return 0;
}