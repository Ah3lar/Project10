#include "List.h"

template <typename T>
List<T>::List() : head(nullptr), tail(nullptr) {}

template <typename T>
List<T>::~List() {
    clear();
}

template <typename T>
void List<T>::push_back(const T& value) {
    Node* newNode = new Node(value);
    if (!tail) {
        head = tail = newNode;
    }
    else {
        tail->following = newNode;
        newNode->previous = tail;
        tail = newNode;
    }
}

template <typename T>
void List<T>::push_front(const T& value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = tail = newNode;
    }
    else {
        newNode->following = head;
        head->previous = newNode;
        head = newNode;
    }
}

template <typename T>
void List<T>::pop_front() {
    if (!head) return;
    Node* temp = head;
    head = head->following;
    if (head) head->previous = nullptr;
    delete temp;
    if (!head) tail = nullptr;
}

template <typename T>
void List<T>::pop_back() {
    if (!tail) return;
    Node* temp = tail;
    tail = tail->previous;
    if (tail) tail->following = nullptr;
    delete temp;
    if (!tail) head = nullptr;
}

template <typename T>
T List<T>::back() const {
    if (tail) return tail->data;
    throw "List is empty";
}

template <typename T>
T List<T>::front() const {
    if (head) return head->data;
    throw "List is empty";
}

template <typename T>
void List<T>::clear() {
    while (head) {
        pop_front();
    }
}

template <typename T>
bool List<T>::isEmpty() const {
    return head == nullptr;
}
