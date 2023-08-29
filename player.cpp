#include "player.h"
#include <string>
#include<iostream>
using namespace std;


Player::Player(string _name, int _health, int _damage) : name(_name), health(_health), damage(_damage) {}
Player::Player() : Player("", 0, 0){}

void Player::takeDamage(int _damage){
    this->setHealth(this->health - _damage);

    cout << this->name << " takes " << this->damage << " damage. Remaining health: " << this->health << endl;
}

void Player::attack(Player* opponent, int _damage){
    opponent->takeDamage(_damage);

}