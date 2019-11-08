#include <iostream>

int randInt(int min, int max) {
	return min + rand() % max;
}

struct Node {
     int x;
     Node *Next, *Prev;
};

class List {
Node *Head, *Tail;
public:
	List():Head(NULL), Tail(NULL) {};
	~List();
	void Show();
	void Add(int x);
};

void List::Add(int x) {
	Node *temp = new Node;
	temp->Next = NULL;
	temp->x = x;

	if (Head != NULL) {
		temp->Prev = Tail;
		Tail->Next = temp;
		Tail = temp;
	} else {
		temp->Prev = NULL;
		Head = Tail = temp;
	}
}

void List::Show() {
     Node *temp=Tail;
 
     while (temp != NULL)
     {
         cout << temp->x << " ";
         temp = temp->Prev;
     }
     cout << "\n";
 
     temp = Head;
      while (temp != NULL)
     {
         cout << temp->x << " ";
         temp = temp->Next; 
     }
     cout << "\n";
 }

int main() {


	return 0;
}