//Jordi Monterrubio
//CS 300
//Assignment 5
//Hash Table
#include <iostream>
using namespace std;

//node which contains the key and value of each entry
template<class T>
struct node {
    int key;
    T value;
    node<T>* next;
};
template<class T>
class HashTable {
    //size of the table
    int size;
    //The table
    node<T>* arr[size];
    int hash(int n) {
        return n % size;
    }
    //finds an empty node to place a new node
    void findEmpty(node<T>* a, node<T>* &b) {
        int x = hash(a->key);
        if(b == NULL) {
            b = a;
        } else {
            findEmpty(a, b->next);
        }
    }
    //prints the value of a node which has the given key
    void returnValue(node<T>* n, int key) {
        if(n->key == key) {
            cout<<n->value<<endl;
        } else {
            returnValue(n->next, key);
        }
    }
    public:
        //constructor
        HashTable(int size) {
            this->size  = size;
        }
        //inserts a value into the hash table
        void insert(int key, T value) {
            int x = hash(key);
            node<T> n;
            n.key = key;
            n.value = value;
            if(arr[x] == NULL) {
                arr[x] = &n;
            } else {
                findEmpty(&n, arr[x]);
            }
        }
        //finds a node based on the key and prints the value
        void findValue(int key) {
            int x = hash(key);
            returnValue(arr[x], key);
        }
};
