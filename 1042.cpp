#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;

    if( a < b ){
        if( a < c){
            cout << a << endl << c << endl << b << endl << endl;
            cout << b << endl << c << endl << a << endl;
        }else{
           cout << c << endl << a << endl << b << endl << endl;
           cout << b << endl << a << endl << c << endl;
        }
    }else{
        if(b < c){
            cout << b << endl << a << endl << c << endl << endl;
            cout << c << endl << a << endl << b << endl;
        }else{
            cout << c << endl << b << endl << a << endl << endl;
            cout << a << endl << b << endl << c << endl << endl;
        }
    }



    return 0;
}
