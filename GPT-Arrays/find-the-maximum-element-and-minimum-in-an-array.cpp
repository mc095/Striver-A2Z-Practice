#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int max = INT_MIN;
    int min = INT_MAX;

    for(auto it : arr){
        if(it > max){
            max = it;
        }

        if(it < min){
            min = it;
        }
    }

    cout << "Min element : " << min << endl;
    cout << "Max element : " << max << endl;
}