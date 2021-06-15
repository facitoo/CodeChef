#include<bits/stdc++.h>
using namespace std;

void insert_last(char element,stack<char> &ans){
	if(ans.empty())
		ans.push(element);
	else{
		char element2 = ans.top();
		ans.pop();
		insert_last(element2, ans);
		ans.push(element2);
	}
}

void rev(stack<char> &ans){
	if(!ans.empty()){
		char element = ans.top();
		ans.pop();
		rev(ans);
		insert_last(element, ans);
	}
	return;
}

int main(){
	string str;
	cin>>str;
	stack<char> ans;
	for(int i=0;i<str.length();i++){
		if(i+1 <  str.length() && str[i] == str[i+1]){
			i++;
			continue;
		}
		if(!ans.empty()){
			int last = ans.top();
			if(last == str[i]){
				ans.pop();
				continue;
			}
		}
		ans.push(str[i]);
	}
	rev(ans);
	while(!ans.empty()){
		cout<<ans.top();
		ans.pop();
	}
}