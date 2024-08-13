#include <bits/stdc++.h>
using namespace std;

int main () {

    long long num;
    cin >> num;

    long long min = - (1LL << 31);
    long long max = (1LL << 31);

    if (min <= num && num < max) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}


