#include<iostream>
using namespace std;

class Teacher{
    public:
    Teacher()   
    {
        cout<<"non-parameterised\n";
    }

    string name;
    Teacher(string name)   
    {
        this->name = name;
        cout<<"parameterised\n";
    }
};

int main()
{
   // Teacher t1; // if this is enabled then non-parameterised constructor is called
    Teacher t1("vaibhav"); //if this is enabled then parameterised constructor is called
}