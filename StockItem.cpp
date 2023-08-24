#include"StockItem.h"

using namespace std;

StockItem::StockItem(): description(""), code_num(0) {};

StockItem::StockItem(int _code_num, string _description) {
    code_num = _code_num;
    description = _description; 
}

int StockItem::get_item_code(){
    return code_num;
}

string StockItem::get_description(){
    return description;
}

StockItem::~StockItem(){
    
}