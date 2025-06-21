#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int i=0;
    int j=n-1;
    int maxArea = 0;

    while(i <= j){
        int b = abs(j-i);
        
        int l = min(arr[i], arr[j]);
        
        int area = b * l;
        
        if(maxArea < area){
            maxArea = area;
        }

        if(arr[i] < arr[j]){
            i++;
        } else {
            j--;
        }
    }

    cout << maxArea;
}