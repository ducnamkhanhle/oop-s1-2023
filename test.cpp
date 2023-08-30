#include<iostream>
#define ll long long
using namespace std;


class Point{
    protected:
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

        virtual void print() {cout << *x << " " << *y << " ";}
        virtual void setA(int _x, int _y) {*x = _x, *y= _y;}
        virtual ~Point(){
            delete x;
            delete y;
        }
};

class Point3d : public Point {
    private: 
        int* z;
    public:
        Point3d() : Point() {
            z = new int;
            *z = 0;
        }
        void setA(int _x, int _y, int _z) {*x = _x, *y= _y, *z=_z;}
        ~Point3d(){
            delete z;
        }
        void print() {
            Point::print();
            cout << *z << endl;
        }


};

int main(){
    Point3d *a = new Point3d;
    
    a->Point::setA(1, 2);
    a->print();
}