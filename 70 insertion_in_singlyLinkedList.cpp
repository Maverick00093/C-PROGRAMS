#include<iostream>
using namespace std;
struct Node {
	int data;
	Node*next;
	Node(int value):data(value),next(nullptr) {};
};
Node*insertAtBeginning(Node*head,int value) {
	Node*newNode=new Node(value);
	newNode->next=head;
	head=newNode;
	return head;
}
void insertEnd(Node*&head,int value) {
	Node*newNode=new Node(value);

	if(head==nullptr) {
		head=newNode;
		return;
	}
	Node*current=head;
	while(current->next!=nullptr) {
		current=current->next;
	}
	current->next=newNode;
}

void displayList(Node*head) {
	Node*current=head;
	while (current!=nullptr) {
		cout<<current->data<<"->";
		current=current->next;
	}
	cout<<"nullptr"<<endl;
}

int findLenght(Node*head) {
	int length=0;
	Node*current=head;
	while(current!=nullptr) {
		length++;
		current=current->next;
	}
	return length;
}
int main() {
	Node*head=nullptr;
	insertEnd(head,20);
	insertEnd(head,30);
	insertEnd(head,40);
	insertEnd(head,50);

	cout<<"Linked List After Interting At The End :";
	displayList(head);
	head=insertAtBeginning(head,10);
	cout<<"Linked List After Interting At The Beginning :";
	displayList(head);

	int length=findLenght(head);
	cout<<"Length Of The Linked List :"<<length;

	//OPTIONAL

// 	Node*head;
// 	while(current!=nullptr){
// 		Node*nextNode=current->next;
// 		delete current;
// 		current=nextNode;
// 	}
// 	return 0;
}
