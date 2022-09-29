#include<bits/stdc++.h>
using namespace std;

int main(){

    double a, b, c, triangle = 0, circle = 0, trapizium = 0, square = 0, rectangle = 0;
    cin >> a >> b >> c;

    triangle = (a * c) / 2;
    circle = 3.14159 * (c * c);
    trapizium = ((a + b) / 2) * c;
    square = (b * b);
    rectangle = (a * b);

    cout << fixed << setprecision(3) << "TRIANGULO: " << triangle << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << circle << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << trapizium << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << square << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << rectangle << endl;



    return 0;
}
