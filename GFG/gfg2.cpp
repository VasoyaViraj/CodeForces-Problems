#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v = {1, 2, 0, 4, 3, 0, 5, 0};
    
    for(int& x:v){
        if(x == 0){
            v.erase(x)
        }
    }
    
    return 0;
}
