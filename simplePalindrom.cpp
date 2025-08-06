#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, i, j;
        cin >> n;

        vector<int> arr(5, n/5);
        vector<char> c = {'a', 'e', 'i', 'o', 'u'};
        i = n%5 - 1;

        while(i >= 0){
            arr[i]++;
            i--;
        }

        for(i=0; i<5; i++){
            for(j=0; j < arr[i]; j++) cout << c[i];
        }
        cout << '\n';

    }
    
    return 0;
}
