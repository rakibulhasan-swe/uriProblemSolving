#include<bits/stdc++.h>
using namespace std;

int main(){

    double firstNum, secondNum, thirdNum, avg = 0.0;
    cin >> firstNum >> secondNum >> thirdNum;

    avg = ((firstNum*2) + (secondNum*3) + (thirdNum*5)) / 10;

    cout << fixed << setprecision(1) << "MEDIA = " << avg << endl;


    return 0;
}
