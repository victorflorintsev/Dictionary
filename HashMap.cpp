//
// Created by Victor on 6/23/2017.
//

#include <fstream>
#include "HashMap.h"

HashMap::HashMap(string filename) {
    ifstream in(filename);
    string temp;
    while (in.is_open()) {
        while (in.good()) {
            getline(in,temp);

        }
    }

}
