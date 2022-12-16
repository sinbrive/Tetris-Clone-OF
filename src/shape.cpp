#include "shape.h"

//--------------
Shape::Shape(float xx, float yy) {

    x = xx;
    y = yy;
    index = ofRandom(6);
    col = colrs[index];

    t = Tetros(index);

    pattern = t.pattern;

    rotationTick = ofGetElapsedTimeMillis();
}

//--------------
float Shape::getXoffset() {
    return x;
}

//--------------
float Shape::getYoffset() {
    return y;
}

//--------------
void Shape::setXoffset(float xx) {
    x = xx;
}

//--------------
void Shape::setYoffset(float yy) {
    y = yy;
}

//--------------
void Shape::rotate(uint8_t rot) {

    if ((ofGetElapsedTimeMillis() - rotationTick) < 300) return;
    rotationTick = ofGetElapsedTimeMillis();
    
    vector <vector <int>> trans_vec;

    trans_vec.reserve(pattern.size() * pattern[0].size());

    trans_vec.resize(pattern[0].size());
    trans_vec[0].resize(pattern.size());


    // transpose
    for (int i = 0; i < pattern.size(); i++) {
        for (int j = 0; j < pattern[i].size(); j++) {
            trans_vec[j].resize(pattern.size());
            trans_vec[j][i] = pattern[i][j];
        }
    }

    // reverse
    reverse(trans_vec.begin(), trans_vec.end());
    vector<vector <int>> temp;
    pattern = temp;
    pattern = trans_vec;
    /*pattern.clear();
    pattern.reserve(trans_vec.size() * trans_vec[0].size());
    pattern.resize(trans_vec[0].size());
    pattern[0].resize(trans_vec.size());
    for (int i = 0; i < trans_vec.size(); i++) {
        for (int j = 0; j < trans_vec[i].size(); j++) {
            pattern[j].resize(trans_vec.size());
            pattern[j][i] = trans_vec[i][j];
        }
    }*/
}


//--------------
void Shape::move(float xx, float yy) {
    x += xx;
    y += yy;
}

//--------------
void Shape::draw() {
    ofFill();
    ofSetColor(col);

    for (int y = 0; y < pattern.size(); y++) {
        for (int x = 0; x < pattern[y].size(); x++) {
            if (pattern[y][x] == 1) {
                ofRect(20 * x + this->x, 20 * y + this->y, 20, 20);
            }
        }
    }
}


//--------------
float Shape::highestY() {
    return (this->y + 20 * (pattern.size() - 1));
}


//--------------
float Shape::getNbX() {
    return pattern[0].size();
}

//--------------
bool Shape::xOutRightSide(float limit) {
    for (int y = 0; y < pattern.size(); y++) {
        if (pattern[y][pattern[0].size() - 1] == 1) {
            float a = 20 * (pattern[0].size() - 1) + this->x;
            if (a > limit) return true;
        }
    }
    return false;
}

//--------------
bool Shape::canMoveDown(vector<Point> wall) {
    for (int i = 0; i < wall.size(); i++) {
        Point ln = wall[i];
        for (int y = 0; y < pattern.size(); y++) {
            for (int x = 0; x < pattern[y].size(); x++) {
                if (pattern[y][x] == 1) {
                    float a = x * 20 + this->x;
                    float b = y * 20 + this->y;
                    if ((a == ln.x) &&
                        (b == ln.y)) return false;
                }
            }
        }
    }
    return true;
}

//--------------
vector<Point> Shape::getRealCoords() {
    vector<Point> ret;
    for (int y = 0; y < pattern.size(); y++) {
        for (int x = 0; x < pattern[0].size(); x++) {
            if (pattern[y][x] == 1) {
                Point p = Point(0, 0);
                p.x = x * 20 + this->x;
                p.y = y * 20 + this->y;
                p.colour = col;
                ret.push_back(p);
            }
        }
    }
    return ret;
}






