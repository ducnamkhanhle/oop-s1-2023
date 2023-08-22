#include "Orchestra.h"
#include "Musician.h"
#include<iostream>
#define ll int
using namespace std;


// Musician::Musician(): instrument("null"), experience(0) {};

// Musician::Musician(string _instrument, int _experience){
//     instrument = _instrument;
//     experience = _experience;
// }

// string Musician::get_instrument(){
//     return instrument;
// }

// int Musician::get_experience(){
//     return experience;
// }



Orchestra::Orchestra() {
    size = 0;
    curr_size = 0;
    list_musiscian = new Musician[0];
}

Orchestra::Orchestra(int _size) {
    size = _size;
    curr_size = 0;
    list_musiscian = new Musician[size];
}

int Orchestra::get_current_number_of_members(){
    return curr_size;
}

bool Orchestra::has_instrument(string _instrument){
    
    for (ll i = 0; i < size; i++){
        if (list_musiscian[i].get_instrument() == _instrument) return true; 
    }
    return false;
}

Musician* Orchestra::get_members(){
    Musician* p = list_musiscian;
    return p;
}

bool Orchestra::add_musician(Musician new_musician){
    if (curr_size < size){
        list_musiscian[curr_size] = new_musician;
        curr_size++;
        return true;
    }
    else {
        return false;
    }
}

Orchestra::~Orchestra(){
    delete [] list_musiscian;
}

