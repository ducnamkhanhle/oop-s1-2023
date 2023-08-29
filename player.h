#ifndef PLAYER
#define PLAYER
#include<string>
using namespace std;

class Player{
    protected:
        string name;
        int health;
        int damage;
    public:
        Player();
        Player(string _name, int _health, int _damage);
        void attack(Player* opponent, int _damage);
        void takeDamage(int _damage);
        void setHealth (int _health) {this->health = _health;};
        int getDamage() {return this->damage;};
        int getHealth() {return this->health;};
        string getName() {return this->name;};
};




#endif