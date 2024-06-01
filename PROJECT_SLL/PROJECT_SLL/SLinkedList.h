#pragma once
#include <iostream>
#include <string>

using namespace std;

template<typename E>
class SNode {
private:
	E elem;
	SNode<E>* next;
	friend class SLinkedList<E>;
};

template<typename E>
class SLinkedList {
public:
	SLinkedList();
	~SLinkedList();
	bool empty() const;
	const E& front() const;
	void addFront(const E& e);
	void removeFront();

private:
	SNode<E>* head;
};

template<typename E>
SLinkedList<E>::SLinkedList()
	:head(NULL) {}

template<typename E>
bool SLinkedList<E>::empty() const
{
	return head == NULL;
}

template<typename E>
SLinkedList<E>::~SLinkedList()
{
	while (!empty()) removeFront();
}

template<typename E>
void SLinkedList<E>::addFront(const E& e) {
	//추가되는 새로운 노드의 next가 기존 맨 앞의 노드의 주소를 가리키게 작성할 예정

	SLinkedList* newNode = new newNode; //추가할 새 노드 생성
	newNode->elem = e; //newNode에 데이터 추가
	newNode->next = head; //newNode의 next가 기존 노드를 가리키던 head값을 가짐.
	//즉, newNode의 next는 기존 노드의 주소를 가리킴. = newNode와 기존 노드를 연결시킴
	head = newNode; //head는 newNode를 가리킴

}

template<typename E>
void SLinkedList<E>::removeFront() {
	//가장 맨앞의 노드를 삭제한다
	//head가 제거된 노드 다음의 것을 가르키게 한다

	SLinkedList* removeNode; //삭제할 노드를 넣을 removeNode생성
	if (head == NULL) return NULL; //만일 head가 아무것도 가리키지 않을 경우 NULL 반환
	removeNode = head; //removeNode에 head 값 넣음. 왜냐하면 head가 가리키는 값은 첫번째 노드인데,
	//이 첫번째 노드를 삭제하기 위해 removeNode가 가리키도록 함
	head = removeNode->next; //head에는 removeNode의 다음 노드, 즉 첫번째 원소의 다음 원소를 가리키게함
	delete(removeNode); //removeNode를 해제하며 맨 앞의 노드를 삭제함
	

}
