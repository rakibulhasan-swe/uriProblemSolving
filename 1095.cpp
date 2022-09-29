#include<bits/stdc++.h>
using namespace std;

int main(){

    int i, j, value=1;

    for(i = 1; i <= 1; i++){
        for(j = 60; j >= 0; j-=5){
            cout << "I=" << value << " J=" << j << endl;
            value = value + 3;
        }
    }


    return 0;
}
