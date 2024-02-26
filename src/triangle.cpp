#include "triangle.h"
#include "SFML/Graphics/ConvexShape.hpp"

Triangle::Triangle(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3)
    : Shape(x, y), _dotX1(x1), _dotY1(y1), _dotX2(x2), _dotY2(y2), _dotX3(x3), _dotY3(y3){}

void Triangle::draw(sf::RenderWindow& window) const {
    sf::ConvexShape triangle;
    triangle.setPointCount(3);
    triangle.setPoint(0, sf::Vector2f(_dotX1 + _posX, _dotY1 + _posY));
    triangle.setPoint(1, sf::Vector2f(_dotX2 + _posX, _dotY2 + _posY));
    triangle.setPoint(2, sf::Vector2f(_dotX3 + _posX, _dotY3 + _posY));
    triangle.setFillColor(_color);
    window.draw(triangle);
}
