//Jordi Monterrubio
//CS 300
//Assignment 5
//BarcodeHashScanner
#include <iostream>
#include <fstream>
#include <sstream>
#include <time.h>
#include "HashTable.h"
using namespace std;
int main() {
    ifstream file;
    file.open("upc_corpus.txt");
    HashTable<string> h(1000);
    string line;
    //load data into the hash table
    for(int i = 0, i < 1000, i++) {
        getline(file, line)
        istringstream ss(line);
        string token;
        int key;
        string value;
        getline(ss, token, ',');
        std::string s = token;
        key = std::stoi(s);
        getline(ss, token, ',');
        value = token;
        h.insert(id, data);
    }
    string myStr;
    int upcCode;
    cout<<"UPC Code: ";
    //get user input
    getline(cin, myStr);
    stringstream(myStr)>>upcCode;
    //keep track of time
    clock_t t;
    t = clock();
    //print out data
    bst.findValue(upcCode);
    t = clock() - t;
    cout<<"time: "<<t*1.0/CLOCKS_PER_SEC<<" seconds"<<endl;
    return 0;
}
