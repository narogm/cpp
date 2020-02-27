//
// Created by Mateusz on 21.05.2019.
//

#ifndef ZAD_Z_ZAJEC_LIST_H
#define ZAD_Z_ZAJEC_LIST_H

#include <iostream>
#include "MyExeption.h"
using namespace std;

template <class T>
class Node{
    T value;
    Node* next;
public:
    Node(T _value): value(_value), next(NULL){}
    T get_value(){ return value;}
    Node* get_next(){ return next;}
    void set_next(Node<T>* _next ){ next = _next;}

};

//////////////////

template <class T>
class List{
    Node<T>* head;
    List(const List &list){}
    List &operator=(const List &list){}
public:
    List(): head(NULL){}
    ~List(){}
    void insert(T val);
    void remove();
    Node<T>* get_head(){ return head;}
    template <class F>
    friend ostream& operator<<(ostream& os, List<T>& list);
};

template<class T>
void List<T>::insert(T val) {
    Node<T>* node = new Node<T>(val);
    if(head == NULL){
        head = new Node<T>(val);
    }
    else{
        node->set_next(head);
        head = node;
    }
}

template<class T>
void List<T>::remove() {
    if(head == NULL){
        throw MyException("Unable to remove element. List is empty\n");
    }
    Node<T>* tmp = head;
    head = head->get_next();
    delete(tmp);
}

template <class T>
ostream& operator<<(ostream& os, List<T>& list){
    os << "list: [";
    Node<T>* tmp = list.get_head();
    while(tmp != NULL){
        os << tmp->get_value() << " ";
        tmp = tmp->get_next();
    }
    os << "]\n";
    return os;
}

#endif //ZAD_Z_ZAJEC_LIST_H
