#include<iostream>
using namespace std;

 class Teacher{
        public:
        string name;
        Teacher(string name){
            cout<<"Hi i am constructor";
            this->name=name; // this pointer is special pointer in C++ which points to the current object.
            cout<<name;
        }
        //private:

    };
int main()
{
    Teacher t1("vaibhav");
   
   return 0;
}