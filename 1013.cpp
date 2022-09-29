#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b, c;
    cin >> a >> b >> c;

    if(a < b && a < c){
        if(b > c){
            cout << b << " eh o maior" << endl;
        }else{
            cout << c << " eh o maior" << endl;
        }
    }else{
       cout << a << " eh o maior" << endl;
    }




    return 0;
}
