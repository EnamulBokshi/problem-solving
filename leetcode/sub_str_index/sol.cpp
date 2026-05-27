#include<bits/stdc++.h>


using namespace std;

int main(){
    vector <map<int,string>> acc;
    string str, substr;
    cin>>str>>substr;
    if(str.length() < substr.length()){return -1;}
    cout<<"Detials: "<<endl;
    cout<<"str len: "<<str.length()<< endl; 
    cout<<"sub str len: "<<substr.length()<< endl; 
    for(int i = 0; i<str.length(); i++){    
        if(str[i] == substr[0] && (str.length()-i) >= substr.length()){
            string str_sub=str.substr(i, substr.length());
            map<int, string> tempMap;
            tempMap[i]=str_sub;
            if(str_sub == substr) acc.push_back(tempMap);        
        }
    }
    if(acc.size()){
        auto firstPair = acc[0].begin();
        cout<<firstPair->first;
        return 0;
    }

    return -1;
}