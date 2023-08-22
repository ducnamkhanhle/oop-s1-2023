#include "Musician.h"
using namespace std;

Musician::Musician(): instrument("null"), experience(0) {};

Musician::Musician(string _instrument, int _experience){
    instrument = _instrument;
    experience = _experience;
}

string Musician::get_instrument(){
    return instrument;
}

int Musician::get_experience(){
    return experience;
}
