#pragma once

#include "ofMain.h"
#include "tetros.h"

class Shape
{

private:

    ofColor colrs[7] = { ofColor(255,0,0), ofColor(0,255,0), ofColor(0,0,255), ofColor(255,255,0), ofColor(0,225,255), ofColor(255,0,255),
                                                                                                     ofColor(255,255,255) };

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
    uint8_t index;
    vector<Point> pattern;
    ofColor col;
    Tetros t;

};

