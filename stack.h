#include<bits/stdc++.h>
using namespace std;
#define MAX 100
struct STACK {
	vector<int>st;
	void push(int val){
	st.push_back(val);
	}
	void pop(){
		st.pop_back();
	}
int top(){
	return st[st.size()-1];
}
int empty(){
	if(st.empty()) return 1;
	else return 0;
}	
int full(){
	if(st.size()==MAX) return 1;
	else return 0;
}
void display(){
	for(int i=st.size()-1;i>=0;i--){
		cout<<st[i]<<" ";
	}
	cout<<"\n";
}
};
