#include<bits/stdc++.h>
using namespace std;


int main(){
    double r, pi = 3.14159, sphere = 0;
    cin >> r;

    sphere = (4.0/3 * pi * (r * r * r));

    cout << fixed << setprecision(3) << "VOLUME = " << sphere << endl;



    return 0;
}
