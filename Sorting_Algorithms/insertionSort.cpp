#include <iostream>
using namespace std;
//InserionSort
struct node
{
	int data;
	node* prev;
	node* next;
};

node* insert(node* &first, int elem)
{
	node* p = first;
	node* r = first;
	while (p != 0) {
		if (p->data < elem) {
			r = p; 
			p = p->next;
		} else {
			node* q = new node;
			q->data = elem;
			q->next = p;
			q->prev = p->prev;
			if (p == first){
				first = q;
				p->prev = q;
				return first;
			} else {
				p->prev->next = q;
				p->prev = q;
				return first;
			}
		}
	}
		node* q = new node;
		q->data = elem;
		q->next = nullptr;
		q->prev = r;
		if (first != nullptr){
			r->next = q;
		} else {
			first = q;
		}
		return first;

}

node* insertionsort(int arr[], int size)
{
	node* p = nullptr;
	for (int i = 0; i < size; ++i){
		//cin >> arr[i];
		insert(p, arr[i]);
	}
	return p;
}

void print(node* p1)
{
	while (p1 != 0){
		cout << " " << p1->data;
		p1 = p1->next;
	}
	cout << endl;
}

int main()
{
	int a[] = { 35, 534, 77, 35, 1 }; //{1, 9 , 7 , 3 , 5};
	node* p = insertionsort(a, sizeof(a) / sizeof(int));
	print(p);
	system("pause");
	return 0;
}
