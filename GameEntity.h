#ifndef GAMEENTITY
#define GAMEENTITY

#include <tuple>

using namespace std;

class GameEntity{
    protected:
        tuple<int,int> position;
        char _type;
    public:
        GameEntity(int x, int y, char type): _type(type){
            position = make_tuple(x, y);
        }
        tuple<int, int> getPos(){
            return position;
        }
        char getType(){
            return _type;
        }
        void setPos(int x, int y){
            get<0>(position) = x;
            get<1>(position) = y;
        }
        void setType(char type){
            _type = type;
        }
        virtual void x(){}
};

#endif