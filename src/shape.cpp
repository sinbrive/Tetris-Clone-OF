#include "shape.h"

//--------------
Shape::Shape(float xx, float yy) {

    x = xx;
    y = yy;
    index = ofRandom(6);
    col = colrs[index];

    for (size_t i = 0; i < 4; i++) {
        pattern.push_back(t.tetros[index][0][i]);
    }
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
    pattern.clear();
    for (size_t i = 0; i < 4; i++) {
        pattern.push_back(t.tetros[index][rot][i]);
    };
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
    for (const auto& element : pattern) {
        float xx = element.x * 20 + x;
        float yy = element.y * 20 + y;
        ofRect(xx, yy, 20, 20);
    }
}

//--------------
float Shape::maxY() {
    float largest = 0;
    for (const auto& obj : pattern) {
        if (largest < obj.y) {
            largest = obj.y;
        }
    };
    return largest;
}

//--------------
float Shape::highestY() {
    return (y + 20 * maxY());
}


//--------------
float Shape::getNbX() {
    float largest = 0;
    for (const auto& obj : pattern) {
        if (largest < obj.x) {
            largest = obj.x;
        }
    };
    return largest + 1;
}

//--------------
bool Shape::xOutRightSide(float limit) {
    for (auto& obj : pattern) {
        float xx = obj.x * 20 + x;
        if (xx > limit) return true;
    }
    return false;
}

//--------------
bool Shape::canMoveDown(vector<Point> wall) {
    for (const auto& ln : wall) {
        for (const auto& obj : pattern) {
            float a = obj.x * 20 + x;
            float b = obj.y * 20 + y;
            if ((a == ln.x) &&
                (b == ln.y)) return false;
        }
    }
    return true;
}

//--------------
vector<Point> Shape::getRealCoords() {
    vector<Point> ret;
    for (const auto& row : pattern) {
        Point p = Point(0, 0);
        p.x = row.x * 20 + x;
        p.y = row.y * 20 + y;
        p.colour = col;
        ret.push_back(p);
    }
    return ret;
}




