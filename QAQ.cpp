#include <bits/stdc++.h>
using namespace std;

int freq(string& s){
    int frq = 0;
    for(auto& x:s){
        if('Q' == x) frq++;
    }
    return frq;
}

int main() {

    string s, temp;
    cin >> s;

    int locQ, locA, opt = 0;
    
    while(s.find('Q') != -1){
        locQ = s.find('Q');
        s = s.substr(locQ+1);
        temp = s;
        while(temp.find('A') != -1){
            locA = temp.find('A');
            temp = temp.substr(locA+1);
            opt += freq(temp);
        }
    }

    cout << opt << endl;

    return 0;
}
