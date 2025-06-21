#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int target;
    cin >> target;

    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        int rem = target - arr[i];

        if(mp.count(rem)){
            cout << mp[rem] << " " << i;
        }

        mp[arr[i]] = i;
    }
}