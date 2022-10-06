#include<iostream>
using namespace std;
class Complex
{
   private:
    int real;
    int Imag;

    public:
    void setData(int x,int y)
    {
        real=x;
        Imag=y;
    }
    void getData()
    {
        cout<<"real value is= "<<real<<"Imag value is ="<<Imag<<endl;
    }
};
int main()
{
    Complex c1;
    c1.setData(4,3);
    c1.getData();
    return 0;
}