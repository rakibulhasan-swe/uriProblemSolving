#include<bits/stdc++.h>
using namespace std;


int main(){

    double a, count = 0, sum = 0;

    for(int i=0; i<6; i++){
        cin >> a;
        if(a>=0){
            count++;
            sum = sum + a;
        }
    }
    double avg = sum / count;

    cout << count << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg << endl;



    return 0;
}
