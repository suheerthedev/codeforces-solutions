#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> vec(n);

    int mySum = 0, totalSum = 0, coins = 0;

    for(int i = 0 ; i < n; i++){
        cin>>vec[i];
        totalSum += vec[i];
    }

    sort(vec.begin(), vec.end(), greater<int>());

    for(int i = 0; i < n; i++){
        mySum += vec[i];
        coins++;
        if(mySum > totalSum/2){
            cout<<coins<<endl;
            return 0;
        }
    }
   
    return 0;
}