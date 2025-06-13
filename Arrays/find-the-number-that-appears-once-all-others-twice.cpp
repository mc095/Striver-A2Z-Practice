// Given an array where every element appears twice except one. Find that one element.

#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<int, int> mpp;

    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }

    int sol;
    for(auto it : mpp){
        if(it.second == 1){
            sol = it.first;
            break;
        }
    }

    cout << sol;
}