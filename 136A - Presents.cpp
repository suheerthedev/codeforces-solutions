#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int temp = 0;
	int arr[n];
 
	for(int i = 0; i < n; i++){
		cin>>temp;
		arr[temp-1] = i+1;
		
	}
 
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
 
 
	return 0;
}