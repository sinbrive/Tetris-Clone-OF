#pragma once

#include "ofMain.h"
#include "tetros.h"

class Shape
{

private:

    ofColor colrs[7] = { ofColor::lightBlue, ofColor::darkBlue, ofColor::orange, ofColor::yellow, ofColor::green, ofColor::red, ofColor::magenta };

public:
    Shape(float=10, float=10);
    bool xOutRightSide(float);
    float getXoffset();
    float getYoffset();
    void setXoffset(float);
    void setYoffset(float);
    void rotate(uint8_t);
    void move(float, float);
    void draw();
    float maxY();
    float getNbX();
    bool canMoveDown(vector<Point>);
    float highestY();
    vector<Point> getRealCoords();


    float x, y;
    int index;
    vector<Point> pattern;
    ofColor col;

};

