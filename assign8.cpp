#include <iostream>
using namespace std;
class Area
{
    int l;
    int b, area;

public:
    void setN(int x, int y)
    {
        l = x;
        b = y;
    }
    int getArea()
    {
        return area;
    }
    void calcArea()
    {
        int A;
        A = l * b;
        area = A;
    }
};
int main()
{
    Area a1;
    a1.setN(10, 20);
    a1.calcArea();
    cout << "Area of rectangle:" << a1.getArea() << endl;
    return 0;
}