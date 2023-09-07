#ifndef CAR
#define CAR

#include<iostream>
using namespace std;

class Car{
    protected:
        int _price;
        int _emissions;
    public:
        Car();
        Car(int price);

        void set_price(int price);
        void set_emissions(int emissions);
        int get_price();
        int get_emissions();

        virtual void drive(int kms);

};

#endif