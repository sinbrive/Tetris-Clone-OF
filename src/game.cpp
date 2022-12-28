#include "game.h"
#include "ofApp.h"
// ----------------------------------
void Game::setup() {

    ofRectMode(OF_RECTMODE_CENTER);
    shape = Shape(10, 10);
    nextShape = Shape(ofGetWidth() - 70, 50);
    ofBackground(0);
    chrono = ofGetElapsedTimeMillis();

    rotIndex = 0;
    lines.clear();
    score = 0;
    level = 1;

}

// ----------------------------------
void Game::update() {
    //if (game_over) return;
    makeStepDown();
    if (!shape.canMoveDown(lines) || nextOnFloor()) {
        shape.move(0, -20);
        lockCurrentShape();
        switchToNextShape();
        checkUpdateScore();
        checkGameOver();
    }

}

// ----------------------------------
void Game::draw() {
    displayGrid();
    shape.draw();
    drawLines();
    displaySideBoard();
    displayGameOver();
}

// ----------------------------------
void Game::makeStepDown() {
    if (ofGetElapsedTimeMillis() - chrono > timeLevel) {
        chrono = ofGetElapsedTimeMillis();
        shape.move(0, 20);
    }
}

// ----------------------------------
bool Game::nextOnFloor() {
    return !(shape.highestY() < ofGetHeight());
}

// ----------------------------------
void Game::lockCurrentShape() {
    vector<Point> arr = shape.getRealCoords();
    lines.insert(lines.end(), arr.begin(), arr.end());
}


// ----------------------------------
void Game::switchToNextShape() {
    rotIndex = 0;
    chrono = ofGetElapsedTimeMillis();
    shape = nextShape;
    shape.setXoffset(10);
    shape.setYoffset(10);
    nextShape = Shape(ofGetWidth() - 70, 50);
}

// ----------------------------------
void Game::checkUpdateScore() {

    float row = ofGetHeight() - 10;
    int count;
    do {
        count = 0;
        for (auto it = lines.begin(); it != lines.end();) {
            if (it->y == row) count++;
            if (count == 10) {
                count = 0;
                removeLine(row);
                it = lines.begin();
                score += 20;
                if (score > points_per_level * level) {
                    score = 0;
                    level += 1;
                }
            }
            else it++;
        }
        row -= 20;
    } while (row > 50);

}

// ----------------------------------
void Game::removeLine(float row) {
    // https://stackoverflow.com/a/8628963
    for (auto it = lines.begin(); it != lines.end();) 
    {
        if (it->y == row)
            it = lines.erase(it);
        else
            ++it;
    }

    for (auto it = lines.begin(); it != lines.end();it++)
    {
        if (it->y < row)
            it->y+=20;
    }

}

// ----------------------------------
void Game::checkGameOver() {
    for (const auto& obj : lines) {
        if (obj.y < 60) {
            State::setState(ofApp::gameOver);
            State::getState()->setup();
            return;
        }
    }
}

// ----------------------------------
void Game::displayGrid() {
    ofNoFill();
    for (int j = 10; j < ofGetHeight(); j += 20) {
        for (int i = 10; i < ofGetWidth() - 100; i += 20) {
            ofRect(i, j, 20, 20);
        }
    }
}

// ----------------------------------
void Game::drawLines() {
    for (const auto& ln : lines) {
        ofFill();
        ofSetColor(ln.colour);
        ofRect(ln.x, ln.y, 20, 20);
    }
}

// ----------------------------------
void Game::displaySideBoard() {
    ofFill();
    ofSetHexColor(0x222222);
    ofRect(ofGetWidth() - 50, ofGetHeight() / 2, 100, 400);
    nextShape.draw();
    ofFill();
    ofSetColor(130);
    ofDrawBitmapString("Level " + ofToString(level), ofGetWidth() - 80, ofGetHeight() / 2);
    ofDrawBitmapString("Score " + ofToString(score), ofGetWidth() - 80, ofGetHeight() / 2 + 50);
}

// ----------------------------------
void Game::displayGameOver() {
 /*   if (game_over) {
        ofFill();
        ofSetColor(255, 100, 100);
        ofDrawBitmapString("Game Over", ofGetWidth() - 80, ofGetHeight() / 2 + 150);
    }*/
}

// ----------------------------------
void Game::inputKey(int key) {

    float x, y;

    if (key == OF_KEY_RIGHT) {
        x = shape.getXoffset();
        if (x < ofGetWidth() - 100 - 20 * shape.getNbX()) shape.move(20, 0);
    }

    if (key == OF_KEY_LEFT) {
        x = shape.getXoffset();
        if (x > 20) shape.move(-20, 0);
    }

    if (key == OF_KEY_DOWN) {
        y = shape.getYoffset();
        if (y < ofGetHeight() - 20) shape.move(0, 20);
    }

    if (key == OF_KEY_UP) {
        int save = rotIndex;
        rotIndex++;
        rotIndex = rotIndex % 4;
        // disable rotation to prevent overflow
        shape.rotate(rotIndex);
        if (shape.xOutRightSide(ofGetWidth() - 100)) {
            rotIndex = save;
        }
        shape.rotate(rotIndex);
    }

}




