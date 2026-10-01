#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, car;
        cin >> n;
        if(n < 4){
            cout << 1 << endl;
        }
        else{
        car = (n+3)/4;
        cout << car << endl;
        }
    }
}
