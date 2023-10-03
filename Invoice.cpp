#include "Invoice.h"
#include <string>
using namespace std;


Invoice::Invoice(string invoiceId) : _invoiceId(invoiceId), _dollarOwed(0) {}

void Invoice::addServiceCost(int costDollars){
    if (costDollars > 0) _dollarOwed += costDollars;
}

string Invoice::getInvoiceId(){
    return _invoiceId;
}

int Invoice::getDollarsOwed(){
    return _dollarOwed;
}

