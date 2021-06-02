
/*****************************************
* Assignment 6
* Name: ╖fли©╚
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iomanip>
void HP(int,int);
using namespace std;
int main()
{
    srand( time( NULL ) );
    int m = rand() %101; //m is answer
    int low=0;
    int high=100;
    int Count=0;
    int hp;
    bool guessed=false;
    int guess;
    cout<<"The answer number is : "<<m<<endl;
    cout<<"Set your MaxHp : ";
    cin>>hp;
    cout<<"HP : ";
    for (int a=0; a<hp ; a++) //a is countet
        cout <<"*";
    cout <<endl<<endl;
    while(guessed==false)
    {
        if(hp-Count==0)
        {
            cout<<"Sorry, you die"<<endl;
            break;
        }
        cout<<"Please guess a number from "<<low<<" to "<<high<<endl;
        cout<<"Your guess : ";
        cin>>guess;
        if(guess<low||guess>high)
        {
            Count++;
            if(hp-Count==0)
            {
                cout<<"HP : ";
                for (int a=0; a<hp ; a++)
                    cout <<"_";
                cout <<endl;
                     cout<<"Sorry, you die"<<endl;
                break;
            }
            cout<<"Your guess is out of range, please try again"<<endl;
            HP(hp,Count);
            cout <<endl<<endl;
            continue;
        }

        Count++;

        if(guess==m)
        {
            cout<<"Congratulations! You get the answer in "<<Count<<" times "<<endl;
            guessed=true;
        }
        else if(guess>m)
        {
            if(hp-Count==0)
            {
                cout<<"HP : ";
                for (int a=0; a<hp ; a++)
                    cout <<"_";
                cout <<endl;
                     cout<<"Sorry, you die"<<endl;
                break;
            }
            low=low;
            high=guess;
            cout<<"Wrong answer."<<endl;
            HP(hp,Count);
            cout <<endl<<endl;
        }
        else
        {
            if(hp-Count==0)
            {
                cout<<"HP : ";
                for (int a=0; a<hp ; a++)
                    cout <<"_";
                cout <<endl;
                     cout<<"Sorry, you die"<<endl;
                break;
            }
            low=guess;
            high=high;
            cout<<"Wrong answer."<<endl;
            HP(hp,Count);
            cout <<endl<<endl;
        }

    }
    return 0;
}
void HP (int hp,int Count)
{
    cout<<"HP : ";
    for (int a=0; a<hp-Count ; a++)
            {
                cout <<"*";
            }
            for (int a=0; a<Count ; a++)
            {
                cout <<"_";
            }
}
