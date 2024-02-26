#include "rectangle.h"
#include "SFML/Graphics/RectangleShape.hpp"

Rectangle::Rectangle(int x, int y, int verticalSize, int horizontalSize): Shape(x, y), _verticalSize(verticalSize), _horizontalSize(horizontalSize){}

Rectangle::Rectangle(int x, int y, int sideSize): Shape(x, y), _verticalSize(sideSize), _horizontalSize(sideSize){}

void Rectangle::draw(sf::RenderWindow& window) const {
    sf::RectangleShape rectangle(sf::Vector2f(_verticalSize, _horizontalSize));
    rectangle.setPosition(_posX, _posY);
    rectangle.setFillColor(_color);
    window.draw(rectangle);
}
