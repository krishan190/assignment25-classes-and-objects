#include<iostream>
using namespace std;
class largest
{
  int a,b,c;
  public:
  void setData(int x,int y,int z)
  {
      a=x;
      b=y;
      c=z;
  }
 
  void calc_largest()
  {
      if(a>b)
      {
          if(a>c)
          cout<<a;
          else
          cout<<c;
      }
      else
      {
        if (b>c)
          cout<<b;
        else
          cout<<c;
      }
  }
};
int main()
{
    largest l1;
    l1.setData(4,3,7);
    l1.calc_largest();
}