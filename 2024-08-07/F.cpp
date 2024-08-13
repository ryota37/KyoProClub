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


    // vector<vector<int>> heads;
    // for (int i = 0; i < n; i++) {
    //     vector<int> head = {i,0};
    //     heads.push_back(head);
    // }

    for (int i = 0; i < q; i++) {
        if (queries[i][0] == 1) {
            // 移動させる
        } else {
            // 座標を出力
        }
    }






    return 0;
}


