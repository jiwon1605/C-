#pragma once
#include "node.h"

class Iterator {
public:
	Iterator(Node* u);
	Elem& operator*();
	bool operator==(const Iterator& p);
	bool operator!=(const Iterator& p);
	Iterator& operator++();
	Iterator& operator--();
	friend class NodeList;
private:
	Node* v;
};

