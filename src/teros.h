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
    Point tetros[7][4][4] = {
    {
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
    },

    {
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
    }, {
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
    },
    {
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
    },
    {
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
    },
    {
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
    },
    {
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
    }
    };
};
