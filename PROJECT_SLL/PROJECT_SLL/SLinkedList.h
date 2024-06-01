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
	//�߰��Ǵ� ���ο� ����� next�� ���� �� ���� ����� �ּҸ� ����Ű�� �ۼ��� ����

	SLinkedList* newNode = new newNode; //�߰��� �� ��� ����
	newNode->elem = e; //newNode�� ������ �߰�
	newNode->next = head; //newNode�� next�� ���� ��带 ����Ű�� head���� ����.
	//��, newNode�� next�� ���� ����� �ּҸ� ����Ŵ. = newNode�� ���� ��带 �����Ŵ
	head = newNode; //head�� newNode�� ����Ŵ

}

template<typename E>
void SLinkedList<E>::removeFront() {
	//���� �Ǿ��� ��带 �����Ѵ�
	//head�� ���ŵ� ��� ������ ���� ����Ű�� �Ѵ�

	SLinkedList* removeNode; //������ ��带 ���� removeNode����
	if (head == NULL) return NULL; //���� head�� �ƹ��͵� ����Ű�� ���� ��� NULL ��ȯ
	removeNode = head; //removeNode�� head �� ����. �ֳ��ϸ� head�� ����Ű�� ���� ù��° ����ε�,
	//�� ù��° ��带 �����ϱ� ���� removeNode�� ����Ű���� ��
	head = removeNode->next; //head���� removeNode�� ���� ���, �� ù��° ������ ���� ���Ҹ� ����Ű����
	delete(removeNode); //removeNode�� �����ϸ� �� ���� ��带 ������
	

}
