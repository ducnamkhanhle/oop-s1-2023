#include "player.h"
#include "warrior.h"
#include <string>
#include<iostream>
using namespace std;

Warrior::Warrior(string _name, int _health, int _damage, string _weapon) : Player(_name, _health, _damage), weapon(_weapon){}
Warrior::Warrior(): Warrior("", 0,0,""){}

void Warrior::swingWeapon(Player* opponent){
    cout << name << " swing their " << weapon << " at " << opponent->getName() << endl;
    Player::attack(opponent, damage);
}
