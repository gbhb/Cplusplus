#include "mystring.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//create a Mystring object and set str a value
Mystring::Mystring(const char* s)
{
    str = s;
}

//set str a value
void Mystring::setString(const char* s)
{
    str=s;
}

//return value of str
const char* Mystring::getString()
{
    return str;
}

//dst: get substring, start and length: start the ith char to get each char and stop when length of substring >= length
void Mystring::subString(char* dst, int start, int length)
{
    int i=0;
    for(;i<length;i++){
        dst[i]=str[start];
        start++;
    }
    dst[i]='\0';
}

//return length of str
int Mystring::length()
{
    int l=0,a=0;
    for(;;a++){
        if(str[a]=='\0'){
           break;
        }
        l++;
    }
    return l;
}


//Parse whether a digits string is Time format. if true, print it; else, print error
void tryParseTime(const char* s)
{

    int i=0;
    int day;
    int year;
    int month;
    int a,c=0;
    a=atoi(s);
    if(a<0){
        a=a*-1;
        c++;
    }
    year=a/10000;
    month=a%10000/100;
    day=a%100;
    int rday[13] ={ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if ( (month>0&&month<13)&& ((day > 0 && day <= rday[ month ] )||(month == 2 && day == 29 && ( year % 400 == 0 ||( year % 4 == 0 && year % 100 != 0 ) )))){

            if(c==1){
                cout <<"B.C. "<<setw(2)<<setfill('0')<<year<<"-"<<setw(2)<<setfill('0')<<month<<"-"<<setw(2)<<setfill('0')<<day<<endl;
            }else{
                cout<< "A.D. "<<setw(2)<<setfill('0')<<year<<"-"<<setw(2)<<setfill('0')<<month<<"-"<<setw(2)<<setfill('0')<<day<<endl;
            }


    }else{
    cout<<"error"<<endl;
    }


}


