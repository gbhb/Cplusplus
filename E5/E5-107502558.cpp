
/*****************************************
* Exercise 5
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>

using namespace std;


int re1(int,int);
int re2(int);
int n=1,r=0;
int main()
{
    for(;;)
    {

        cout << "Please key in first number : " ;
        cin >> n;
        if(n==0)
        {
            break;
        }
        cout << "Please key in second number : " ;
        cin >> r;
        cout << re1(n,r)/re2(r) << endl << "===================="<<endl;
    }
    return 0;
}
int re1(int n,int r)
{
    if(r>1)
    {
        return n=n*re1(n-1,r-1);
    }
    return n;
}

int re2(int r)
{
    if(r>1)
    {
        return r=r*re2(r-1);
    }
    return r;
}

