#include<iostream>
using namespace std;

class Teacher{
    public:
      int roll_no;
      float *cgpaptr;

      Teacher(int roll_no, float cgpa)
      {
        this->roll_no =roll_no;
        cgpaptr= new float;
        *cgpaptr=cgpa;
      }
        // copy constructor for Deep copy 
        //for shallow copy the compiler automatically creates a copy constructor 
      Teacher(Teacher &obj)
      {
            this->roll_no = obj.roll_no;
            cgpaptr=new float; /// creates a new memory location for the variable and stores the value
            *cgpaptr=*obj.cgpaptr;
            
      }

      void getInfo()
      {
       // cout<<roll_no;
        cout<<"\n"<<(*cgpaptr);
      }
};
int main()
{
    Teacher t1(0,1.1f);
    Teacher t2(t1);
    Teacher t3(t2);
    *(t2.cgpaptr)=2.1;
    *(t3.cgpaptr)=3.1;
    t1.getInfo();
    t2.getInfo();
    t3.getInfo();
    
   return 0;
};