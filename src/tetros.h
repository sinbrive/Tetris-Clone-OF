#pragma once


class Point {

public:
   
    float x;
    float y;
    ofColor colour;

    Point(float x_, float y_) {
        x = x_;
        y = y_;
        colour = ofColor(0, 0, 0);
    }

};

class Tetros {
    // other solution : array 2*4 following these patterns ->  https://tetris.wiki/Tetris_Guideline
public:
    vector <vector <int>> I{
                               {1, 1, 1, 1}
    };
    vector <vector <int>> J = {
                                { 0, 1 },
                                { 0, 1 },
                                { 1, 1 }
    };
    vector <vector <int>> L = {
                                { 1, 0 },
                                { 1, 0 },
                                { 1, 1 }
    };
    vector <vector <int>> O = {
                               { 1, 1 },
                               { 1, 1 }
    };
    vector <vector <int>> S = {
                               { 0, 1, 1 },
                               { 1, 1, 0 }
    };
    vector <vector <int>> T = {
                               { 1, 1, 1 },
                               { 0, 1, 0 }
    };
    vector <vector <int>> Z = {
                               { 1, 1, 0 },
                               { 0, 1, 1 }
    };

    vector<vector <vector <int>>> patternList = { I, J, L, O, S, T, Z };

    vector <vector <int>> pattern;

    Tetros() = default;
    Tetros(int type) {
        pattern = patternList[type];
    }

};
