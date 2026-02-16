#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int n;
	string w;
	string result = "";
	cin>>n;
	cin>>w;
 
	// char same = w[0];
	for(int i = 0 ; i < w.length()-1; i++){
		if(w[i] == w[i+1]){
			result += w[i];
		}
	}
 
	cout<<result.length()<<endl;
	return 0; 
}