/*****************************************
* Assignment 4
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include<iostream>
using namespace std;
int main ()
{

    int h,i,j,k=0;//h is Number of layers ,i is Control item, j and k are used to control the number of star
    h=10;

    for(i=1;i<=h;i++)
    {
        for(j=1;j<=h-i;j++)
        {
        cout<<" ";
        }

        for(j=1;j<=i+k;j++)
        {
            if(k==9){              // the last layer is all *
            cout << "*";
            }
            else if(j==1||j==i+k){ // when start and end
            cout << "*";           // print *
            }else{
            cout << "\\";
            }
        }
        cout<<endl;
        k+=1;

    }
    return 0;
}
