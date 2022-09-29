#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    double salary, sales, total = 0;

    cin >> name >> salary >> sales;

    total = salary + (sales * 0.15);
    cout << fixed << setprecision(2) << "TOTAL = R$ " << total << endl;


    return 0;
}
