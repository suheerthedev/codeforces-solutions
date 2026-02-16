#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
 
	int temp = 0, prev = 0, count = 1, max = 0;
	
 
	while(n--){
		cin>>temp;
		if(prev != 0){
			if(temp >= prev) count++;
			else count = 1;
		}
		
		if(count >= max) max = count;
		prev = temp;
	}
 
		cout<<max<<endl;
 
	return 0;
}