#include<iostream>
using namespace std;
class Area
{
   int r;
   float area;
   public:
   void setN(int x)
   {
     r=x;
   }
   int getArea()
   {
    return area;
   }
   void calcArea()
   {
    int A;
    A=3.14*r*r;
    area=A;
   }
};
int main()
{
    Area a1;
    a1.setN(7);
    a1.calcArea();
    cout<<"Area of circle "<<a1.getArea()<<endl;
    return 0;
}