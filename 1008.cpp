#include<bits/stdc++.h>
using namespace std;

int main(){
    double number, workedHour, salaryPerHour, salary = 0;
    cin >> number >> workedHour >> salaryPerHour;

    salary = workedHour * salaryPerHour;

    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << salary << endl;


    return 0;
}
