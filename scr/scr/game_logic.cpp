//#include "game_logic.h"
//#include "economy.h"
//#include "graphics.h"
#include <SFML/Graphics.hpp>
#include <vector>

// Структура для хранения данных о растении
struct Plant {
    float growth; // Уровень роста (от 0 до 1)
    bool isWatered; // Полито ли растение
};

// Глобальные переменные (для упрощения примера)
std::vector<Plant> plants; // Список растений на ферме
float playerBalance = 100.0f; // Баланс игрока в FarmCoin
int bedCount = 1; // Количество грядок

// Инициализация игры
void initGame() {
    // Начальное состояние фермы
    plants.clear();
    for (int i = 0; i < bedCount; ++i) {
        plants.push_back({0.0f, false}); // Добавляем пустые грядки
    }
    playerBalance = 100.0f; // Начальный баланс
}

// Обновление состояния игры
/*void updateGame(float deltaTime) {
    // Обновляем рост растений
    for (auto& plant : plants) {
        if (plant.isWatered) {
            // Рост растения зависит от курса FarmCoin
            plant.growth += 0.1f * deltaTime * getFarmCoinRate();
            if (plant.growth > 1.0f) {
                plant.growth = 1.0f; // Максимальный рост
            }
        }
    }

    // Обработка действий игрока (пример)
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::P)) {
        // Полив растений
        for (auto& plant : plants) {
            plant.isWatered = true;
        }
    }

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        // Продажа урожая
        float totalHarvest = 0.0f;
        for (auto& plant : plants) {
            if (plant.growth >= 1.0f) {
                totalHarvest += 10.0f; // Каждое растение даёт 10 FarmCoin
                plant.growth = 0.0f; // Сбрасываем рост
                plant.isWatered = false;
            }
        }
        playerBalance += totalHarvest;
        updateFarmCoinRate(-totalHarvest * 0.01f); // Продажа урожая снижает курс
    }
}*/

// Отрисовка фермы, растений и персонажа
void renderGame(sf::RenderWindow& window) {
    // Отрисовка грядок и растений
    for (size_t i = 0; i < plants.size(); ++i) {
        sf::RectangleShape bed(sf::Vector2f(100.0f, 50.0f)); // Грядка
        bed.setPosition(100.0f * i, 400.0f);
        bed.setFillColor(sf::Color(139, 69, 19)); // Коричневый цвет
        window.draw(bed);

        // Отрисовка растения
        if (plants[i].growth > 0.0f) {
            sf::RectangleShape plant(sf::Vector2f(20.0f, -50.0f * plants[i].growth));
            plant.setPosition(100.0f * i + 40.0f, 400.0f - 50.0f * plants[i].growth);
            plant.setFillColor(sf::Color::Green);
            window.draw(plant);
        }
    }

    // Отрисовка персонажа (пример)
    sf::CircleShape player(20.0f);
    player.setPosition(400.0f, 300.0f);
    player.setFillColor(sf::Color::Blue);
    window.draw(player);
}