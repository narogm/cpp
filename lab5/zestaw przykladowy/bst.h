//
// Created by Mateusz on 05.05.2019.
//

#ifndef ZESTAW_PRZYKLADOWY_BST_H
#define ZESTAW_PRZYKLADOWY_BST_H

#include <iostream>
#include "Exception.h"
using namespace std;

template <class T>
class NodeBST
{
    T data;
    NodeBST* left;
    NodeBST* right;
public:
    NodeBST(T _data) : data(_data), left(NULL), right(NULL) {}
    bool contains(T val) const;
    bool insert(T val);
    void print() const;
    T getValue() const;
    NodeBST* getLeft() const{ return left;}
    NodeBST* getRight() const {return right;}
//    friend ostream& operator<<(ostream&os, const NodeBST<T> &node);
};

template <class T>
bool NodeBST<T>::contains(T val) const {
    if (val == data) return true;
    NodeBST* next = (val < data) ? left : right;
    return (next != NULL) ? next->contains(val) : false;
}

template <class T>
bool NodeBST<T>::insert(T val) {
    if (val == data) throw Exception("This value already exists in tree\n");
    NodeBST* & next = (val < data) ? left : right;
    if (next == NULL) {
        next = new NodeBST(val);
        return true;
    }
    else return next->insert(val);
}

template <class T>
void NodeBST<T>::print() const {
    if (left != NULL) left->print();
    cout << data << " ";
    if (right != NULL) right->print();
}

template<class T>
T NodeBST<T>::getValue() const {
    return data;
}

//////////////////////////////////////////////////////

template <class T>
class TreeBST
{
    NodeBST<T>* root;
public:
    TreeBST() : root(NULL) {}
    bool contains(T val) const { return (root != NULL) ? root->contains(val) : false; }
    bool insert(T val);
    void print() const;
    NodeBST<T>* getRoot() const;
    template <class F>
    friend ostream& operator<<(ostream &os, const TreeBST<T> &tree);
};

template <class T>
bool TreeBST<T>::insert(T val) {
    if (root == NULL) {
        root = new NodeBST<T>(val);
        return true;
    }
    else return root->insert(val);
}

template <class T>
void TreeBST<T>::print() const {
    cout << "tree: [";
    if (root == NULL) cout << "empty" << endl;
    else root->print();
    cout << "]" << endl;
}

template <class T>
ostream& operator<<(ostream& os, const TreeBST<T>& tree){
    os << "tree: [";
    NodeBST<T>* root = tree.getRoot();
    os << root->getValue();
//    os << root->print();
//    if (tree.root == NULL) os << "empty" << endl;
//    else tree.root->print();
//    os << "]" << endl;
    return os;
}

template<class T>
NodeBST<T> *TreeBST<T>::getRoot() const {
    return root;
}

#endif //ZESTAW_PRZYKLADOWY_BST_H


