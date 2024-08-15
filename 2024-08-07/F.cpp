#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, q;
    cin >> n >> q;
    vector<vector<string>> queries;

    for (int i=0; i < q; i++) {
        string instruction;
        string detail;
        cin >> instruction >> detail;
        queries.push_back({instruction, detail});
    }

    // 初期位置の記述
    vector<vector<int>> headlog;
    headlog.push_back({1,0});

// 移動について
// 後方の頭は、先方の頭を追従しているだけ
// 記録するのは先頭の頭の移動履歴だけで良い

// 先頭の頭が、-n秒後には座標(n,0)にいたということにすれば良いのでは？
// つまり、経過時刻の正負で場合分けすれば良い？
// つまり「現在のm番目の頭の座標は？」という質問は「先頭の頭がm秒前にいた座標は？」という質問に置き換えられる
// 経過時刻 = headlogのsize
// クエリで要求される「先頭からm番目のパーツp」のmが↑より大きい時に「経過時刻」が負になる

    for (int i = 0; i < q; i++) {
        if (queries[i][0] == "1") {
            // 移動させる
                if (queries[i][1] == "L") {
                    // 左に移動
                    headlog.push_back({headlog[headlog.size()-1][0]-1, headlog[headlog.size()-1][1]});
                } else if (queries[i][1] == "R") {
                    // 右に移動
                    headlog.push_back({headlog[headlog.size()-1][0]+1, headlog[headlog.size()-1][1]});
                } else if (queries[i][1] == "U") {
                    // 上に移動
                    headlog.push_back({headlog[headlog.size()-1][0], headlog[headlog.size()-1][1]+1});
                } else if (queries[i][1] == "D") {
                    // 下に移動
                    headlog.push_back({headlog[headlog.size()-1][0], headlog[headlog.size()-1][1]-1});
                }
        } else {
            // 座標を出力
            int p = stoi(queries[i][1]); 
            if (headlog.size() > p) {
                cout << headlog[headlog.size()-p][0] << " " << headlog[headlog.size()-p][1] << endl;
            } else {
                cout << p - headlog.size() +1 << " " << 0 << endl;
            }
        }
    }

    return 0;
}


