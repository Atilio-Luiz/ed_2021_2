#include<stdexcept>
#include<iostream>
#include "Node.h"
#include "LinkedList.h"
using namespace std;

// Constructor: the linked list
// initializes empty
LinkedList::LinkedList() {
    m_size = 0;
    m_head = nullptr;
}

// Returs true if and only if the 
// list is empty
bool LinkedList::empty() {
    return m_head == nullptr;
}

// Empty the list and frees memory
void LinkedList::clear() {
    while(m_head != nullptr) {
        Node *temp = m_head;
        m_head = m_head->next;
        delete temp;
    }
    m_size = 0;
}

// Returns the size of the list
int LinkedList::size() {
    return m_size;
}

// Adds an element at the end of the list
void LinkedList::push_back(Item data) {
    Node *newnode = new Node(data);
    if(m_head == nullptr) {
        m_head = newnode;
    } else {
        Node *current = m_head;
        while(current->next != nullptr) {
            current = current->next;
        }
        current->next = newnode;
    }
    m_size++;
}

// Deletes an element from the end of the list
void LinkedList::pop_back() {
    if(m_head == nullptr) {
        throw std::underflow_error("empty list");
    }
    if(m_head->next == nullptr) {
        delete m_head;
        m_head = nullptr;
        m_size = 0;
        return;
    }
    Node *current = m_head;
    while(current->next->next != nullptr) {
        current = current->next;
    }
    delete current->next;
    current->next = nullptr;
    m_size--;
}

// Inserts data at any position in the range [0..size()]
void LinkedList::insert(int index, Item data) {
    if(index < 0 || index > m_size) {
        throw std::out_of_range("index out of range");
    }
    if(index == 0) {
        Node *newnode = new Node(data, m_head);
        m_head = newnode;
        m_size++;
        return;
    }
    int counter = 0;
    Node *current = m_head;
    while(counter < index-1) {
        counter++;
        current = current->next;
    }
    Node *newnode = new Node(data, current->next);
    current->next = newnode;
    m_size++;
}

// Deletes data at any position in the range [0..size()-1]
void LinkedList::remove(int index) {
    if(index < 0 || index >= m_size) {
        throw std::out_of_range("index out of range");
    }
    if(index == 0) {
        Node *temp = m_head;
        m_head = m_head->next;
        delete temp;
        m_size--;
        return;
    }
    int counter = 0;
    Node *current = m_head;
    while(counter < index-1) {
        counter++;
        current = current->next;
    }
    Node *temp = current->next;
    current->next = current->next->next;
    delete temp;
    m_size--;
}

// Destructor
LinkedList::~LinkedList() {
    clear();
}

// operator[] overloaded
Item& LinkedList::operator[](int index) {
    if(index < 0 || index >= m_size) {
        throw std::out_of_range("index out of range");
    }
    int counter = 0;
    Node *current = m_head;
    while(counter < index) {
        counter++;
        current = current->next;
    }
    return current->data;
}

// operator<< overloaded
std::ostream& operator<<(std::ostream& out, const LinkedList& list) {
    Node *current = list.m_head;
    out << "[ ";
    while(current != nullptr) {
        out << "(" << current->data << ") ";
        current =current->next;
    }
    out << "]";
    return out;
}