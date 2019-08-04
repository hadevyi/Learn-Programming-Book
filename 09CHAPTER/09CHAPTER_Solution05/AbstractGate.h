#pragma once
#ifndef ABSTRACTGATE
#define ABSTRACTGATE
class AbstractGate {
protected:
	bool x, y;
public:
	void set(bool x, bool y) { 
		this->x = x; this->y = y; 
	}
	virtual bool operation() = 0;
};
#endif // !ABSTRACTGATE
