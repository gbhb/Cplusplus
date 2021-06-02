/*****************************************
* Assignment 7
* Name: 呂旻翰
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

char wb[2][2]= {{'X','X'},{'X','X'}};
char ct[6][6]= {{'X','X','X','X','X','X'},{'X','X','X','X','X','X'},{'X','X','X','X','X','X'},{'X','X','X','X','X','X'},{'X','X','X','X','X','X'},{'X','X','X','X','X','X'}};
using namespace std;
int i,j,x,y,c,xx,yy; //x,y for contaier xx,yy for workbench

int main()
{
    for(;;)
    {
        cout <<"Robotic arm simulator Program.Choose your Operation (1~8):"<<endl<<"1. Input material to Container."<<endl<<"2. Move material to Workbench from Container."<<endl<<"3. Back material to Container from Workbench."<<endl<<"4. Change the box's position in Container."<<endl<<"5. Output material from Container."<<endl<<"6. Gathering the boxes."<<endl<<"7. Show Container and Workbench inside."<<endl<<"8. Quit the program."<<endl;
        cin >>c>>x>>y>>xx>>yy;
        if(c==8)
        {
            cout<<"Container:"<<endl;
            for(i=0; i<6; i++)
            {
                for(j=0; j<6; j++)
                {
                    cout<<ct[i][j];
                }
                cout<<endl;
            }
            cout<<endl<<"Workbench:"<<endl;
            for(i=0; i<2; i++)
            {
                for(j=0; j<2; j++)
                {
                    cout<<wb[i][j];
                }
                cout<<endl;
            }
            break;
        }
        if(c==1)
        {
            if(x<1||x>6)
            {
                cout<<x<<" is larger than Container Vertical size."<<endl;
                continue;
            }
            if(y<1||y>6)
            {
                cout<<y<<" is larger than Container Horizontal size."<<endl;
                continue;
            }
            if(ct[x-1][y-1]=='O')
            {
                cout <<"Container "<<x<<" "<<y<<" already be occupied."<<endl;
                continue;
            }
            ct[x-1][y-1]='O';
            cout<<"Successfully input material to Container "<<x<<" "<<y<<"."<<endl;
        }
        if(c==2){
            if(x<1||x>6)
            {
                cout<<x<<" is larger than Container Vertical size."<<endl;
                continue;
            }
            if(y<1||y>6)
            {
                cout<<y<<" is larger than Container Horizontal size."<<endl;
                continue;
            }
            if(xx<1||xx>2)
            {
                cout<<xx<<" is larger than Workbench Vertical size."<<endl;
                continue;
            }
            if(yy<1||yy>2)
            {
                cout<<yy<<" is larger than Workbench Horizontal size."<<endl;
                continue;
            }
            if(ct[x-1][y-1]=='X')
            {
                cout <<"Container "<<x<<" "<<y<<" is empty."<<endl;
                continue;
            }
            if(wb[xx-1][yy-1]=='O')
            {
                cout <<"Workbench "<<xx<<" "<<yy<<" is occupied."<<endl;
                continue;
            }
            ct[x-1][y-1]='X';
            wb[xx-1][yy-1]='O';
            cout<<"Successfully move material from Container "<<x<<" "<<y<<" to Workbench "<<xx<<" "<<yy<<"."<<endl;

        }
        if(c==3){
            if(x<1||x>6)
            {
                cout<<x<<" is larger than Container Vertical size."<<endl;
                continue;
            }
            if(y<1||y>6)
            {
                cout<<y<<" is larger than Container Horizontal size."<<endl;
                continue;
            }
            if(xx<1||xx>2)
            {
                cout<<xx<<" is larger than Workbench Vertical size."<<endl;
                continue;
            }
            if(yy<1||yy>2)
            {
                cout<<yy<<" is larger than Workbench Horizontal size."<<endl;
                continue;
            }
            if(ct[x-1][y-1]=='O')
            {
                cout <<"Container "<<x<<" "<<y<<" is occupied."<<endl;
                continue;
            }
            if(wb[xx-1][yy-1]=='X')
            {
                cout <<"Workbench "<<xx<<" "<<yy<<" is empty."<<endl;
                continue;
            }
            ct[x-1][y-1]='O';
            wb[xx-1][yy-1]='X';
            cout<<"Successfully back material from Workbench "<<xx<<" "<<yy<<" to Container "<<x<<" "<<y<<"."<<endl;

        }
        if(c==4){
            if(x<1||x>6)
            {
                cout<<x<<" is larger than Container Vertical size."<<endl;
                continue;
            }
            if(y<1||y>6)
            {
                cout<<y<<" is larger than Container Horizontal size."<<endl;
                continue;
            }
            if(xx<1||xx>6)
            {
                cout<<xx<<" is larger than Workbench Vertical size."<<endl;
                continue;
            }
            if(yy<1||yy>6)
            {
                cout<<yy<<" is larger than Workbench Horizontal size."<<endl;
                continue;
            }
            if(ct[x-1][y-1]=='X')
            {
                cout <<"Container "<<x<<" "<<y<<" is empty."<<endl;
                continue;
            }
            if(ct[xx-1][yy-1]=='O')
            {
                cout <<"Container "<<xx<<" "<<yy<<" is occupied."<<endl;
                continue;
            }
            ct[x-1][y-1]='X';
            ct[xx-1][yy-1]='O';
            cout<<"Successfully change material from Container "<<x<<" "<<y<<" to Container "<<xx<<" "<<yy<<"."<<endl;

        }
        if(c==5)
        {
            if(x<1||x>6)
            {
                cout<<x<<" is larger than Container Vertical size."<<endl;
                continue;
            }
            if(y<1||y>6)
            {
                cout<<y<<" is larger than Container Horizontal size."<<endl;
                continue;
            }
            if(ct[x-1][y-1]=='X')
            {
                cout <<"Container "<<x<<" "<<y<<" is empty."<<endl;
                continue;
            }
            ct[x-1][y-1]='X';
            cout<<"Successfully output material to Container "<<x<<" "<<y<<"."<<endl;
        }
        if(c==6){
            int co=0;
            int copy[6][6];// to check origin array is same to done array
            memcpy(copy, ct, sizeof(copy));
            for(i=0; i<6; i++)
            {
                for(j=0; j<6; j++)
                {
                    if(ct[i][j]=='O'){
                        co++;
                    }
                }
            }
            if(co==0){
                cout<<"Container all is empty"<<endl;
                continue;
            }
            for(i=0; i<6; i++)
            {
                for(j=0; j<6; j++)
                {
                    ct[i][j]='X';
                }
            }
            for(i=0; i<6; i++)
            {
                if(co==0){
                    break;
                }
                for(j=0; j<6; j++)
                {
                    ct[i][j]='O';
                    co--;
                    if(co==0){
                        break;
                    }
                }
            }
            if (memcmp(ct, copy, sizeof(ct)) == 0){
                cout<<"Nothing to do."<<endl;
                continue;
            }
            cout <<"Done."<<endl;
        }
        if(c==7){
            cout<<"Container:"<<endl;
            for(i=0; i<6; i++)
            {
                for(j=0; j<6; j++)
                {
                    cout<<ct[i][j];
                }
                cout<<endl;
            }
            cout<<endl<<"Workbench:"<<endl;
            for(i=0; i<2; i++)
            {
                for(j=0; j<2; j++)
                {
                    cout<<wb[i][j];
                }
                cout<<endl;
            }
        }
        if(c<1||c>8)
        {
            cout<<"Error Function Call."<<endl;
        }


    }
    return 0;

}
