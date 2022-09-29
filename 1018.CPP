#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
    cin >> n;

    if(n > 0 && n < 1000000){
        note100 = n / 100;
        n = n % 100;
        note50 = n / 50;
        n = n % 50;
        note20 = n / 20;
        n = n % 20;
        note10 = n / 10;
        n = n % 10;
        note5 = n / 5;
        n = n % 5;
        note2 = n / 2;
        n = n % 2;
        note1 = n / 1;

    }

    int total = (note100*100)+(note5*50)+(note20*20)+(note10*10)+(note5*5)+(note2*2)+(note1*1);
    cout << total << endl;
    cout << note100 << " nota(s) de R$ 100,00" << endl;
    cout << note50 << " nota(s) de R$ 50,00" << endl;
    cout << note20 << " nota(s) de R$ 20,00" << endl;
    cout << note10 << " nota(s) de R$ 10,00" << endl;
    cout << note5 << " nota(s) de R$ 5,00" << endl;
    cout << note2 << " nota(s) de R$ 2,00" << endl;
    cout << note1 << " nota(s) de R$ 1,00" << endl;


    return 0;
}
