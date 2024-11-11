#include<iostream>
using namespace std;

//functions with same name with different parameters
//constructors with same name with different parameters
class print{
    public:
    string name;
            print()
            {
                cout<<"i am constructor";
            }
            print(string name)
            {
                this->name=name;
                cout<<name;
            }
            void number()
            {
                cout<<"i am number";
            }
            void number(string name)
            {
                this->name=name;
                cout<<name;
            }
};

int main()
{
   // print p1; // this will invoke print() constructor
   //print p1("vaibhav"); // this will inovke the constructor with the parameter
   print p1;
   p1.number(); //this will invoke number() function
   p1.number("vaibhav"); //this will invoke number(name) function
}