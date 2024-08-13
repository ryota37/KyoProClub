#include <bits/stdc++.h>
using namespace std;

int main () {
    int num;
    cin >> num;

    if (1<=num && num<=125) {
        cout << 4 << endl;
    } else if (126<=num && num<=211) {
        cout << 6 << endl;
    } else if (212<=num && num<=214) {
        cout << 8 << endl;
    }
    return 0;
}


