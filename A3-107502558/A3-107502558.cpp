/*****************************************
* Assignment 3
* Name: 呂旻翰
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a=0,b=0,c=0;// Three Side lengths
    float area; // the area of triangle
    float s=0,st; // for Helen formula
    cout << "Please key in first number:" << endl;
    cin >> a ;// input first side length
    cout << "Please key in second number:" << endl;
    cin >> b ;// input second side length
    cout << "Please key in third number:" << endl;
    cin >> c ;// input third side length
    s=(a+b+c)/2;
    st=s*(s-a)*(s-b)*(s-c);
    area = sqrt(st);

    if(a+b<c)
    {
        area=0;
        cout <<"Total area = "<< area <<endl;
        cout <<"Not triangle"<<endl;
    }
    else if(c*c==b*b+a*a && a==b)
    {
        cout <<"Total area = "<< area <<endl;
        cout <<"Isosceles right triangle"<<endl;
    }
    else if(a==b && b==c)
    {
        cout <<"Total area = "<< area <<endl;
        cout <<"Regular triangle"<<endl;
    }
    else if(a==b)
    {
        cout <<"Total area = "<< area <<endl;
        cout <<"Isosceles triangle"<<endl;
    }
    else if(c*c==b*b+a*a)
    {
        cout <<"Total area = "<< area <<endl;
        cout <<"Right triangle"<<endl;
    }
    else
    {
        cout <<"Total area = "<< area <<endl;
        cout <<"Triangle(not above)"<<endl;
    }
    return 0;
}
