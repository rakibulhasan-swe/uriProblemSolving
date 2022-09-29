#include <iostream>
#include<iomanip>
using namespace std;


int main() {

    double R, A, n = 3.14159;
    cin >> R;

    A = (R * R * n);
    cout << fixed << setprecision(4) << "A=" << A << endl;


    return 0;
}
