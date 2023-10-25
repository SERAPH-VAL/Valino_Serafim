#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int dist_b = abs(a - b);
    int dist_c = abs(a - c);
    if (dist_b < dist_c) {
        cout << "B " << dist_b << endl;
    } else {
        cout << "C " << dist_c << endl;
    }
    return 0;
}