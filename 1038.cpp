#include<bits/stdc++.h>
using namespace std;

int main(){

    double x, y;
    cin >> x >> y;

    if(x==1){
        cout <<  fixed << setprecision(2) << "Total: R$ " << y * 4.00 << endl;
    }else if(x==2){
        cout <<  fixed << setprecision(2) << "Total: R$ " << y * 4.50 << endl;
    }else if(x==3){
        cout <<  fixed << setprecision(2) << "Total: R$ " << y * 5.00 << endl;
    }else if(x==4){
        cout <<  fixed << setprecision(2) << "Total: R$ " << y * 2.00 << endl;
    }else if(x==5){
        cout <<  fixed << setprecision(2) << "Total: R$ " << y * 1.50 << endl;
    }


    return 0;
}
