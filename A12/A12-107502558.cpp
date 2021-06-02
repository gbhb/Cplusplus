
/*****************************************
* Assignment 10
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <string>
#include "A12-107502558class.h"
using namespace std;
int a,b,c,aa,bb,ch,v=0,vv=0,mch; //single is player double is enemy ,ch=choose
string n,w,nn,dd;// v for save date
int main()
{
    player p;
    enemy e;
    cout << "Please Create a hero:" << endl<<"Name: ";
    cin >> n;
    p.setname(n);
    cout <<"Hp: ";
    cin >> b;
    p.sethp(b);
    cout <<"Atk: ";
    cin >> c;
    p.setatk(c);
    cout << p.getname()<< "'s Weapon: ";
    cin >>w;
    p.setwp(w);
    cout << p.getname()<< "'s Weapon Atk: ";
    cin >>a;
    p.setwpa(a);

    cout <<endl<<"Please Create an enemy: "<< endl<<"Name: ";
    cin >> nn;
    e.setname(nn);
    cout <<"Hp: ";
    cin >> bb;
    e.sethp(bb);
    cout << "Atk: ";
    cin >>aa;
    e.setatk(aa);
    cout << "DropItem: " ;
    cin >>dd;
    e.setdp(dd);
    cout << "==========" <<endl;
    cout <<"A Wild "<<e.getname()<<" appeared!"<<endl;
    for(;;)
    {
        cout << "What will "<<p.getname()<<" do?"<<endl;
        cout <<p.getname()<< "'s Hp: "<<p.gethp()<<endl;
        cout <<e.getname()<< "'s Hp: "<<e.gethp()<<endl;
        cout <<"1.Attack 2.Do nothing"<<endl;
        cin >>ch;
        if(ch==2)
        {
            cout <<p.getname()<< " is doing nothing."<<endl;
            continue;
        }
        if(ch==1)
        {
            vv=e.gethp()-p.getatk()-p.getwpa();
            e.sethp(vv);
            cout <<p.getname()<< " use "<<p.getwp()<<" and hurt "<<e.getname()<<" "<<p.getatk()+p.getwpa()<<" points."<<endl;
            if(vv<=0)
            {
                cout <<p.getname()<<" win!"<<endl;
                cout <<e.getname()<<" dropped item "<<e.getdp()<<" left on the ground."<<endl;
                cout <<"Want another adventure?"<<endl;
                cout <<"1. Yes 2. No"<<endl;
                cin >>mch;
                if(mch==1)
                {
                    e.sethp(bb);
                    ch=0;
                    continue;
                }
                if(mch==2)
                {
                    cout <<"Game Over" <<endl;
                    break;
                }
            }
            v=p.gethp()-e.getatk();
            p.sethp(v);
            cout <<e.getname()<<" hurt "<<p.getname()<<" "<<e.getatk()<<" points."<<endl;
            if(v<=0)
            {
                cout <<e.getname()<<" win!"<<endl;
                cout <<p.getname()<<"'s weapon \""<<p.getwp()<<"\" left on the ground."<<endl;
                cout <<"Game Over" <<endl;
                break;
            }
        }
    }




return 0;
}
