#include<bits/stdc++.h>
using namespace std;
#define MAX 100
struct QUEUE{
vector<int>q;
void enqueue(int val){
	q.push_back(val);
}
void deque(){
	q.pop_back();
}
int top(){
	return q[0];
}
void  empty(){
	if(q.empty()) cout<<"empty";
	else cout<<"not empty";
}
int full(){
	if(q.size()==MAX) return 1;
	else return 0;
}
void display(){
	for(int i=0;i<q.size();i++){
		cout<<q[i]<<" ";
	}
	cout<<"\n";
}
};
