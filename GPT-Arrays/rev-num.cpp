#include<bits/stdc++.h>
using namespace std;

int gcdTwo(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;

        cout << "a : " << a << endl;
        cout << "b : " << b << endl;
    }

    return a;
}

int main(void){
    int a;
    cin >> a;
    int b;
    cin >> b;

    int gcd = gcdTwo(a, b);
    cout << gcd;
    
}