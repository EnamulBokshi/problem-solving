#include <bits/stdc++.h>
using namespace std;
#define long long ll


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 0;
    cin>>n;
    vector <string> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]=="++X" || a[i] == "X++")
            count++;
        else
            count--;
    }
    cout<<count<<endl;
    return 0;
}
