
/*****************************************
* Assignment 8
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <string>
using namespace std;
string str;
string ReverseString(string);
void ReverseInts(int[], int);
void SWAP(int*, int* );
int c;
int main()
{
    cin >>c;

    for(int i=0; i<c; i++)
    {
        string feature="";
        cin>> feature;
        if(feature =="sentence")
        {
            string sentence="";
            getline(cin, sentence);
            getline(cin, sentence);
            cout<<ReverseString(sentence)<<endl;
        }
        if(feature =="numbers")
        {
            int num = 0;
            cin >> num;
            int nums[num] = {};
            for(int i = 0 ; i < num ; i++)
            {
                cin >> nums[i];
            }
            ReverseInts(nums, num);
            for(int i = 0 ; i < num ; i++)
            {
                cout<< nums[i]<< " ";
            }
            cout<< endl;
        }
    }
    return 0;
}
string ReverseString( string sentence ){
    int i=sentence.length()/2, e=sentence.length()-1,b=0;
    char t;
    for(;i>0;i--){
    t=sentence[b];
    sentence[b]=sentence[e];
    sentence[e]=t;
    b++;
    e--;
    }
    return sentence;
}
void ReverseInts( int numbers[], int length ){
    int i=length/2,b=0 ,e=length-1;
    for(;i>0;i--){
        SWAP(&numbers[b],&numbers[e]);
        b++;
        e--;
    }
}
void SWAP(int*a, int*b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}


