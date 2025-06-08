#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<string> che;
    string temp;

    cout << "Enter 2 strings:\n";
    for(int i = 0; i < 2; i++){
        cin >> temp;
        che.push_back(temp);
    }

    cout << "Output:\n";
    for(auto& x : che){
        cout << x << endl;
    }

    return 0;
}
