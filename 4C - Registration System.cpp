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
            cout<<"OK"<<endl;
            database[temp]++;
            
        }else{
            cout<<temp<<to_string(database[temp]++)<<endl;
        }
        
    }
    return 0;
}