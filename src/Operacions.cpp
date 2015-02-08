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




int Operacions::ferRandom(){
    unsigned char rnd;
    int result;
    ifstream random_input("/dev/urandom",ios::binary);
    random_input.read((char*)&rnd,1);
    result = (unsigned int)((double)((double)rnd/(double)255.0)*48);
    random_input.close();
    return result;
}


