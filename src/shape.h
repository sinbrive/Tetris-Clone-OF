#pragma once

#include "ofMain.h"
#include "tetros.h"

class Shape
{

private:

    ofColor colrs[7] = { ofColor::blue, ofColor::yellow, ofColor::cyan, 
                        ofColor::purple, ofColor::orange, ofColor::green, ofColor::red };

public:
    Shape(float=10, float=10);
    bool xOutRightSide(vector<vector <int>>,float);
    float getXoffset();
    float getYoffset();
    void setXoffset(float);
    void setYoffset(float);
    void rotate(float);
    void move(float, float);
    void draw();
    float getNbX();
    bool canMoveDown(vector<Point>);
    float highestY();
    vector<Point> getRealCoords();

    enum patternType { I = 0, J, L, O, S, T, Z };
    float x, y;
    uint8_t index;
    vector<vector <int>> pattern;
    ofColor col;
    uint64_t rotationTick;
    Tetros t;

};

