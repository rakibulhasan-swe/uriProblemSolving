#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, d, sumAB, sumCD;
    cin >> a >> b >> c >> d;
    sumAB = a + b;
    sumCD = c + d;


    if(b > c && d > a){
        if(sumCD > sumAB){
            if( a >= 0){
                cout << "Valores aceitos" << endl;
            }else{
                cout << "Valores nao aceitos" << endl;
            }
        }else{
            cout << "Valores nao aceitos" << endl;
        }
    }else{
        cout << "Valores nao aceitos" << endl;
    }


    return 0;
}
