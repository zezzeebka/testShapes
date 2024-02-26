#include "shape.h"

Shape::Shape(int x, int y) : _posX(x), _posY(y) {}

void Shape::setColor(const sf::Color& color) {
    _color = color;
}
