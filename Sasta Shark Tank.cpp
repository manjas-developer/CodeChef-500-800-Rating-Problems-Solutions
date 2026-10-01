#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, b, A, B;
        cin >> a >> b;
        A = (a/10)*100;
        B = (b/20)*100;
        if(A == B){
            cout << "ANY" << "\n";
        }
        else if(A > B){
            cout << "FIRST" << "\n";
        }
        else{
            cout << "SECOND" << "\n";
        }
    }
}
