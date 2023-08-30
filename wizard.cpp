#include "player.h"
#include "wizard.h"
#include <string>
#include<iostream>
using namespace std;

Wizard::Wizard(string _name, int _health, int _damage, int _mana): Player(_name, _health, _damage), mana(_mana) {}
Wizard::Wizard(): Wizard("", 0,0,0){}

void Wizard::castSpell(Player* opponent){
    cout << this->name << " casts a spell on " << opponent->getName() << " for " << this->damage << " damage" << endl;
    Player::attack(opponent, this->mana);
}

