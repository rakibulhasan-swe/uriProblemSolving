#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, positive=0, negative=0, even=0, odd=0;

    for(int i = 0; i < 5; i++){
        cin >> a;
        if(a == 0){
            even++;
        }else{
            if( a > 0){
            positive++;
            if( a % 2 == 0){
                even++;
            }else{
                odd++;
            }

        }else if( a < 0){
            negative++;
            if( a % 2 == 0){
                even++;
            }else{
                odd++;
            }
         }
      }

    }

    cout << even <<" valor(es) par(es)" << endl;
    cout << odd <<" valor(es) impar(es)" << endl;
    cout << positive <<" valor(es) positivo(s)" << endl;
    cout << negative <<" valor(es) negativo(s)" << endl;




    return 0;
}
