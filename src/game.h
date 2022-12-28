#pragma once

#include "State.h"
#include "ofMain.h"
#include "shape.h"
#include "GameOver.h"

class Game : public State {


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
    uint64_t chrono;
    int timeLevel = 1000;
    Shape shape;
    Shape nextShape;

    GameOver over;

    static bool game_over;

 
};

