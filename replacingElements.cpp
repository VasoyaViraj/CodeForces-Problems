#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, d;
        cin >> n >> d;

        int arr[n];
        int min = 101, sMin = 101, flag = 1;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(arr[i] < min){
                sMin = min;
                min = arr[i];
            }else if(arr[i] < sMin){
                sMin = arr[i];
            }
            if(arr[i] > d) flag = 0;
        }

        if(d >= sMin+min){
            flag = 1;
        }

        cout << (flag ? "YES" : "NO") << endl;

    }
    
    return 0;
}
