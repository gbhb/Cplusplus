/*****************************************
* Assignment 9
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <string>
#include <algorithm>
#include <fstream> // contains file stream processing types
#include <cstdlib> // exit function prototype
using namespace std;

int main()
{
    // ifstream constructor opens file
    ifstream inFile( "A9_in.txt", ios::in );

    // exit program if unable to create file
    if ( !inFile ) // overloaded ! operator
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    } // end if
    int co;
    int a[4];
    inFile >> co;
    ofstream outFile("A9_out.txt", ios::out);
    if ( !outFile ) // overloaded ! operator
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }
    while(co>0)
    {
        co--;
        inFile >>a[0]>>a[1]>>a[2]>>a[3];
        sort(a,a+4);

        if(a[0]==0||a[1]==0||a[2]==0||a[3]==0){
            outFile << "banana" <<endl;
        }
        else if(a[0]+a[1]+a[2]<a[3]){
          outFile << "banana" <<endl;
        }
        else if(a[0]==a[1]&&a[2]==a[3]&&a[1]==a[2]){
         outFile << "square"<<endl;
        }
        else if(a[0]==a[1]&&a[2]==a[3]){
         outFile << "rectangle"<<endl;

        }else{
        outFile << "quadrangle"<<endl;
        }

    } // end while
    return 0;
} // end main
