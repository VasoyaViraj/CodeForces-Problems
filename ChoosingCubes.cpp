#include <bits/stdc++.h>
using namespace std;

int freq(vector<int>& cubes, int favCube){
    int freq = 0;
    for(auto& x:cubes){
        if(x == favCube) freq++;
    }
    return freq;
}

int main() {

    int t;
    cin >> t;
    
    while(t--){
        int n, f, k;
        cin >> n >> f >> k;

        vector<int> cubes(n);
        for(auto& x:cubes){
            cin >> x;
        }

        int favNum = cubes[f-1];
        int freqFavNum = freq(cubes, favNum);

        sort(cubes.begin(), cubes.end());
        reverse(cubes.begin(), cubes.end());
        cubes.erase(cubes.begin(), cubes.begin() + k);

        int newFreq = freq(cubes, favNum);

        if(newFreq == freqFavNum) cout << "NO" << endl;
        else if(newFreq != 0 && newFreq < freqFavNum) cout << "MAYBE" << endl;
        else cout << "YES" << endl;

    }
    
    return 0;
}
