#pragma once
#include<iostream>
using namespace std;
typedef string Elem;
struct Node {
	Elem elem;
	Node* prev;
	Node* next;
	friend class NodeList;
	friend class Iterator;
};
