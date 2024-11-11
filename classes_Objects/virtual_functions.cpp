#include<iostream>
using namespace std;

class Parent{
public:
virtual void getinfo() // this is virtual function and is declared in the base class
{
  cout<<"i am parent";
}

};

class Child :public Parent{
public:
 void getinfo()
{
  cout<<"i am child";
}
};

int main()
{
    Child c1;
    c1.getinfo(); // this will override in runtime 
   return 0;
}