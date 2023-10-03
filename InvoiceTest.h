#include <iostream>
#include <string>
#include "Invoice.h"
using namespace std;

class InvoiceTest {
public:
    void runTests() {
        testGetDollarOwed();
        testGetInvoiceId();
        testAddServiceCost();
        testConstructor();
        // Add other test methods here
    }

private:
        void testGetDollarOwed(){
        {
            Invoice invoice("Ngoc cute");
            invoice.addServiceCost(612);
            int res = invoice.getDollarsOwed();
            if (res != 612) {
                std::cout << "Test 1 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("Ngoc cute");
            invoice.addServiceCost(1905);
            int res = invoice.getDollarsOwed();
            if (res != 1905) {
                std::cout << "Test 2 failed!" << std::endl;
            }
        }
    }

    void testGetInvoiceId(){
        {
            Invoice invoice("Ngoc cute");
            string res = invoice.getInvoiceId();
            if (res != "Ngoc cute") {
                std::cout << "Test 3 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("Iu Ngoc");
            string res = invoice.getInvoiceId();
            if (res != "Iu Ngoc") {
                std::cout << "Test 4 failed!" << std::endl;
            }
        }
    }

    void testAddServiceCost() {
        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(10);
            if (invoice.getDollarsOwed() != 10) {
                std::cout << "Test 5 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 6 failed!" << std::endl;
            }
        }

            {
            Invoice invoice("ABCD");
            invoice.addServiceCost(1);
            if (invoice.getDollarsOwed() != 1) {
                std::cout << "Test 7 failed!" << std::endl;
            }
        }

        // Add more test cases here
    }

    void testConstructor(){
        {
            Invoice invoice("Ngoc cute");
            if (invoice.getInvoiceId() != "Ngoc cute") {
                std::cout << "Test 8 failed!" << std::endl;
            }
        }

        {
            Invoice invoice("Iu Ngoc");
            if (invoice.getInvoiceId() != "Iu Ngoc") {
                std::cout << "Test 9 failed!" << std::endl;
            }
        }
    }
};
