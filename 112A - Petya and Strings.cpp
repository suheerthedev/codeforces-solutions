#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string m,n;
    cin>>m;
    cin>>n;
    
    for (int i = 0 ; i < m.length(); i++){
        m[i] = tolower(m[i]);
    }
    
    for (int i = 0 ; i < n.length(); i++){
        n[i] = tolower(n[i]);
    }
    
    if(m > n){
        cout<<1<<endl;
    }else if(m < n){
        cout<<-1<<endl;
    }else if(m == n){
        cout<<0<<endl;
    }
    return 0;
 
}