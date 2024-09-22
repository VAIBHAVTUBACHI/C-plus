#include<iostream>
using namespace std;

class teacher{
    public:
        float *ptr;
        teacher(){
            cout<<"hi i am constructor\n";
            ptr=new float;
        }

        // only used when dynamic memory is allocated to free up space
        ~teacher()
        {
            delete(ptr); // deletes the memory the pointer points to , but does not delete the pointer ptr
            cout<<"hi i am Destructor";
        }

};
int main()
{
    teacher t1;
        
   return 0;
}