#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    int steps = 0;

    while(x >= 5){
        x -= 5;
        steps++;
    }
    
    while(x >= 4){
        x -= 4;
        steps++;
    }

    while(x >= 3){
        x -= 3;
        steps++;
    }

    while(x >= 2){
        x -= 2;
        steps++;
    }

    while(x >= 1){
        x -= 1;
        steps++;
    }

    cout<<steps<<endl;

    return 0;
}

//  int n, t;
//     cin>>n>>t;

//     string s;
//     cin>>s;

//     while(t--){
//         for(int i = 0; i < n; i++){
//             if(s[i] == 'B' && s[i+1] == 'G'){
//                 s[i] = 'G';
//                 s[i+1] = 'B';
//             }
//             // if(s[i-1] == 'B' && s[i] == 'G'){
//             //     s[i] = 'B';
//             //     s[i-1] ='G';
//             //     i-1;
//             // }
//         }
//     }

//     cout<<s<<endl;

    
