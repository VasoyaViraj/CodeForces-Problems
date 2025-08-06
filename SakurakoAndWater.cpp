#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, min, ans = 0;
        cin >> n;

        int arr[n][n] = {0};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
                if(arr[i][i] > 0) arr[i][i] = 0;
            }
        }

        for(int i = 0; i < n; i++){
            min = 0;
            for(int j = 0; j < n-i; j++){
                if(arr[j][i+j] < min) min = arr[j][i+j];
            }
            ans += min;
        }
        for(int i = 1; i < n; i++){
            min = 0;
            for(int j = 0; j < n-i; j++){
                if(arr[i+j][j] < min) min = arr[i+j][j];
            }
            ans += min;
        }

        cout << -1*ans << "\n";
    }
    
    return 0;
}
