#include <iostream>
#include "Store.h"
#include "StockItem.h"

using namespace std;


int main() {
    Store store(5);

    StockItem m1(5, "apple");
    StockItem m2(4, "banana");
    StockItem m3(2, "grape");
    StockItem m4(1, "candy");
    StockItem m5(9, "pineapple");
    StockItem m6(8, "meat");

    if (store.add_Stock(m1)) {
        cout << "Added product 1 to the store" << endl;
    } else {
        cout << "Could not add product 1 to the store" << endl;
    }
    if (store.add_Stock(m2)) {
        cout << "Added product 2 to the store" << endl;
    } else {
        cout << "Could not add product 2 to the store" << endl;
    }
    if (store.add_Stock(m3)) {
        cout << "Added product 3 to the store" << endl;
    } else {
        cout << "Could not add product 3 to the store" << endl;
    }
    if (store.add_Stock(m4)) {
        cout << "Added product 4 to the store" << endl;
    } else {
        cout << "Could not add product 4 to the store" << endl;
    }
    if (store.add_Stock(m5)) {
        cout << "Added product 5 to the store" << endl;
    } else {
        cout << "Could not add product 5 to the store" << endl;
    }
    if (store.add_Stock(m6)) {
        cout << "Added product 6 to the store" << endl;
    } else {
        cout << "Could not add product 6 to the store" << endl;
    }

    cout << "The store currently has " << store.get_Total_Stock_Count() << " stocks" << endl;

    cout << "The store has " << store.get_Stock_Count(2) << " bananas" << endl;


    StockItem *product = store.get_Stock_List();


    for (int i = 0; i < store.get_Total_Stock_Count(); i++) {
        cout << "The product " << i+1 << " has the code_num of " << product[i].get_item_code() << " and the name of the product is " << product[i].get_description() << endl;
    }

    return 0;
}

