#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t; 
    
    while(t--){
        long long n, a, b, c;
        cin >> n >> a >> b >> c;

        long long cycleSum = a+b+c;
        long long fullCycles = n/(a+b+c);
        long long left = n%(a+b+c);
        long long days = fullCycles * 3;
        
        if(left > 0){
            if(left <= a) days += 1;
            else if(left <= a+b) days += 2;
            else days += 3;
        }

        cout << days << '\n';
    }
    
    return 0;
}
