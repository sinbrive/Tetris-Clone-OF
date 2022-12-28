#include "ofMain.h"
#include "ofApp.h"


//========================================================================
int main() {

	ofGLWindowSettings settings;
	settings.setSize(200+100, 400);
	settings.windowMode = OF_WINDOW; 

	auto window = ofCreateWindow(settings);

	ofRunApp(window, make_shared<ofApp>());
	ofRunMainLoop();

}