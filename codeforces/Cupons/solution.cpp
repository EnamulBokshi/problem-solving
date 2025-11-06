#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, m;
    cin>>n;
    vector <int> barsPrice;
    vector<int> cupons;
    while (n--)
    {
      int item;
      cin>>item;
        barsPrice.push_back(item);
    }
    cin >> m;
    while (m--)
    {
        /* code */
        int item;
        cin>>item;
        cupons.push_back(item);
    }
    
    sort(barsPrice.begin(), barsPrice.end());

    int  barLen = barsPrice.size();

    long long totalPrice = 0;
    for(int price: barsPrice){
        totalPrice += price;
    }

    for(int cupon: cupons){
        int  discountBarPosition = barLen-cupon;
        cout<<totalPrice - barsPrice[discountBarPosition]<<endl;
    }
    
    return 0;
}
