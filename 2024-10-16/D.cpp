#include <bits/stdc++.h>
using namespace std;

int main () {

    int n,m;
    cin >> n >> m;

    vector<vector<int>> a;

    for (int i = 0; i < m; i++) {
        vector<int> b;
        for (int j = 0; j < n; j++) {
            int c;
            cin >> c;
            b.push_back(c);
        }
        a.push_back(b);
    }

    // 1人の人に着目して、その人が隣になったことがある人の履歴を記録する
    // 一旦重複は気にしない

    vector<vector<int>> history;
    for (int i = 1; i <= n; i++) {
        vector<int> tmp;
        for (int j=0; j < m; j++) {
            int index = find(a[j].begin(), a[j].end(), i) - a[j].begin();
            if (index != 0) {
                tmp.push_back(a[j][index-1]);
            }   
            if (index != n-1) {
                tmp.push_back(a[j][index+1]);
            }
        }
        history.push_back(tmp);
    }

    int ans = 0;

    for (int i = 1; i <=n; i++) {
        auto v = history[i-1];
        sort(v.begin(), v.end());
        decltype(v)::iterator result = unique(v.begin(), v.end());
        v.erase(result, v.end());
        ans += n - v.size() - 1;   
    }

    ans = ans/2;
    cout << ans << endl;

    return 0;
}


