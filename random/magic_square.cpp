#include<bits/stdc++.h>
    using namespace std;

    int main(){
        int n;
        cin>>n;
        int a[n][n];
        int magic = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int tmp ;
                cin >> tmp;
                if(i == 0) magic += tmp;        
                cin>>a[i][j];
            }
        }
        // int magic=(((n*n)*((n*n)+1))/(n*2));

        int rsum=0;
        for(int i=0;i<n;i++){

            rsum=0;
            for(int j=0;j<n;j++){
                rsum=a[i][j]+rsum;
            }
            if(rsum!=magic){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        int dsum=0;
        int csum=0;
        for(int j=0;j<n;j++){
            csum=0;
            for(int i=0;i<n;i++){
                csum=a[i][j]+csum;
                if(i==j){
                    dsum+=a[i][j];
                }
            }
            if(csum!=magic){
                cout<<"NO"<<endl;
                return 0;
            }

        }
        int dsum2 = 0;
        for (int i = 0; i < n; i++) {
            dsum2 += a[i][n - 1 - i];
        }
        if(dsum2!=magic){
                cout<<"NO"<<endl;
                return 0;
            }

        if(dsum!=magic){
                cout<<"NO"<<endl;
                return 0;
            }else{
                cout<<"YES"<<endl;

            }


    }