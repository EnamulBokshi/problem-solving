#include <bits/stdc++.h>
using namespace std;
#define int long long ll;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
   int  long long count, a, b, c, d;

    string s;
    s = "1000000000 999999999 1000000000 999999999";
    vector <long long> v;
    stringstream ss(s);
    string temp;
    while(ss>>temp){
        v.push_back(stoll(temp));

    }
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<count<<endl;
    return 0;
}