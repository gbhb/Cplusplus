
/*****************************************
* Exercise 8
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
void printArray(int arr[], int lenght){
 for(int i=0; i<lenght; i++)
 cout << arr[i] << " ";
 cout << endl;
}
void append(int arr[], int length, int data){
 int i=0;
 for(i=0; i<length; i++){
    arr[i]=arr[i+1];
 }
 arr[4]=data;
 printArray(arr, length);
}
void append(int arr[], int length, int data, int index){
int in=index;

int copy[5];
for(int i=0; i<length; i++){
    copy[i]=arr[i];
}
for(index; index<length; index++){
    arr[index+1]=copy[index];
}
 arr[in]=data;
 printArray(arr, length);
}
int main(){
 int len = 5;
 int arry[len] = {1,3,5,7,9};
 printArray(arry, len);
 while(true){
 int input,pos;
 cout << "input, position: ";
 cin >> input >> pos;
 if (input == -1) break;
 if (pos < 0 || pos >= len)
 append(arry, len, input);
 else
 append(arry, len, input, pos);
 cout << "===================================" <<endl;
 }
 return 0;
}
//01234
//80123
