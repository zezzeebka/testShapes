#pragma once
#include "shape.h"

struct Point{
    int _x, _y;
    Point(int x, int y);
};

class Triangle : public Shape {
public:
    Triangle(int x, int y, Point dot1, Point dot2, Point dot3);
    void draw(sf::RenderWindow& window) const override;

private:
    int _dotX1, _dotY1, _dotX2, _dotY2, _dotX3, _dotY3;
};

