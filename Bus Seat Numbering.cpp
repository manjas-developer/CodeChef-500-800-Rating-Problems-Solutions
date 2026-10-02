#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n <= 10){
            cout << "Lower Double" << endl;
        }
        else if(n > 10 && n <= 15){
            cout << "Lower Single" << endl;
        }
        else if(n > 15 && n <= 25){
            cout << "Upper Double" << endl;
        }
        else{
            cout << "Upper Single" << endl;
        }
    }
}
