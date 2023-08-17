#include<iostream>
#define ll int
#include "Person.h"
using namespace std;


PersonList createPersonList(int n){
    PersonList List;

    Person* array = new Person[10];

    for (ll i = 0; i < n; i++){
        array[i].name = "Jane Doe";
        array[i].age = n;
    }

    List.people = array;

    List.numPeople = n;


    return List;
}

void changePersonList(PersonList List, int n){

    Person* array = List.people;

    for (ll i = 0; i < n; i++){
        array[i].name = "Jane Doe";
        array[i].age = n;
    }

    List.numPeople = n;

}

PersonList deepCopyPersonList(PersonList pl){
    PersonList List;
    Person* array_new = new Person[10];
    Person* array_old = pl.people;

    for (ll i = 0; i < pl.numPeople; i++){
        array_new[i] = array_old[i];
    }

    List.people = array_new;


    return List;
}
