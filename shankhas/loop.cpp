#include <iostream>

using namespace std;
struct node {
	int data;
	node * next;
};

node* newNode(int data)
{
	node * temp = new node;
	temp->data = data;
	temp->next = NULL;
	return temp;
}

bool findLoop(node * head)
{
	node* fast_pointer = head;
	node* slow_pointer = head;
	while (fast_pointer && slow_pointer && fast_pointer->next) {
		slow_pointer = slow_pointer->next;
		fast_pointer = fast_pointer->next->next;
		if (slow_pointer == fast_pointer) {
			return true;
		}
	}
	return false;
	
}


void printList(node* head) 
{
	node* temp = head;
	while (temp != NULL) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}



int main()
{
	node* head = newNode(10);
	head->next = newNode(20);
	head->next->next = newNode(30);
	head->next->next->next = newNode(40);
	head->next->next->next->next = newNode(50);
	head->next->next->next->next->next = newNode(60);
	//head->next->next->next->next->next->next = head->next->next->next;
	if (findLoop(head)) {
		cout<<"Loop found\n";	
	} else {
		cout<<"Loop not found\n";
	}
	printList(head);
	return 0;
}



