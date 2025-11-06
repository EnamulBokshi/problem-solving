#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int findIndex(vector<ll> &v, ll c);
void solve();

int findIndex(vector<ll> &v, ll c)
{
    int l = 0, r = v.size() - 1;
    int mid = -1;
    while ( l <= r){
         mid = l + (r-l) /2 ;
         
         if(v[mid] == c){
            return  mid;
         }
         else if(v[mid] < c){
            r = mid-1;
         }
         else {
            l = mid+1;
         }
    }
    return r+1;

}

void solve()
{
    ll n, c ;
    cin>> n >> c ;

    ll ctn = 0;

    vector<ll>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(), v.end(), greater<ll>());
    for(int i=0; i<v.size()-1; i++)
    {
        int result = findIndex(v, c);
        if(result > v.size()) {
            break;
        }
        ctn ++;
        // while (!v.empty() && v.back() > c) v.pop_back();
        v.erase(v.begin(), v.begin() + result);

        for(ll &element : v) {
            element *= 2;
        }

    //    for(auto it = v.begin(); it != v.end(); it++) {
    //        cout <<*it << " ";

    //     }

        cout<<endl;
        // 
        // break;

    }

    cout <<"Result: " << n-ctn-1 << endl;

}



int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}