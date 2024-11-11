#include<iostream>
using namespace std;

class Shape{
     virtual void draw()=0; //  By declaring a pure virtual function we make the class as abstract
};
class Circle :public Shape{
    public:
    void draw()
    {
            cout<<"i am a circle";
    }
     
};

int main()
{
    Circle c1;
    c1.draw();

}