#include<bits/stdc++.h>
using namespace std;
int main(void){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> res(n);
    int i = 0;
    int j = n-1;
    int k = n-1;
    while(i <= j){
        if(abs(arr[i]) > abs(arr[j])){
            res[k] = arr[i] * arr[i];
            i++; 
        } else {
            res[k] = arr[j] * arr[j];
            j--;
        }
        k--;   
    }

    for(auto it : res){
        cout << it << " ";
    }
    
}