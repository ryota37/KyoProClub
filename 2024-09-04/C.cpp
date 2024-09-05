#include <bits/stdc++.h>
using namespace std;

int main () {
    int l,r;
    string s;
    cin >> l >> r >> s;

    string front_s;
    string center_s;
    string back_s;
    string ans_s;

    front_s = s.substr(0,l-1);
    center_s = s.substr(l-1,r-l+1);
    back_s = s.substr(r,s.size());

    reverse(center_s.begin(),center_s.end());
    ans_s = front_s + center_s + back_s;
    cout << ans_s << endl;

    return 0;
}