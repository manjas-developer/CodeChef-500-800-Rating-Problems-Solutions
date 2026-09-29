#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, rem;
        cin >> n;
        rem = 0;
        for(int i = 0; i < n; i++){
            int dif;
            cin >> dif;
            if(dif >= 1000){
            rem++;
            }
        }
        cout << rem << endl;
    }
}
