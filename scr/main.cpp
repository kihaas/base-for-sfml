#include <SFML/Graphics.hpp>
#include "../include/game_logic.h"
#include "../include/ui.h"
#include "../include/graphics.h"
#include "../include/economy.h"

int main() {
    // Инициализация окна SFML
    sf::RenderWindow window(sf::VideoMode(800, 600), "CryptoFarm");
    window.setFramerateLimit(60); // Ограничение FPS для плавности

    // Инициализация игровых систем
    //initGame();  // Инициализация логики игры
    //initUI();    // Инициализация пользовательского интерфейса

    // Игровые часы для управления временем кадров
    sf::Clock clock;
    float deltaTime = 0.0f;

    // Основной игровой цикл
    while (window.isOpen()) {
        deltaTime = clock.restart().asSeconds(); // Время с последнего кадра

        // Обработка событий
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close(); // Закрытие окна
            }



        }

        // Обновление состояния игры
        //updateGame(deltaTime); // Передаём время с последнего кадра
        //updateUI();            // Обновление интерфейса

        // Отрисовка игры
        window.clear(sf::Color::Black); // Очистка экрана
        //renderGame(window);             // Отрисовка фермы и персонажа
        //renderUI(window);               // Отрисовка интерфейса
        window.display();               // Отображение кадра
    }

    return 0;
}

