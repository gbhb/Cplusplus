
/*****************************************
* Exercise 4
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
enum name { cat=0,dog=1,bird=2,fish=3,rabbit=4};
int c,num,r,ca=0,d=0,bi=0,fi=0,ra=0;//c=case,num=numbers of animals ,ca=count how many cat,and so on
int main()
{
    srand(time(0));
    cout << "Input the number of cases : ";
    cin >> c;
    for(; c>0; c--)
    {
        r=rand()%5;
        cout << "Input the number of animals : ";
        cin >> num;
        for(; num>0; num--)
        {
            r=rand()%5;
            if(r==cat)
            ca++;
            if(r==dog)
            d++;
            if(r==bird)
            bi++;
            if(r==fish)
            fi++;
            if(r==rabbit)
            ra++;
        }
        cout << "cat:    "<<ca<<endl<<"dog:    "<<d<<endl<<"bird:   "<<bi<<endl<<"fish:   "<<fi<<endl<<"rabbit: "<<ra<<endl<<endl;
        ca=0;
        d=0;
        bi=0;
        fi=0;
        ra=0;
    }



    return 0;
}
