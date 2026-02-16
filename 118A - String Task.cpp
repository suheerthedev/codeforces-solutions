#include <bits/stdc++.h>
using namespace std;
 
int main(){
	string vowel = "aoyeui";
	string word;
	cin>>word;
    
	transform(word.begin(), word.end(), word.begin(), [](unsigned char c){return tolower(c);});
 
	word.erase(remove(word.begin(), word.end(), 'a'), word.end());
	word.erase(remove(word.begin(), word.end(), 'o'), word.end());
	word.erase(remove(word.begin(), word.end(), 'y'), word.end());
	word.erase(remove(word.begin(), word.end(), 'e'), word.end());
	word.erase(remove(word.begin(), word.end(), 'u'), word.end());
	word.erase(remove(word.begin(), word.end(), 'i'), word.end());
 
 
	int length = word.length();
	
	for(int i = length-1; i >= 0; i--){
		word.insert(i,1,'.');
		
		
	}
	
	cout<<word<<endl;
	return 0;
}
 