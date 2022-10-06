#include <iostream>
using namespace std;
class square
{
    int n;
    int sq;

public:
    void setN(int x)
    {
        n = x;
    }
    int getN()
    {
        return n;
    }
    int getsquare()
    {
        return sq;
    }
    void calcsquare()
    {
        int s;
        s = n * n;
        sq = s;
    }
};
int main()
{
    square s1;
    s1.setN(9);
    s1.calcsquare();
    cout << "squre of " << s1.getN() << " is " << s1.getsquare() << endl;
    return 0;
}