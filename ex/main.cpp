#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    //矩陣轉置程式碼

    int matrix[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    for(int i=0; i<3; i++)
    {
        for(int j=i; j<3; j++)
        {
            int k=matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=k;
        }
    }

    int a=0;
    int b=3-1;
    for(int i=0; i < 3/2; i++)
    {
        for(int j=0; j<3; j++)
        {
            int k=matrix[j][a];
            matrix[j][a]=matrix[j][b];
            matrix[j][b]=k;
        }
        a++;
        b--;
    }
    for(int i=0; i<3; i++)
    {
        for(int ii =0 ; ii<3 ; ii++)
        cout << matrix[i][ii] << " ";
    cout << "\n";
    }

}

