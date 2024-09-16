#include <iostream>
#include <string>                                                  
using namespace std;
class Teacher{
        
        private:
            double salary;
            
        public:
            string dept;
            Teacher(string dept){
                this->dept=dept; //using this pointer 
               // std::cout << dept;
            }
            Teacher(Teacher &obj){
                cout<<"i am custom copy ";
                cout<<obj.dept;
                cout<<"end of  custom copy ";
            }
            void getinfo()
            {
                    cout<<dept;
            }
            
    };
int main() {
    // Write C++ code here
    Teacher t1("computer science");
    Teacher t2(t1); // copy constructor is invoked automatically
    t2.getinfo(); 
    
    return 0;
}