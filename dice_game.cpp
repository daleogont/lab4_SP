#include "dice_game.h"
#include <iostream>

int DiceGame::rollDice() {
    return rand() % 6 + 1; // Генерація випадкового значення кубика
}

void DiceGame::playGame() {
    // Генерація випадкового значення для your_dice та computer_dice
    int your_dice = rollDice();
    int computer_dice = rollDice();
    // Вывід результатів
    std::cout << "Your dice: " << your_dice << std::endl;
    std::cout << "Computer dice: " << computer_dice << std::endl;
    // Зрівнюємо значення двох кубиків та виводим остаточний результат
    if (your_dice == computer_dice) {
        std::cout << "It's a draw!" << std::endl;
    } else if (your_dice > computer_dice) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "You lose!" << std::endl;
    }
}