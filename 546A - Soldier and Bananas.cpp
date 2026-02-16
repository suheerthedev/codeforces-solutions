
#include <bits/stdc++.h>
using namespace std;
 
int main(){
	int k,n,w;
	cin>>k>>n>>w;
 
	int sum = (w*(1+w))/2;
 
	if((k*sum) > n){
		cout<<(k*sum)-n<<endl;
	}else{
		cout<<0<<endl;
	}
 
	return 0;
}