#include "rectangle.h"
#include "triangle.h"
#include "circle.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include <cmath>
#include <memory>
#include "square.h"
int main() {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Shapes");

    std::vector<std::unique_ptr<Shape>> shapes;

    shapes.push_back(std::make_unique<Circle>(100, 100, 50));
    shapes.push_back(std::make_unique<Square>(300, 100, 100));
    shapes.push_back(std::make_unique<Rectangle>(500, 100, 100, 150));
    shapes.push_back(std::make_unique<Triangle>(200, 300, Point(500, 100), Point(600, 200), Point(400, 200)));

    for(auto& it: shapes)
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

    return 0;
}
