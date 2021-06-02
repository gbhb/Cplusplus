#include <iostream>
#include <cstdlib>
#include <climits>
#include <algorithm>
#include <fstream>
#include <istream>
#include "FQ-107502558class.h"
#include <vector>
#include <string>
using namespace std;

int max(int a[])
{
    int max=INT_MIN,c=0;
    for(; c<5; c++)
    {
        if(a[c]>max)
        {
            max=a[c];
        }
    }
    return max;
}
int max(int a[],int i)
{
    int max=INT_MIN,c=0;
    for(int ii=0;ii<i;ii++)
    for(; c<i; c++)
    {
        if(a[c]>max)
        {
            max=a[c];
        }
    }
    return max;
}
void isort(int a[],int i){
    int tag,c,max=INT_MIN,ii;
    for(ii=0;ii<i;ii++){
    for(c=0+ii;c<i;c++){
        if(a[c]>max){
        max=a[c];
        tag=c;
        }
    }
    swap(a[tag],a[ii]);
    cout<<a[ii]<<" ";
    max=INT_MIN;
    }
}
void bsort(int aa[],int i){
    int a,b;

    for(a=0;a<i-1;a++){
        for(b=0;b<i-1-a;b++){
            if(aa[b]<aa[b+1]){
                swap(aa[b],aa[b+1]);
            }
        }
    }
    for(int d=0;d<i;d++){
        cout << aa[d]<<" ";
    }

}
void bsort(vector<int> aa,int i){
    int a,b;

    for(a=0;a<i-1;a++){
        for(b=0;b<i-1-a;b++){
            if(aa[b]<aa[b+1]){
                swap(aa[b],aa[b+1]);
            }
        }
    }
    for(int d=0;d<i;d++){
        cout << aa[d]<<" ";
    }

}
void bsort(string aa[],int i){
    int a,b;

    for(a=0;a<i-1;a++){
        for(b=0;b<i-1-a;b++){
            if(aa[b]>aa[b+1]){
                swap(aa[b],aa[b+1]);
            }
        }
    }
    for(int d=0;d<i;d++){
        cout << aa[d]<<" ";
    }

}

void bbsort(string aa[],int i){
    int a,b;
    ofstream q7("quiz7out.txt",ios::out);
    for(a=0;a<i-1;a++){
        for(b=0;b<i-1-a;b++){
            if(aa[b]>aa[b+1]){
                swap(aa[b],aa[b+1]);
            }
        }
    }
    for(int d=0;d<i;d++){
        q7 << aa[d]<<" ";
    }

}
int main()
{

    int a[5]={};
    cout << "Q1" << endl;
    cout <<">";
    cin >>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
    cout <<max(a)<<endl;
    cout <<"================="<<endl;

    int b[20]={};
    int c=0;
    cout << "Q2" << endl<<">";
    for(;;)
    {
        cin>>b[c];
        if(b[c]==-1){
            break;
        }
        c++;
    }
    cout <<max(b,c)<<endl;
    cout <<"================="<<endl;

    cout << "Q3" << endl<<">";
    int bb[20]={};
    int cc=0;
    for(;;)
    {
        cin>>bb[cc];
        if(bb[cc]==-1){
            break;
        }
        cc++;
    }
    cout <<max(bb,cc)<<endl;
    cout <<"================="<<endl;

    cout << "Q4" << endl<<">";
    int q4[20]={};
    int c4=0;
    ifstream infile("quiz4.txt",ios::in);
    for(;;)
    {
        infile>>q4[c4];
        if(q4[c4]==-1){
            break;
        }
        c4++;
    }
    cout <<max(q4,c4)<<endl;
    cout <<"================="<<endl;

    cout << "Q5" << endl<<">";
    int q5[10];
    int c5=0;
    for(;c5<10;)
    {
        cin>>q5[c5];
        c5++;
    }
    bsort(q5,c5);
    cout <<endl<<"================="<<endl;

    cout << "Q6" << endl<<">";
    string s[10];
    int i=0;
    while(i<10){
    cin >> s[i];
    i++;
    }
    bsort(s,i);
    cout <<endl<<"================="<<endl;

    cout << "Q7" << endl<<">";
    string ss[20];
    int i=0;
    ifstream q7("quiz7in.txt",ios::in);

    while(q7>>ss[i]){
    i++;
    }
    bbsort(ss,i);
    cout <<endl<<"================="<<endl;


    int c8=0;
    char buffer[2000];
    string s1,s2,s3="";
    cout << "Q8" << endl<<">";
    ifstream Q8i("quiz8in.txt",ios::in);
    ifstream Q8o("quiz8out.txt",ios::in);
    while(getline(Q8i,s1)){
    }
    while(getline(Q8o,s2)){
    }
    cout <<endl<<s1<<endl<<endl;
    ofstream Q8oo("quiz8out.txt",ios::out);
    Q8oo<< s1+" "+s2;
    Q8oo.close();
    ifstream Q8ooo("quiz8out.txt",ios::in);
    while(Q8ooo>>s3){
    cout <<s3<<endl;
    }
    cout <<endl<<"================="<<endl;

    cout << "Q9" << endl<<">";
    Q9Pair q9pair1;
    Q9Pair q9pair2;
    Q9Pair q9pair3;
    cin >>q9pair1.number>>q9pair2.number>>q9pair3.number;

    cout << "Pair1 are" << q9pair1.number << "." << endl;

    cout << "Pair1 are" << q9pair2.number << "." << endl;
    cout << "Pair1 are" << q9pair3.number << "." << endl;
    cout <<"================="<<endl;

    cout << "Q10" << endl<<">";
    Q10Pair q10pair1;
    Q10Pair q10pair2;
    Q10Pair q10pair3;
    cin >>q10pair1.num[0]>>q10pair1.num[1]>>q10pair2.num[0]>>q10pair2.num[1]>>q10pair3.num[0]>>q10pair3.num[1];

    q10pair1.show(1);
    q10pair2.show(2);
    q10pair3.show(3);

    cout << "Q12" << endl<<">";
    vector<int>vec;
    int ccc;
    for(;;){
        cin>>ccc;
        if(ccc==-1){
            break;
        }
        vec.push_back(ccc);
    }
    bsort(vec,vec.size());

    cout << "Q11" << endl<<">";
    Q11Pair q11pair1;
    Q11Pair q11pair2;
    cin >>q11pair1.str[0]>>q11pair1.str[1]>>q11pair2.str[0]>>q11pair2.str[1];

    q11pair1.concat(q11pair2);
    return 0;
}
