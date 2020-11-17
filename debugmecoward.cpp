#include <iostream>

struct stinky{
    double health;
    int damage;
};

int main(){
    int loop;
    stinky _player;
    _player.damage = 30; _player.health = 24.55;
    while(1){
        std::cin >> loop;
        std::cout << _player.health << std::endl;
    }

    return 0;
}