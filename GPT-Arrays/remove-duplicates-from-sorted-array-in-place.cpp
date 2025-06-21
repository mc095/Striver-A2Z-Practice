    #include<bits/stdc++.h>
    using namespace std;

    int main(void){
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int i = 0;
        for(int j=1; j<arr.size(); j++){
            if(arr[i] != arr[j]){
                i++;
                arr[i] = arr[j];
            }
        }

        arr.resize(i+1);


        for(auto it : arr){
            cout << it << " ";
        }
    }