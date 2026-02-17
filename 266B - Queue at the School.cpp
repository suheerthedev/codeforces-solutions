#include <bits/stdc++.h>
using namespace std;

vector<int> calculateIndices(vector<int> vec, string s, int n){
    for(int i = 0; i < n; i++){
        if(s[i] == 'B'){
            vec[i] = i;
        }
    }
    return vec;
}

int main(){
    int n, t;
    cin>>n>>t;

    string s;
    cin>>s;

    vector<int> indices(n,-1);
    
    while(t--){
        indices = calculateIndices(indices, s,n);
        for(int i = 0; i < n; i++){
            if(indices[i] != -1){
                if(s[i+1] == 'G'){

                s[i] = 'G';
                s[i+1] = 'B';
                }
            }
        }
        fill(indices.begin(), indices.end(), -1);
    }

    cout<<s<<endl;

    return 0;
}