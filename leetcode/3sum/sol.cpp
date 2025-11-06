#include <iostream>

#include <vector>

using namespace std;



int find_x(int x, int arr[]){


}


int main(){

    vector<int> arr  = {-1,0,1,2,-1,-4};
    vector<int> subarr;
    int n =6;

    for(auto it = arr.begin(); it<arr.end(); it++){
        for(auto j = it+1; j <arr.end(); j++){
            if(*it != *j){
                 int sum = *it+*j;
                 find_x(sum,  );
            }

        }
    }

}


