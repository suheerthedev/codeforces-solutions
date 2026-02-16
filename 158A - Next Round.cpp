#include <iostream>
using namespace std;
 
int main() {
    int n, k, temp;
    cin>> n >> k;
    int i = 1, count = 0, kth = 0;
    
    
    while(cin >> temp){
        if(temp <= 0) {
            break;
        }
        
        if(i <= k){
            count++;
            kth = temp;
        }else{
            if(temp >= kth){
                count++;
            }
        }
        i++;
    }
    
    cout<<count<<endl;
    return 0;
}