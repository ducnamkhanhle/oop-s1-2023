#include<iostream>
#include "workshop.h"
using namespace std;

int main(){
    double db = 5.6;
    char c = 'k';

    double* ptr_db = &db;
    char* ptr_c = &c;

    cout << *ptr_db << " " << *ptr_c << endl;

    changeValue(ptr_db);
    cout << db << endl;

    double arr[5] = {1, 2, 3, 4 , 5};
    printArray(arr, 5);

    double* dynamic_arr = dynamicArray(5, 6);
    cout << arrayMax(dynamic_arr, 5) << endl;
    delete[] dynamic_arr;

    // delete the allocated memory in heap where the pointer is pointed at
    // double* dynamic_testing = new double[4];
    // for (ll i = 0; i < 5; i++){
    //     dynamic_testing[i] = 5 - i;
    // }

    // for (ll i = 0; i < 5; i++){
    //     cout << dynamic_arr[i] << " ";
    // }
    // cout << endl;

    double* dynamic_arr_M = dynamicArray(5, 7);
    for (ll i = 0; i < 5; i++){
        cout << dynamic_arr_M[i] << " ";
    }
    cout << endl;
    delete[] dynamic_arr_M;

    double* dynamic_arr_Max = dynamicArray(5, 6);
    for (ll i = 0; i < 5; i++){
        cout << dynamic_arr_M[i] << " ";
    }
    cout << endl;
    cout << arrayMax(dynamic_arr, 5) << endl;
    delete[] dynamic_arr_Max;
}