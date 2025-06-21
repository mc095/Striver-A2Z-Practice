#include<bits/stdc++.h>
using namespace std;

void mergeSorted(vector<int> &arr1, vector<int> &arr2){
   int n = arr1.size();
   int m = arr2.size();

   int i = n-1;
   int j = 0;

   while(i >= 0 && j <= m-1){
    if(arr1[i] >= arr2[j]){
        swap(arr1[i], arr2[j]);
        i--;
        j++;
    } else {
        break;
    }
   }

   sort(arr1.begin(), arr1.end());
   sort(arr2.begin(), arr2.end());
}

int main(void){
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;

    vector<int> arr1(n1);
    vector<int> arr2(n2);

    for(int i=0; i<n1; i++){
        cin >> arr1[i];
    }

    for(int j=0; j<n2; j++){
        cin >> arr2[j];
    }

    mergeSorted(arr1, arr2);
    for(auto it : arr1){
        cout << it << " ";
    }

    cout << endl;

    for(auto it : arr2){
        cout << it << " ";
    }
}