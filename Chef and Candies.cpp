#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, total = 0;
        cin >> n >> x;
        if(x < n){
            total = n - x;
            total = (total + 4 - 1)/4;
        }
        else{
            total = 0;
        }
        cout << total << "\n";
    }

}
