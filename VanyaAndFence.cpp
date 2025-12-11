#include <iostream>

using namespace std;

int main() {
    int n,h,w=0,a;

    cin >> n;
    cin >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
            w += 2;
        else
            w += 1;
    }

    cout << w;
    
    return 0;
}
