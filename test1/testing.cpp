#include<iostream>
#define ll long long
using namespace std;


class Point{
    private:
        int* x;
        int* y;
    public:
        Point() {
            x = new int;
            y = new int;

            *x = 0;
            *y = 0;
        }

        Point(Point& ptr){
            x = new int;
            y = new int;

            *x = 0;
            *y = 0;
        }

        void print() {cout << *x << " " << *y << endl;}
        void setA(int _x, int _y) {*x = _x, *y= _y;}
};

int main(){
    Point a;
    
    a.setA(6,12);

    a.print();

    Point b = a;

    b.setA(10, 10);

    b.print(); 
    a.print();
}