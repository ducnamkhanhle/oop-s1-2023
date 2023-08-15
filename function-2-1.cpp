#include<iostream>
#define ll int
using namespace std;

int *readNumbers(){
    ll *a = new int[10];
    for (ll i = 0; i < 10; i++){
        cin >> a[i];
    }
    return a;
}

void hexDigits(int* array,int length){
    if (length <= 0) return ;

    for (ll i = 0; i < length; i++){
        if (array[i] <= 9) {
            cout << i <<  " " << array[i] << " " << array[i] << endl;
            continue;
        }
        switch(array[i]){
            case 10:
                cout << i << " " << array[i] << " A" << endl;
                break;
            case 11:
                cout << i << " " << array[i] << " B" << endl;
                break;
            case 12:
                cout << i << " " << array[i] << " C" << endl;
                break;
            case 13:
                cout << i << " " << array[i] << " D" << endl;
                break;
            case 14:
                cout << i << " " << array[i] << " E" << endl;
                break;
            case 15:
                cout << i << " " << array[i] << " F" << endl;
                break;
        }
    }
}