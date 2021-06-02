
/*****************************************
* Exercise 7
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <string.h>
using namespace std;
string str;
int c;
int main()
{
    cin >>c;
    getline(cin,str);
    for(int i=0;i<c;i++){
    getline(cin,str);
        for(int i=0; i<str.length(); i++){

            if(str[i]>=65 && str[i]<=90){
                cout << (char)(str[i]+32);
            }
            else if(str[i]>=96 && str[i]<=122){
                cout << (char)(str[i]-32);
            }
            else{
                cout << str[i];
            }
        }
        cout << endl;


    }

    return 0;
}
