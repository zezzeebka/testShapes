#ifndef RECTANGLE_H
#define RECTANGLE_H
#pragma once
#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(int x, int y, int verticalSize, int horizontalSize); // Rectangle constructor
    Rectangle(int x, int y, int sideSize); // Square constuctor
    void draw(sf::RenderWindow& window) const override;

private:
    int _verticalSize, _horizontalSize;
};

#endif
