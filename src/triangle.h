#ifndef TRIANGLE_H
#define TRIANGLE_H
#pragma once
#include "shape.h"

class Triangle : public Shape {
public:
    Triangle(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3);
    void draw(sf::RenderWindow& window) const override;

private:
    float _dotX1, _dotY1, _dotX2, _dotY2, _dotX3, _dotY3;
};
#endif // TRIANGLE_H
