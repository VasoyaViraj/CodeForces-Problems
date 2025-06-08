#include <bits/stdc++.h>
using namespace std;

int count(int a, int b, int c, int d, int e){
    int fib = 0;
    if(c==a+b)  fib++;
    if(d==b+c)  fib++;
    if(e==c+d)  fib++;
    return fib;
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int a, b, c, d, e;
        cin >> a >> b >> d >> e;

        vector<int> cvalue = {a+b, d-b, e-d};
        int maxx = 0;

        for(auto& x : cvalue){
            maxx = max(maxx,count(a,b,x,d,e));
        }

        cout << maxx << endl;

    }
    
    return 0;
}
