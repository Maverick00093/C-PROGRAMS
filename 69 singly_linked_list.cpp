#include<iostream>
using namespace std;
struct Node {
	int data;
	Node*next;
	Node(int val):data(val),next(nullptr) {}
};
void traverseLinkedList(Node*head) {
	Node*current=head;
	while(current!=nullptr) {
		cout<<current->data<<" ";
		current=current->next;
	}
	cout<<endl;
}
void appendNode(Node*&head,int value) {
	Node*newNode=new Node(value);
	if(head==nullptr) {
		head=newNode;
	}
	else {
		Node*current=head;
		while(current->next!=nullptr) {
			current=current->next;
		}
		current->next=newNode;
	}
}
int main() {
	Node*head=nullptr;
	appendNode(head,10);
	appendNode(head,20);
	appendNode(head,30);
	appendNode(head,40);
	cout<<"Linked List :";
	traverseLinkedList(head);

	// Node*current=head;
	// while(current!=nullptr){
	//    Node*nextNode=current->next;
	//    delete current;
	//    current=nextNode;
	// }
	return 0;
}
