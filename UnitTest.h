#include <iostream>
#include "Addition.h"
using namespace std;

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        if (addition.add(1, 2) != 3) {
            cout << "Test 1 failed!" << endl;
        }

        if (addition.add(2, 3) != 5) {
            cout << "Test 2 failed" << endl;
        }
        if (addition.add(-2, -3) != -5) {
            cout << "Test 3 failed" << endl;
        }
        if (addition.add(6, 7) != 13) {
            cout << "Test 4 failed" << endl;
        }
        if (addition.add(19, 5) != 24) {
            cout << "Test 5 failed" << endl;
        }
        // Add more tests here
    }
};