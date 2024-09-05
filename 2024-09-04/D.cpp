#include <bits/stdc++.h>
using namespace std;

int main () {

    int n;
    cin >> n;
    vector<int> array_a;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        array_a.push_back(a);
    }
    int q;
    cin >> q;
    vector<vector<int>> querries;
    for (int i = 0; i < q; i++) {
        vector<int> querry;
        int querry_1, querry_2, querry_3;
        cin >> querry_1 >> querry_2 >> querry_3;
        querry.push_back(querry_1);
        querry.push_back(querry_2);
        querry.push_back(querry_3);
        querries.push_back(querry);
    }

    cout << n << endl;
    for (int i = 0; i < n; i++) {
        cout << array_a[i] << " ";
    }
    cout << q << endl;
    for (int i = 0; i < q; i++) {
        cout << querries[i] << " ";
    }



    return 0;
}


