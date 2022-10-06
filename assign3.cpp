#include<iostream>
using namespace std;
class fact
{
    private:
    int n;
    int fact;
    public:
    void setN(int x)
    {
        n=x;
    }
    int getN()
    {
        return n;
    }
    void calc_factorial()
    {
        int f=1,i;
        if(n<=0)
        {
            fact=1;
            return;
        }
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
    fact=f;
    cout<<"factorial of "<<n<<" is "<<fact<<endl;
    }
};
int main()
{
    fact f1;
    f1.setN(5);
    f1.getN();
    f1.calc_factorial();
    return 0;
}