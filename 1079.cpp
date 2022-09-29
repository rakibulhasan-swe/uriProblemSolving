#include<bits/stdc++.h>
using namespace std;

int main(){
    double testCase, firstNumber, secondNumber, thirdNumber, avg;

    cin >> testCase;

    for(int i=1; i<=testCase; i++){
        cin >> firstNumber >> secondNumber >> thirdNumber;
        avg = ((firstNumber*2) + (secondNumber*3) + (thirdNumber*5)) / 10;
        cout << fixed << setprecision(1) << avg << endl;
    }

    return 0;
}
