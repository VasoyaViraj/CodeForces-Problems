#include<bits/stdc++.h>
using namespace std;
 
int main(){

    int t; 
    cin >> t;

    while(t--){
        int n; 
        cin >> n;

        int arr[n], good=0, bad=0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        for(int i = 0; i < n; i++){
            if(i%2 != arr[i]%2){
                if(arr[i]%2 != 0) bad++;
                else good++;
            }
        }

        if(good == bad) cout << bad << endl;
        else cout << -1 << endl;
    
    }
}