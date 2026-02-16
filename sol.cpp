#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
 
    string target = "hello";
    int targetIndex = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == target[targetIndex]){
            targetIndex++;
        }
        if(targetIndex == target.length())break;
    }

    if(targetIndex == target.length()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
    return 0;
}