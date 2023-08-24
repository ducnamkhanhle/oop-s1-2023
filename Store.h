#ifndef STORE
#define STORE

#include <string>
#include "StockItem.h"
using namespace std;

class Store {
    private:
        int capacity;
        int curr_capacity;
        StockItem* list_stock;

    public:
        Store(int _capacity);
        Store();    
        
        int get_Total_Stock_Count(); 
        int get_Stock_Count(int item_code);


        StockItem *get_Stock_List();


        bool add_Stock(StockItem new_stock);

~Store();
};

#endif
