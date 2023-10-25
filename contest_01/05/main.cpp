#include <iostream>

#include <iomanip> 

using namespace std;

int main() {
    double m,h;
    cin >> m >> h;
    double kakoeOgirenie = m / ( h * h);
    cout << setprecision(20) << kakoeOgirenie << endl;
    return 0;
}