#include "circle.h"
#include "SFML/Graphics/CircleShape.hpp"

Circle::Circle(int x, int y, int radius) : Shape(x, y), _radius(radius) {}

void Circle::draw(sf::RenderWindow& window) const {
    sf::CircleShape circle(_radius);
    circle.setPosition(_posX - _radius, _posY - _radius);
    circle.setFillColor(_color);
    window.draw(circle);
}
