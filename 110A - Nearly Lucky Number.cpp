#include <bits/stdc++.h>
using namespace std;

bool isLucky(int k){
    string s  = to_string(k);
    for(char c : s){
        if(c != '4' && c != '7') return false;
    }

    return true;
}

int countLuckyDigits(string s){
    int count = 0;
    for(char c : s){
        if(c == '4' || c == '7') count++;
    }

    return count;
}
 
int main(){
    string s;
    cin>>s;

    int count = countLuckyDigits(s);

    if(isLucky(count))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;   
    return 0;
}