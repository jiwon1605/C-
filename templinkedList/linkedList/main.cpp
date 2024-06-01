//사용자 정의 자료형 넣어보기
#include "tempSLL..h"
#include <string>
#include <iostream>

class student {
	int ID;
	string name;
};

int main() {
	//SLinkedList<student> ID;
	//SLinkedList<student> name;
	SLinkedList<string> school;
	SLinkedList<double> school_size;

	school.addFront("INU");
	school_size.addFront(462809.92);
	cout << school.front() << endl;
	cout << school.empty() << endl;
	school.removeFront();


}