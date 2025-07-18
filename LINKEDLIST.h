#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <bits/stdc++.h>
using namespace std;
struct node {
	int val;
	node* next;
	node(int data) {
		val=data;
		next=nullptr;
	}
};

node* head=NULL;
node* tail=NULL;

struct LINKEDLIST {
	// insert
	void INSERT_AT_HEAD(int data){
		node *temp = new node(data);
		if(head==NULL){
			head=temp;
			tail=head;
		}
		else {
			temp->next=head;
			head=temp;
		}
	}
	void INSERT_AT_TAIL(int data){
		node *temp = new node(data);
		if(head==NULL){
			head=temp;
			tail=head;
		}
		else {
			tail->next=temp;
			tail=tail->next;
		}
	}
	// delete
	void DEL_AT_HEAD(){
		if(head==tail){
			head = tail = nullptr;
		}
		else {
			head=head->next;
		}
	}
	void DEL_AT_TAIL(){
		if(head==tail){
			head = tail = nullptr;
		}
		else {
			node *temp=head;
			while(temp->next!=tail) {
				temp=temp->next;
			}
			temp->next=nullptr;
			tail=temp;
		}
	}
	// display
	void DISPLAY() {
		node *temp = head;
		while(temp) {
			cout<<temp->val;
			temp=temp->next;
			if(temp) cout<<" -> ";
		}
		cout<<endl;
	}
};
#endif
