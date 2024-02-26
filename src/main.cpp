#pragma once
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>


int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Shapes");

    std::vector<Shape*> shapes;

    shapes.push_back(new Circle(100, 100, 50));
    shapes.push_back(new Rectangle(300, 100, 100));
    shapes.push_back(new Triangle(200, 300, 500, 100, 600, 200, 400, 200));

    for(Shape* it: shapes)
    {
        it->setColor(sf::Color::Red);
    }

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();

        for (const auto& shape : shapes) {
            shape->draw(window);
        }

        window.display();
    }

    // Очистка памяти
    for (auto* shape : shapes) {
        delete shape;
    }

    return 0;
}
