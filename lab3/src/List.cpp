#include "List.hpp"

#include <utility>

List::List() :
	head(nullptr),
	length(0) {}

//deep copy
List::List(const List& other) { 
	//Case 1: the other list is not empty
	if (other.head != nullptr) {
		
	} 
	else { //Case 2: the other list is empty
		List.head = other.head;
		List.length = other.length;
	}
}

List::List(List&& other) {}

List::~List(){
	ListNode *it = this->head;
	while(it != nullptr) {
		delete[] ListNode;
		it = it->next;
	}
}

void List::append(int num) { 
	//Case1: list is empty
	if (this->head == nullptr) {
		this->head = new ListNode(num);
	}
	//Case2: list not empty so append to end
	else { 
		ListNode *it = this->head;
		while(it->next != nullptr) {
			it = it->next;
		}
		it->next = new ListNode(num);
	}
}

List::void insert(int index, int num) {
	//Guard check if index valid
	if (index > length || index < 0) {
		throw "List.insert: index is out of scope!";
	}
	else {
		ListNode *it;
		//case 1: insert at beginning
		if (index == 0) {
			it = new ListNode(num);
		}
		//case 2: insert at end
		elseif (index == length) {
			while(it->next != nullptr) {
				it = it->next;
			}
			it->next = new ListNode(num);
		}
		//case 3: insert at index in between
		else {
			for(i=0; i != index; i++) {
				it = it->next;
			}
			it = new ListNode(num);
		} 
		length = length++;
	}
}

List::void remove(int index) {
	//guard check to check if index is valid
	if (index > length || index < 0) {
		throw "List.index is out of scope!";
	}

	else {
		//case 1: remove at beginning
		if (index == 0) {}
		//case 2: remove at end
		elseif (index == length) {}
		//case 3: remove in middle
		else 
	}
}

List::int get(int index) const {}

List::std::size_t size() const {}

List::int& operator[](int index) {}

