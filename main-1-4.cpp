#include<iostream>
#include "Person.h"
using namespace std;

extern PersonList createPersonList(int );
extern void changePersonList(PersonList, int );
extern PersonList shallowCopyPersonList(PersonList );

int main(){
    ios_base::sync_with_stdio(0);

    PersonList List_a, List_b;

    int n = 5;
    
    List_a = createPersonList(n);

    List_b = shallowCopyPersonList(List_a);

    Person* arr;

    arr = List_b.people;

    for (int i = 0; i < n; i++){
        cout << arr[i].name  << " " << arr[i].age << endl;
    }

    cout << "---------" << endl;

    changePersonList(List_a, n - 1);

    arr = List_b.people;
    for (int i = 0; i < n; i++){
        cout << arr[i].name  << " " << arr[i].age << endl;
    }
    
}