#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, N;
        cin >> n;
        N = n%4;
        if(N == 0){
            cout << "GOOD" << "\n";
        }
        else{
            cout << "NOT GOOD" << "\n";
        }
    }
}
