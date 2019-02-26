#ifndef PPoint_H_
#define PPoint_H_
#include "Model/Rectange.h"

class PPoint {
private:
	int x;
	int y;

public:
	PPoint(int x, int y);
	PPoint(int x, int y, int width, int height);
	PPoint(PRectangle* rectangle);
	int getX();
	int getY();
	PPoint* multiply(int size);
};
#endif /* PPoint_H_ */