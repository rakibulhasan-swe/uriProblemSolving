#include <iostream>

using namespace std;

int main() {

   int X;
   cin >> X;

   if(X%2==0){
       X = X + 1;
       for(int i=X; i<X+12; i+=2){
           cout << i << endl;
       }
   }else{
       for(int i=X; i<X+12; i+=2){
           cout << i << endl;
       }
   }

    return 0;
}
