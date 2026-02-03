#include <iostream>

using namespace std;

int main() {
    int a, b, y = 0;
    string s = "samer ghazouani";

    cin >> a;
    cin >> b;

    while (a <= b) {
        a *= 3;
        b *= 2;
        y++;
    }

    cout << y;

    return 0;
}