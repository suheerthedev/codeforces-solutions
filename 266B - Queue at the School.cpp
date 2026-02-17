#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n>>t;

    string s;
    cin>>s;

    while(t--){
        for(int i = n-1; i >= 0; i--){
            if(s[i-1] == 'B' && s[i] == 'G'){
                s[i-1] = 'G';
                s[i] = 'B';
                i -=1;
            }
        }
    }

    cout<<s<<endl;

    return 0;
}