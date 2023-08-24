#include "Store.h"
#include "StockItem.h"
#define ll int
using namespace std;




Store::Store() {
    capacity = 0;
    curr_capacity = 0;
    list_stock = new StockItem[0];
}

Store::Store(int _size) {
    capacity = _size;
    curr_capacity = 0;
    list_stock = new StockItem[capacity];
}

int Store::get_Total_Stock_Count(){
    return curr_capacity;
}

int Store::get_Stock_Count(int item_code){
    int cnt = 0;
    for (ll i = 0; i < curr_capacity; i++){
        if (list_stock[i].get_item_code() == item_code) cnt++; 
    }
    return cnt;
}

StockItem* Store::get_Stock_List(){
    StockItem* p = list_stock;
    return p;
}

bool Store::add_Stock(StockItem new_stock){
    if (curr_capacity < capacity){
        list_stock[curr_capacity] = new_stock;
        curr_capacity++;
        return true;
    }
    else {
        return false;
    }
}

Store::~Store(){
    delete [] list_stock;
}

