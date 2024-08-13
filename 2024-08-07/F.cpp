// (自分の中では)実装は終わっているが、現時点では入力例1で終了コード139。修正が必要
// ただし出力の1行目は合っている
// おそらくリストの存在しない要素を参照しているのが原因

#include <bits/stdc++.h>
using namespace std;

int main () {

    int n, q;
    cin >> n >> q;
    // n = number of heads
    // q = number of queries

    vector<vector<string>> queries;

    for (int i=0; i < q; i++) {
        int instruction;
        string detail;
        cin >> instruction >> detail;
        queries.push_back({instruction, detail});
    }

    // 初期位置の記述
    vector<vector<int>> headlog;
    headlog.push_back({0,1});

// 移動について
// 後方の頭は、先方の頭を追従しているだけ
// ぶっちゃけ、記録するのは先頭の頭の移動履歴だけで良い
// この発想だと、下記の初期実装は無駄が多い
// ※ただ、先頭の頭が通った場所をまだ通っていない頭の座標を聞かれた時に困りそう
// ↑どういう場合に発生する？

// 先頭の頭が、-n秒後には座標(n,0)にいたということにすれば良いのでは？
// つまり、経過時刻の正負で場合分けすれば良い？
// つまり「現在のm番目の頭の座標は？」という質問は「先頭の頭がm秒前にいた座標は？」という質問に置き換えられる
// 経過時刻 = headlogのsize
// クエリで要求される「先頭からm番目のパーツp」のmが↑より大きい時に「経過時刻」が負になる
// ※クエリの2番目の値をstringで取得してるので、「2」のクエリが来た時だけ型をintにキャストする必要がある

    // vector<vector<int>> heads;
    // for (int i = 0; i < n; i++) {
    //     vector<int> head = {i,0};
    //     heads.push_back(head);
    // }

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
                cout << headlog[p][0] << " " << headlog[p][1] << endl;
            } else {
                cout << p - headlog.size() +1 << " " << 0 << endl;
            }
        }
    }
    return 0;
}


