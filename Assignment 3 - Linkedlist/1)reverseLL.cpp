#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
	int data;
	node* next;
	node(int data){
		this->data = data;
		next = NULL;
	}
};

struct LinkedList{
	node* head;
	LinkedList(){
		head = NULL;
	}
	void reverse()
	{
		node* curr = head;
		node* prev = NULL, *next = NULL;
		while(curr != NULL)
		{
			next = curr->next;
			curr->next = prev;
			prev = curr;
			curr = next;
		}
		head = prev;
	}
	void display(){
		node* temp = head;
		while(temp != NULL){
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
	void insert(int data){
		node* temp = new node(data);
		temp->next = head;
		head = temp;
	}
};

int main(){
  LinkedList l;
  l.insert(6);
  l.insert(9);
  l.insert(1);
  l.insert(3);
  l.insert(7);
  cout << "Current Linked List: ";
  l.display();
  l.reverse();
  cout << "\nReversed Linked List: ";
  l.display();
  return 0;
}
