#ifndef STOCKITEM
#define STOCKITEM

#include <string>
using namespace std;

class StockItem {
    private:
        string description;
        int code_num;

    public:
        StockItem(int _code_num, string _description);
        StockItem();
        
        string get_description();
        int get_item_code();
        ~StockItem();
};

#endif
