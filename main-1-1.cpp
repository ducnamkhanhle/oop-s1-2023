#include<iostream>
#include "StockItem.h"

using namespace std;

int main(){
    StockItem a(1, "Hello");

    cout << a.get_item_code() << " " << a.get_description() << endl;

    StockItem b;
    cout << b.get_item_code() << " " << b.get_description() << endl;
}