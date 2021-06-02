/*****************************************
* Exercise 3
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
using namespace std;
long long unsigned int fibonacci(long  long int);
int factorial(int);

int main()
{
    int n;// n is what you input //
    for(;;)
    {
        cout << "Input a number: ";
        cin >> n;
        if(n==0){
            break;
        }
        cout << "Fibonacci of " <<n<<": "<< fibonacci(n)<<"\n"<<"Factorial of "<<n<<": "<<factorial(n)<<"\n"<<"=========="<<"\n";

    }
    return 0;
}
long long unsigned int fibonacci(long long int num){ //num is the number put in function
    long long unsigned int  t1 = 0, t2 = 1, nextTerm = 1; //ti is first of fibonacci row , t2 is second , nextTerm is we want
    for (int i = 1; i < num; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return nextTerm;

}
int factorial(int num){ //num is the number put in function
    int factorial=1,i; //i to control
    for(i = 1; i <=num; i++)
    {
        factorial *= i;
    }
    return factorial;
}
