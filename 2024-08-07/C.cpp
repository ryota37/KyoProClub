#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, q;
    vector<vector<int>> matrix;
    string line;

    cin >> n >> q;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        int num;
        vector<int> row;
        while(iss>>num) {
            row.push_back(num);
        }
        matrix.push_back(row);
    }

    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;
        cout << matrix[x+1][y+1] << endl;
    }

    return 0;
}


