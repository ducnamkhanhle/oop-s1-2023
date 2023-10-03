#ifndef INVOICE
#define INVOICE

#include<string>
using namespace std;


class Invoice{
    private:
        string _invoiceId;
        int _dollarOwed;
    public:
        Invoice(string invoiceId);
        void addServiceCost(int costDollars);
        int getDollarsOwed();
        string getInvoiceId();

};


#endif 