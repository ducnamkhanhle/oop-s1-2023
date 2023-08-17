#include<iostream>
#include "Person.h"
using namespace std;

extern Person* createPersonArray(int );

int main(){
    ios_base::sync_with_stdio(0);

    Person* person_array;

    int n = 5;

    person_array = createPersonArray(n);

    // for (int i = 0; i < n; i++){
    //     cout << person_array[i].name  << " " << person_array[i].age << endl;
    // }

    delete []person_array;

}