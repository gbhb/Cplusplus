#include "A12-107502558class.h"
#include <string>
#include <iostream>
using namespace std;
player::player()
{
}
enemy::enemy()
{
}
void player::sethp( int h )
{
   this->hp=h;
}
void player::setatk(int h )
{
   this->atk=h;
}
void player::setwpa( int h )
{
   wpa=h;
}
void player::setname( string h )
{
   this->name=h;
}
void player::setwp( string h )
{
   wp=h;
}
void enemy::sethp( int h )
{
   this->hp=h;
}
void enemy::setatk( int h )
{
   this->atk=h;
}
void enemy::setname( string h )
{
   this->name=h;
}
void enemy::setdp( string h )
{
   dp=h;
}
int player::gethp()
{
   return this->hp;
}
int player::getatk()
{
   return this->atk;
}
int player::getwpa()
{
   return wpa;
}
string player::getname()
{
   return this->name;
}
string player::getwp()
{
   return this->wp;
}
int enemy::gethp()
{
   return this->hp;
}
int enemy::getatk()
{
   return this->atk;
}
string enemy::getname()
{
   return this->name;
}
string enemy::getdp()
{
   return dp;
}
