#include <iostream>
using namespace std;

//class�� �̸��� ���ø��̶�� ���� ����������
template<class TYPE>
void linklist<TYPE>::additem(TYPE d) {
	link<TYPE>* newlink = new link<TYPE>;
	newlink->data = d;
	newlink->next = first;
	first = newlink;
}

template<class TYPE>
void linklist<TYPE>::display() {
	link<TYPE>* current = first;
	while (current != NULL) {
		cout << endl << current->data;

	}
}

int main() {
	linklist
}