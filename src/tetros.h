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
public:
   

    vector<vector <Point>> t_L {
        {
            Point(0, 0),
            Point(0, 1),
            Point(0, 2),
            Point(1, 2)
        },

        {
            Point(2, 0),
            Point(0, 1),
            Point(1, 1),
            Point(2, 1)
        },

        {
            Point(0, 0),
            Point(1, 0),
            Point(1, 1),
            Point(1, 2)
        },

        {
            Point(0, 0),
            Point(1, 0),
            Point(0, 1),
            Point(2, 0)
        }
    };

    vector<vector <Point>>  t_O {
        {
            Point(0, 0),
            Point(1, 0),
            Point(0, 1),
            Point(1, 1)
        },
        {
            Point(0, 0),
            Point(1, 0),
            Point(0, 1),
            Point(1, 1)
        },
        {
            Point(0, 0),
            Point(1, 0),
            Point(0, 1),
            Point(1, 1)
        },
        {
            Point(0, 0),
            Point(1, 0),
            Point(0, 1),
            Point(1, 1)
        }
    };
    
    vector<vector <Point>>   t_I {
            {
                Point(0, 0),
                Point(1, 0),
                Point(2, 0),
                Point(3, 0)
            },
            {
                Point(0, 0),
                Point(0, 1),
                Point(0, 2),
                Point(0, 3),

            },
            {
                Point(0, 0),
                Point(1, 0),
                Point(2, 0),
                Point(3, 0)
            },
            {
                Point(0, 0),
                Point(0, 1),
                Point(0, 2),
                Point(0, 3)

            }
    }; 

    vector<vector <Point>>   t_T {
            {
                Point(0, 0),
                Point(1, 0),
                Point(2, 0),
                Point(1, 1)
            },
            {
                Point(0, 0),
                Point(0, 1),
                Point(1, 1),
                Point(0, 2)
            },
            {
                Point(1, 0),
                Point(0, 1),
                Point(1, 1),
                Point(2, 1)
            },
            {
                Point(0, 1),
                Point(1, 0),
                Point(1, 1),
                Point(1, 2)
            }
    };

    vector<vector <Point>>   t_J {
            {
                Point(1, 0),
                Point(1, 1),
                Point(0, 2),
                Point(1, 2)
            },
            {
                Point(0, 0),
                Point(0, 1),
                Point(1, 1),
                Point(2, 1)
            },
            {
                Point(0, 0),
                Point(1, 0),
                Point(0, 1),
                Point(0, 2)
            },
            {
                Point(0, 0),
                Point(1, 0),
                Point(1, 1),
                Point(1, 2)
            }
    };

    vector<vector <Point>>   t_S {
        {
            Point(1, 0),
            Point(2, 0),
            Point(0, 1),
            Point(1, 1)
        },
        {
            Point(0, 0),
            Point(0, 1),
            Point(1, 1),
            Point(1, 2)
        },
        {
            Point(1, 0),
            Point(2, 0),
            Point(0, 1),
            Point(1, 1)
        },
        {
            Point(0, 0),
            Point(0, 1),
            Point(1, 1),
            Point(1, 2)
        }
    };

    vector<vector <Point>>   t_Z {
        {
            Point(0, 0),
            Point(1, 0),
            Point(1, 1),
            Point(2, 1)
        },
        {
            Point(1, 0),
            Point(0, 1),
            Point(1, 1),
            Point(0, 2)
        },
        {
            Point(0, 0),
            Point(1, 0),
            Point(1, 1),
            Point(2, 1)
        },
        {
            Point(1, 0),
            Point(0, 1),
            Point(1, 1),
            Point(0, 2)
        }
    };

    vector <vector <vector <Point>>> tetrosList{ t_I, t_J, t_L , t_O, t_T, t_S, t_Z };

    vector<Point> pattern;

    Tetros(int type, int rot) {
        pattern = tetrosList[type][rot];
    }


};
