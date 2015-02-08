#include "Operacions.h"
#include <stdlib.h>
#include <fstream>
#include <iostream>
using namespace std;


/* Constructora */
Operacions::Operacions(){
}


/* Destructora */
Operacions::~Operacions(){
}



/*
 * Fa un random mòdul 5, de moment (5 personatges)
 */

int Operacions::ferRandom(){
    unsigned char rnd;
    int num_opcions = 48;
    int magic_number = 0;
    ifstream random_input("/dev/urandom",ios::binary);
    random_input.read((char*)&rnd,1);
    magic_number = (unsigned int)((double)((double)rnd/(double)255.0)*num_opcions);
    random_input.close();
    return magic_number;
}


