#define fq
#include <string>
#include <iostream>
using namespace std;

class Q9Pair
{
public:
    int number;
private:
};

class Q10Pair
{
public:
    void show(int i){
    cout << "Pair"<<i<<" are " << num[0] <<" and "<<num[1]<< "." << endl;
    }
    int num[2];
private:

};
class Q11Pair
{
public:
    void concat(Q11Pair a){
    cout <<"Concatenated string of pair1 and pair2: "<<str[0]<<a.str[0]<<" "<<str[1]<<a.str[1];
    }
    string str[2];
private:

};
