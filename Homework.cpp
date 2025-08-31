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
        int lenA, lenB;
        string a, b, tasks, f = "";

        cin >> lenA >> a >> lenB >> b >> tasks;

        for(int i = 0; i < lenB; i++){
            if(tasks[i] == 'D'){
                a += b[i];
            }else{
                f += b[i];
            }
        } 

        reverse(f.begin(), f.end());;

        cout << f << a << "\n";
    }
    
    return 0;
}
