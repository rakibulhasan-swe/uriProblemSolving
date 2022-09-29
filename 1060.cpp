#include<bits/stdc++.h>
using namespace std;


int main(){

    double a, count = 0;

    for(int i=0; i<6; i++){
        cin >> a;
        if(a>=0){
            count++;
        }
    }

    cout << count << " valores positivos" << endl;



    return 0;
}

