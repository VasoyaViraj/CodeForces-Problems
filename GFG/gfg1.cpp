#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max = INT_MIN, Smax = INT_MIN+1;
        for(int& x:arr){
            if(x > max){
                Smax = max;
                max = x;
            }else if(x > Smax && x < max){
                Smax = x;
            }
        }   
        return Smax;
    }
};