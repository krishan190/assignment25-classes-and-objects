#include<iostream>
using namespace std;
class Reverse
{
   int actual_num;
   int Reverse_num;
   public:
   void set_num(int n)
   {
    actual_num=n;
   }
   int get_num()
   {
       return actual_num();
   }
   int getreverse()
   {
    return Reverse_num;
   }

   void calc_reverse()
   {
    int r,y=0;
    while(n>=0)
    {
        r=n%10;
        y=y*10+r;
        n=n/10;
    }
    Reverse_num=y;
   }

};
int main()
{
    Reverse r1;
    r1.set_num(5432);
    r1.calc_reverse();

}