#ifndef A12_H
#define A12_H

#include <string>
#include <iostream>
using namespace std;
class player
{
public:
    player();
    void sethp( int );
    void setatk( int );
    void setwpa( int );
    void setname( string );
    void setwp( string );
    int gethp();
    int getatk();
    int getwpa();
    string getname();
    string getwp();
private:
    int hp;
    int atk;
    int wpa;//weapom atk
    string name;
    string wp; //weapom

};

class enemy
{
public:
    enemy();
    void sethp( int );
    void setatk( int );
    void setname( string );
    void setdp( string );
    int gethp();
    int getatk();
    string getname();
    string getdp();
private:
    int hp;
    int atk;
    string name;
    string dp;
};




#endif
