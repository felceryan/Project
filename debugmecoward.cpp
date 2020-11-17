#include <iostream>

struct stinky{
    double health;
    int damage;
};

int main(){
    int loop;
    stinky _player;
    _player.damage = 30; _player.health = 24.55;
    while(std::cin >> loop){}

    return 0;
}