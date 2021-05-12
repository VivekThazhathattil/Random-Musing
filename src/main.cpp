#include "include/render.h"

int main(){
	unsigned windowWidth = 600;
	unsigned windowHeight = 600;
	Render r(windowWidth, windowHeight);
	r.runSimulation();
	return 0;
}
