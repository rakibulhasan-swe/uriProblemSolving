#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    int note100 = 0, note50 = 0, note20 = 0, note10 = 0, note5 = 0, note2 = 0, note1 = 0;
    int m1, m50, m25, m10, m05, m01;
    cin >> n;

    int notes = n;
    int moedas = (n - notes) * 100;
    if( (moedas * 1000) % 10 == 9) {
        moedas++;
    }


    if(n >= 0 && n <= 1000000.00){
        note100 = notes / 100;
        notes = notes % 100;
        note50 = notes / 50;
        notes = notes % 50;
        note20 = notes / 20;
        notes = notes % 20;
        note10 = notes / 10;
        notes = notes % 10;
        note5 = notes / 5;
        notes = notes % 5;
        note2 = notes / 2;
        notes = notes % 2;

        m1 = notes/1;
        notes = notes%1;
        m50 = moedas/50;
        moedas = moedas%50;
        m25 = moedas/25;
        moedas = moedas%25;
        m10 = moedas/10;
        moedas = moedas%10;
        m05 = moedas/5;
        moedas = moedas%5;
        m01 = moedas/1;

    }

    cout << "NOTAS:" << endl;
    cout << note100 << " nota(s) de R$ 100.00" << endl;
    cout << note50 << " nota(s) de R$ 50.00" << endl;
    cout << note20 << " nota(s) de R$ 20.00" << endl;
    cout << note10 << " nota(s) de R$ 10.00" << endl;
    cout << note5 << " nota(s) de R$ 5.00" << endl;
    cout << note2 << " nota(s) de R$ 2.00" << endl;


    cout << "MOEDAS:" << endl;
    cout << m1 << " moeda(s) de R$ 1.00" << endl;
    cout << m50 << " moeda(s) de R$ 0.50" << endl;
    cout << m25 << " moeda(s) de R$ 0.25" << endl;
    cout << m10 << " moeda(s) de R$ 0.10" << endl;
    cout << m05 << " moeda(s) de R$ 0.05" << endl;
    cout << m01 << " moeda(s) de R$ 0.01" << endl;




    return 0;
}

