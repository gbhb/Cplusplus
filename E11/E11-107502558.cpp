#include <iostream>
#include <string>
#include <algorithm>
#include <fstream> // contains file stream processing types
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
    int i=0,a,r1,r2,co=0,bb,ii=0;
    vector<int> intVec;
    cout <<"What range would like to search?"<<endl;
    cin >>r1 >>r2;
    cout <<"Scanning txt..."<<endl;
    ifstream inFile( "LotOfNumbers.txt", ios::in );
    if(!inFile)
    {
        cout <<"not found!"<<endl;
        exit(1);
    }
    while(inFile>> bb)
    {
        intVec.push_back(bb);

        if(intVec[ii]>=r1&&intVec[ii]<=r2)
        {
            co++;
        }
        ii++;
    }
    cout<< "Find "<<co<<endl;
    cout <<"Input number want to search:";
    while(cin >>a){
    for(int  i=0,b = 0; b < intVec.size(); b++)
    {
        i++;
        if(intVec[i]==a)
        {
            cout <<i<<" ";
        }
    }

    cout <<endl<<"Input number want to search:";
    }



    return 0;
}
