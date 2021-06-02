
/*****************************************
* Exercise 12
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
void selection_sort(int[],int);
int binary_search(int[],int,int);

int n,t; //number target
int main()
{

    cout << "Input number of data: " ;
    cin >> n;
    cout <<"Unsort: ";
    int in[n],i=0;
    for(; i<n; i++)
        cin >> in[i];
    cout <<"Sorted: ";
    selection_sort(in,n);
    cout <<endl<<"Want to find: ";
    while(!cin.eof()){
    cin>>t;
    if(binary_search(in,n,t)==-1){
    cout <<"The target number is not in the array."<<endl;
    }else{
    cout << "The target number is at the index "<<binary_search(in,n,t)<<endl;
    }
    cout <<"Want to find: ";
    }
    return 0;
}
void selection_sort(int a[],int size)
{
    int min=INT_MAX,c=0,i,r=0;
    for(int ii=0;ii<size;ii++)
    {
        for(i=0+ii; i<size; i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                r=i;
            }
        }
        swap(a[ii],a[r]);
        cout <<a[ii]<<" ";
        min=INT_MAX;
    }
}
int binary_search(int a[],int size,int t)
{
    int low=0,high=size,mid=0;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==t){
            return mid;
        }
        else if(a[mid]>t){
            high=mid-1;
        }
        else if(a[mid]<t){
            low=mid+1;
        }
    }
    return -1;
}
