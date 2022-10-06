#include<iostream>
using namespace std;
class Time
{
   private:
   int HR,MIN,SEC;
   public:
   void setTime(int h,int m,int s)
   {
    HR=h;
    MIN=m;
    SEC=s;
   }
   void showTime()
   {
    cout<<HR<<" hr "<<MIN<<" min "<<SEC<<" sec "<<endl;
   }
   void normalize()
   {
       MIN=MIN+SEC/60;
       SEC=SEC%60;
       HR=HR+MIN/60;
       MIN=MIN%60;
   }
};
int main()
{
    Time t1;
    t1.setTime(4,100,100);
    t1.normalize();
    t1.showTime();
    return 0;
}