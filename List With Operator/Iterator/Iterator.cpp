#include "Iterator.h"

Iterator::Iterator(Node* u) {
	v = u;
}

string& Iterator::operator*() {
	return v->elem;
}

bool Iterator::operator==(const Iterator& p){
	return v == p.v;
}

bool Iterator::operator!=(const Iterator& p){
	return v != p.v;
}

Iterator& Iterator::operator++() {
	v = v->next;
	return *this;
}

Iterator& Iterator::operator--() {
	v = v->prev;
	return *this;
}