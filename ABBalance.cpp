#include <bits/stdc++.h>
using namespace std;

#define Jay ios_base::sync_with_stdio(false);
#define Shree cin.tie(NULL);
#define Ram cout.tie(NULL);

int main() {
    Jay Shree Ram

    int t;
    cin >> t;
    
    while(t--){
        string s;
        cin >> s;

        if(s.front() != s.back()){
            s.front() = ((s.front() == 'a') ? 'b' : 'a');
        }

        cout << s << "\n";
    }
    
    return 0;
}