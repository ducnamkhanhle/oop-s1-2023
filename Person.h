#include<string>
using namespace std;

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};


