#include "triangle.h"
#include "SFML/Graphics/ConvexShape.hpp"

Point::Point(int x, int y) : _x(x), _y(y){}

Triangle::Triangle(int x, int y, Point dot1, Point dot2, Point dot3)
    : Shape(x, y), _dotX1(dot1._x), _dotY1(dot1._y), _dotX2(dot2._x), _dotY2(dot2._y), _dotX3(dot3._x), _dotY3(dot3._y){}

void Triangle::draw(sf::RenderWindow& window) const {
    sf::ConvexShape triangle;
    triangle.setPointCount(3);
    triangle.setPoint(0, sf::Vector2f(_dotX1 + _posX, _dotY1 + _posY));
    triangle.setPoint(1, sf::Vector2f(_dotX2 + _posX, _dotY2 + _posY));
    triangle.setPoint(2, sf::Vector2f(_dotX3 + _posX, _dotY3 + _posY));
    triangle.setFillColor(_color);
    window.draw(triangle);
}
