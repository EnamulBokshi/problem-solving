#include <iostream>
#include <bits/stdc++.h>

#include <vector>
#include<string>

using namespace std;


int main(){
    int t;
    cin >> t;
    while(t--){
        int n,m;
        string a,b,c;
        cin>>n;
        cin.ignore();

        getline(cin,a);
        cin>>m;
        cin.ignore();
        getline(cin,b);
        getline(cin,c);
        
        vector<char> left, right;
        
        for(int i = 0; i < m; i++){
            if(c[i] == 'V') {
                left.push_back(b[i]);
            }
            else{
                right.push_back(b[i]);
            }
        }
 
        string result = "";

        for(int i = left.size()-1; i >= 0; i--) {
            result += left[i];
        }
        result += a;
        for(char ch : right) {
            result += ch;
        }
        cout << result << endl;
    }
}