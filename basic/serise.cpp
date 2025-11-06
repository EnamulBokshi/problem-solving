#include <stdio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

 int main()
{
   int i, sum =0, n;
   cin >> n;
   for(i=1; i<=n; i = i+2)
   {
       sum = sum + i;
   }
   cout << "Sum of first " << n << " natural numbers is: " << sum;
   cout << endl;
    return 0;
}
