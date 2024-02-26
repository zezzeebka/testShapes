#ifndef SHAPE_H
#define SHAPE_H
#pragma once
#include "SFML/Graphics/Color.hpp"
#include "SFML/Graphics/RenderWindow.hpp"
class Shape {
public:
    Shape(int x, int y);
    virtual void draw(sf::RenderWindow& window) const = 0;
    void setColor(const sf::Color& color);
protected:
    int _posX, _posY;
    sf::Color _color;
};


#endif // SHAPE_H
