
/*****************************************
* Assignment 10
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>

using namespace std;
class matrix{
public:
    int m[3][3];
    matrix();
    void inputmatrix(int,int,int);
    void printall();
    void transpose();
    void sum();
};
matrix::matrix(){
    int a=1;
    for(int i = 0; i < 3; ++i)
    for(int j = 0; j < 3; ++j)
    {
        m[i][j]=a;
        a++;
    }
}
void matrix::inputmatrix(int x,int y,int n){
    m[x][y]=n;
}
void matrix::printall(){
    for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j)
    {
        cout<< m[i][j] <<" " ;
    }
    cout << endl;
}
}
void matrix::transpose(){
    int mm[3][3];
    for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j)
    {
       mm[i][j]=m[i][j];
    }
}
    for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j)
    {
       m[i][j]=mm[j][i];
    }
}

}
void matrix::sum(){
    int a=0;
    for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j)
    {
        a=a+m[i][j];
    }
}
    cout<<a<<endl;
}
int main()
{
    int op=0,x,y,n;
    matrix xi;
    for(;;){
    if(op==-1){
        break;
    }
    cout << "please input operation :" << endl;
    cin>> op;
    if(op==1){
    cout << "please input coordinate and value :"<<endl;
    cin >>x>>y>>n;
    xi.inputmatrix(x,y,n);
    }
    if(op==4){
    xi.printall();
    }
    if(op==3){
    xi.transpose();
    }
    if(op==2){
    xi.sum();
    }

    }
    return 0;
}
