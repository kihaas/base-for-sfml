//#include "ui.h"
#include "../include/economy.h"
#include <SFML/Graphics.hpp>
#include <iostream>

sf::Font font;
sf::Text balanceText;
sf::Text rateText; //FarmCoin
sf::RectangleShape seedButton; //семяна
sf::RectangleShape bedButton; //грядки
sf::RectangleShape fertilizerButton; //удобрения

void initUI() {
    // Загрузка шрифта
    if (!font.loadFromFile("assets/fonts/arial.ttf")) {
        std::cerr << "Ошибка загрузки шрифта!" << std::endl;
    }
    balanceText.setFont(font);
    balanceText.setCharacterSize(24);
    balanceText.setFillColor(sf::Color::White);
    balanceText.setPosition(10.0f, 10.0f);

    rateText.setFont(font);
    rateText.setCharacterSize(24);
    rateText.setFillColor(sf::Color::White);
    rateText.setPosition(10.0f, 40.0f);

    seedButton.setSize(sf::Vector2f(150.0f, 50.0f));
    seedButton.setPosition(10.0f, 100.0f);

    bedButton.setSize(sf::Vector2f(150.0f, 50.0f));
    bedButton.setPosition(10.0f, 160.0f);
    bedButton.setFillColor(sf::Color::Blue);

    // Настройка кнопки покупки удобрений
    fertilizerButton.setSize(sf::Vector2f(150.0f, 50.0f));
    fertilizerButton.setPosition(10.0f, 220.0f);
    fertilizerButton.setFillColor(sf::Color::Yellow);
}

void updateUI() {
    //balanceText.setString("Баланс: " + std::to_string(static_cast<int>(getPlayerBalance())) + " FC");
    //rateText.setString("Курс: " + std::to_string(static_cast<int>(getFarmCoinRate() * 100)) + "%");

    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
        sf::Vector2i mousePos = sf::Mouse::getPosition();

        if (seedButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
            std::cout << "Куплены семена!" << std::endl;
        }

        if (bedButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
            std::cout << "Куплена грядка!" << std::endl;
        }
        if (fertilizerButton.getGlobalBounds().contains(mousePos.x, mousePos.y)) {
            std::cout << "Куплены удобрения!" << std::endl;
        }
    }
}

void renderUI(sf::RenderWindow& window) {
    window.draw(balanceText);
    window.draw(rateText);

    window.draw(seedButton);
    window.draw(bedButton);
    window.draw(fertilizerButton);
}