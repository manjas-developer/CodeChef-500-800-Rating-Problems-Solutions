#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int x, a, b, bp, tp;
        cin >> x >> a >> b;
        bp = b*2;
        tp = bp + a;
        if(tp >= x){
            cout << "Qualify" << "\n";
        }
        else{
            cout << "NotQualify" << "\n";
        }
    }
}
