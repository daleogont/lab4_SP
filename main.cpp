#include <iostream>
#include "dice_game.h"
#include <cstdlib>

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    // Запуск гри
    DiceGame::playGame();
    return 0;
}