#pragma once

#include "ofMain.h"
#include "ofxOsc.h"

#define HOST "localhost"
#define PORT 12345

//--------------------------------------------------------
class testApp : public ofBaseApp {

	public:

		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		ofVec3f findPoint(string srt);
	
		ofVec3f points[40000];
	int counter;
	ofTrueTypeFont font;
		ofxOscSender sender;
	
		float           nextLetterTime;
		int             lineCount;
		int             letterCount;
		vector <string> seussLines;	
	


};
