#ifndef WIZARD
#define WIZARD
#include "player.h"
#include<string>
using namespace std;

class Wizard : public Player{
    private:
        int mana;
    public:
        Wizard();
        Wizard(string _name, int _health, int _damage, int mana);
        void castSpell(Player* opponent);
};



#endif