#ifndef WORRIOR
#define WORRIOR
#include "player.h"
#include<string>
using namespace std;

class Warrior : public Player{
    private:
        string weapon;
    public:
        Warrior();
        Warrior(string _name, int _health, int _damage, string _weapon);
        void swingWeapon(Player* opponent);
};

#endif