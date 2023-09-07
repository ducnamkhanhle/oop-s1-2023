#ifndef CAR
#define CAR

#include<iostream>
using namespace std;

class Car{
    protected:
        int _price;
        int _emission;
    public:
        Car();
        Car(int price);

        void set_price(int price);
        void set_emission(int emission);
        int get_price();
        int get_emission();

        virtual void drive(int kms);

};

#endif