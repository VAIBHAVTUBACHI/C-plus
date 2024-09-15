#include<iostream>
using namespace std;
#include <string.h>
/*
What is objects?
->Objects are entities in the real world
 
What is a class?
-> Class is a blueprint of these entities
*/
class car{
  public:     // datas and methods are accessible to everyone
      int car_no;
      string name;

      int get()
      {
        return car_VIN;
      }
      void set(int car_VIN)
      {
        this->car_VIN=car_VIN;
        
      }
  private:    // datas and methods are accessible inside class
      int car_VIN;
};

int main()
{
    car car1;
    car1.car_no=5879;
    car1.name="Mustang";
    car1.set(568);
    
    cout<<car1.get();;
    cout<<car1.name;
   
   

   return 0;
}