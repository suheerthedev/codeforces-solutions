
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string n;
	cin>>n;
 
	char same;
	int count = 0;
 
	same = n[0];
 
	for(int i = 0; i < n.length();i++){
		if(same != n[i]){
			same = n[i];
			count = 0;
		}
		if(same == n[i]){
			count++;
			if(count >= 7){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
 
	cout<<"NO"<<endl;
	return 0;
}