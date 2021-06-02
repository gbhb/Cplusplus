/*****************************************
* Assignment 5
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>

using namespace std;

int gcd(int, int);

int main()
{

    int num1=1; //input first number to choose gcd or lcm or quit
    while(num1!=0)
    {
        int m = 0; // first number of case
        int n = 0; // second number of case

        cout << "(1)Find Greatest Common Divisor of two number."<<"\n"<<"(2)Find Lowest Common Multiple."<<"\n"<<"(0)Quit the Program."<<"\n"<<"Input the number to choose: ";
        cin >> num1;
        if(num1==0){
            break;
        }
        cout << "Input two numbers: ";
        cin >> m >> n;
        if(num1==1)
        cout << "Result: "<< gcd(m, n) << endl <<"=========="<<endl;
        if(num1==2)
        cout << "Result: "<< m*n/gcd(m, n) << endl <<"=========="<<endl;


    }
    return 0;
}

int gcd(int m, int n)
{
    int r;
    /*if(n == 0)
        return m;
    else
        return gcd(n, m % n);*/
        while(n != 0) { //or n
        r = m % n;
        m = n;
        n = r;
    }
     return m;

}
