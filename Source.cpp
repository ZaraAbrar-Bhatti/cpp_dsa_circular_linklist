#include <iostream>
using namespace std;
class Node{
public:
	int data;
	Node *next;
};
class LinkList{
public:
	Node *head;
	Node *tail;
	LinkList(){
		head = NULL;
		tail = NULL;
	}
	void addNode(int position){
		Node *ptr = new Node;
		ptr->data = position;
		ptr->next = head;
		if (head == NULL){
			head = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
		else{
			tail->next = ptr;
			tail = ptr;
			ptr = NULL;
			delete ptr;
		}
	}
		void printList(){
			for (Node *i = head; i != tail;){
				cout << i->data << endl;
				i = i->next;
			}
			cout << tail->data << endl;
			cout << tail->next->data << endl;
		}
};
int main(){
	LinkList obj;
	obj.addNode(1);
	obj.addNode(2);
	obj.addNode(3);
	obj.addNode(4);
	obj.addNode(5);
	obj.printList();
	cout << endl;
	system("pause");
	return 0;
}