#include<iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int );

int main(){
    ios_base::sync_with_stdio(0);

    PersonList List;

    int n = 5;

    List = createPersonList(n);

    // Person* arr = new Person[n];

    // arr = List.people;

    // for (int i = 0; i < n; i++){
    //     cout << arr[i].name  << " " << arr[i].age << endl;
    // }

    
}