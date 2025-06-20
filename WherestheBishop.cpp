#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> chess;
    string str;

    for(int i = 0; i < 2; i++){
        cin >> str;
        chess.push_back(str);
    }

    int x, y, flag = 0;
    for(int i = 0; i < chess.size(); i++){
        for(int j = 0; j < 8; j++){
            int idx = chess[i].find('#');
            if(idx + 2 < 8 && chess[i][idx+2] == '#'){
                flag = 1;
                x = i;
                y = j;
                break;
            }
        }
        if(flag) break;
    }

    cout << x+2 << " " << y+2 << endl;

    return 0;
}
