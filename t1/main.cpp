#include <iostream>
#include "Circle.h"
using namespace std;
Circle::Circle()
{
    this->r=5.0;
}

Circle::Circle(double R)
{
    this->r=R;
}

double Circle:: Area()
{
    return 3.14*r*r;
}
int main()
{
    Circle c(3);
    cout<<"Area="<<c.Area()<<endl;
    return 1;
}
