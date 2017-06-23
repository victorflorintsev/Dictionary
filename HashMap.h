//
// Created by Victor on 6/23/2017.
//

#ifndef DICTIONARY_HASHMAP_H
#define DICTIONARY_HASHMAP_H
#include <iostream>
using namespace std;

class tablenode {
public:
    std::string key = "";
    tablenode *next = 0;
};
class HashMap {
private:
    tablenode **table = 0;
public:
    HashMap();
    ~HashMap();
    tablenode * search(string s);
    void print();
    int hash_function(string s);

    HashMap(string filename);
};


#endif //DICTIONARY_HASHMAP_H
