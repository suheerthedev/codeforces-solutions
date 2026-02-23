#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
 
    map<string,int> database;
 
    string temp;
 
    for(int i = 0 ; i < n; i++){
        cin>>temp;
        if(database[temp]  == 0){
            cout<<"\nOK";
            database[temp]++;
            
        }else{
            cout<<"\n"<<temp<<to_string(database[temp]++);
        }
        
    }
    return 0;
}