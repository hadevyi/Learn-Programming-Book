class Circle {
	int radius;
public:
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return radius; }
	bool operator>(Circle op);
};

bool Circle::operator>(Circle op)
{
	if (this->radius > op.radius)
		return true;
	else
		return false;
}