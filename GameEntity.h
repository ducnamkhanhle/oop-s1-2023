#ifndef GAMEENTITY
#define GAMEENTITY

#include <tuple>

using namespace std;

class GameEntity{
    protected:
        tuple<int,int> position;
        char _type;
    public:
        GameEntity(int x, int y, char type);
        tuple<int, int> getPos();
        char getType();
        void setPos(int x, int y);
        void setType(char type);
        virtual void x(){}
};

#endif