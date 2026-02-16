#include <bits/stdc++.h>
using namespace std;
 
int main(){
   int n;
    cin>>n;
    
    int x = 0;
    string temp;
    
    for(int i =0; i < n; i++){
		cin>>temp;
    	if(temp[1] == '+'){
    		x++;
		}else if(temp[1]=='-'){
			x--;
		}
	}
	
	cout<<x<<endl;
    return 0;
 
 
}