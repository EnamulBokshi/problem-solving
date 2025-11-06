#include <iostream>
#define ll long long
using namespace std;
int main() {
    ll t, x1,x2;
    cin>>t;
    while(t--){
        cin>>x1>>x2;
        if(x2 %2 == 0 ){
            cout<<"0"<<endl;
        }else{
            cout<<x1<<endl;
        }
    }
    return 0;
}