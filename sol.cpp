#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    string hello = "hello";
    int count = 0;

    for(int i = 0; i < s.length(); i++){
        if(count == 0 && s[i] == 'h')count++;
        else if(count == 1 && s[i] == 'e') count++;
        else if(count == 2 && s[i] == 'l') count++;
        else if(count == 3 && s[i] == 'l') count++;
        else if(count == 4 && s[i] == 'o') count++;
    }

    if(count == hello.length()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    return 0;
}

 // int n;
    // cin>>n;

    // int coins = 0, twinSum = 0, mySum = 0;

    // int arr[n];

    // for(int i = 0 ; i < n; i++){
    //     cin>>arr[i];
    // }

    // sort(arr, arr+n);


    // for(int i = 0 ; i < n; i++){
    //     if(abs(i-n)-1 == i){
    //         mySum = arr[abs(i-n)-1];
    //         coins++;
           
    //     }

    //      if(mySum > twinSum && (abs(i-n)-1 <= i)){
    //         cout<<coins<<endl;
    //         return 0;
    //     }

        

    //     mySum += arr[abs(i-n)-1];
    //     twinSum += arr[i];
    //     coins++;

        
    // }