
/*****************************************
* Exercise 9
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
    void printdiagonal();
    void printdeterminant();
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
void matrix::printdiagonal(){
    for(int i = 0; i < 3; ++i){
    for(int j = 0; j < 3; ++j)
    {
        if(i!=j){
            cout <<"0 ";
            continue;
        }
        cout<< m[i][j] <<" " ;
    }
    cout << endl;
}
}
void matrix::printdeterminant(){
    int a=0;
    a=m[0][0]*m[1][1]*m[2][2]+m[0][1]*m[1][2]*m[2][0]+m[0][2]*m[1][0]*m[2][1]-m[0][0]*m[2][1]*m[1][2]-m[1][0]*m[0][1]*m[2][2]-m[2][0]*m[1][1]*m[0][2];
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
    xi.printdiagonal();
    }
    if(op==2){
    xi.printdeterminant();
    }

    }
    return 0;
}
