#include<bits/stdc++.h>
using namespace std;

int main(){
    double x1, y1, x2, y2, total = 0;
    cin >> x1 >> y1 >> x2 >> y2;

    total = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));;

    cout << fixed << setprecision(4) << total << endl;


    return 0;
}
