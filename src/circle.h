#ifndef CIRCLE_H
#define CIRCLE_H
#pragma once
#include "shape.h"

class Circle : public Shape {
public:
    Circle(int x, int y, int radius);
    void draw(sf::RenderWindow& window) const override;

private:
    int _radius;
};

#endif // CIRCLE_H
