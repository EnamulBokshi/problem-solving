#include<bits/stdc++.h>


using namespace std;

int main(){

    vector <map<int,string>> acc;

    string str, substr;
    cin>>str>>substr;
    if(str.length() < substr.length()){
        return -1;
    }
    cout<<"Detials: "<<endl;
    cout<<"str len: "<<str.length()<< endl; 
    cout<<"sub str len: "<<substr.length()<< endl; 
    // cout<<"string len after calculation: "<<str.length()-substr.length();
    for(int i =0 ; i<str.length()-1; i++){
    cout<<"string len after calculation: "<<(str.length()-1-i);

        if(str[i] == substr[0] && (str.length()-i) > substr.length()){
    // cout<<"string len after calculation: "<<(str.length()-i);

            string str_sub=str.substr(i, substr.length());
            map<int, string> tempMap;
            tempMap[i]=str_sub;
            if(str_sub == substr) acc.push_back(tempMap);        
        }
    }

    auto firstPair = acc[0].begin();
    cout<<firstPair->first;

    return 0;
}