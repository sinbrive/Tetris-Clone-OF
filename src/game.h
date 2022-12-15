#pragma once

#include "ofMain.h"
#include "shape.h"

class Game {


public:

    void setup();
    void draw();
    void update();
    void makeStepDown();
    bool nextOnFloor();
    void lockCurrentShape();
    void switchToNextShape();
    void checkUpdateScore();
    void removeLine(float);
    void checkGameOver();
    void displayGrid();
    void drawLines();
    void displaySideBoard();
    void displayGameOver();
    void inputKey(int);



    int rotIndex = 0;
    vector<Point> lines;
    int score = 0;
    int points_per_level = 100;
    int level = 1;
    bool game_over = false;
    uint64_t chrono;
    int timeLevel = 1000;
    Shape shape=Shape(10,10);
    Shape nextShape=Shape(ofGetWidth()-70,10);
};

