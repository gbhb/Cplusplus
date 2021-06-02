/*****************************************
* Exercise 1
* Name: §fÌÉ¿«
* Student Number: 107502558
* Course: 2018-CE1001
******************************************/
#include <iostream>

using namespace std;

int main()
{
    int score; // first input number
    cout << "Please key in your score:"<< endl;
    cin >> score;
    if(score >100 || score <0){
    cout << "invalid input" << endl;
    }
    if(score <= 100 && score >= 80) {
    cout << "You get A" << endl;
    }
    else if(score >= 70 && score < 80) {
    cout << "You get B" << endl;
    }
    else if(score >= 60 && score < 70) {
    cout << "You get C" << endl;
    }
    else if(score >= 50 && score < 60) {
    cout << "You get D" << endl;
    }
    else if(score >= 0 &&score < 50) {
    cout << "You Fail" << endl;
    }


    return 0;
}
