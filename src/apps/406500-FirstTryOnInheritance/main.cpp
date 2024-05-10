#include <iostream>
#include "player.h"

int main()
{

    Player player1("Basketball");
    player1.set_first_name("John");
    player1.set_last_name("Snow");

    std::cout << "player : " << player1 << std::endl;
    std::cout << "typeid(player1).name() : " << typeid(player1).name() << std::endl;

    std::cout << "player1.get_game() : " << player1.get_game() << std::endl;

    Person person = player1;
    std::cout << "typeid(person).name() : " << typeid(person).name() << std::endl;

    // The following will give error.
    // std::cout << "person.get_game() : " << person.get_game() << std::endl;

    return 0;
}