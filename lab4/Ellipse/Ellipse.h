#ifndef UNTITLED_ELLIPSE_H
#define UNTITLED_ELLIPSE_H
#include <string>

class Ellipse
{
private:
	char* name_;
	int nameLen_;
	float radius1_, radius2_;
	float x_, y_;
	float square_;

public:
	Ellipse();
	Ellipse(char* name);
	Ellipse(std::string name);
	Ellipse(char* name, float x, float y, float radius1 = 0.0, float radius2 = 0.0);
	Ellipse(std::string name, float x, float y, float radius1 = 0.0, float radius2 = 0.0);
	Ellipse(char* name, float x, float y, float radius1, float radius2, float square);
	Ellipse(std::string name, float x, float y, float radius1, float radius2, float square);
	Ellipse(const Ellipse&);
	~Ellipse();

	void setName(std::string);
	std::string getName();
	void printName();

	void setRadiusses(float radius1 = 0.0, float radius2 = 0.0);
	void setRadius1(float);
	void setRadius2(float);
	float getRadius1();
	float getRadius2();
	void printRadiusses();

	float getX();
	void printX();
	void setX(float);
	void incX();

	float getY();
	void printY();
	void setY(float);
	void incY();

	void setCenter(float, float);

	void setSquare(float);
	float getSquare();
	void printSquare();
	void countSquare();

	void printFields();

	bool operator>(const Ellipse&);
	bool operator<(const Ellipse&);
	bool operator==(const Ellipse&);
	bool operator>=(const Ellipse&);
	bool operator<=(const Ellipse&);

	Ellipse& operator++();
	Ellipse operator++(int);

	Ellipse& operator--();
	Ellipse operator--(int);

	operator float();

private:
	bool checkName();               // checks name_ is correct
	bool checkRadiusses();          // checks price_ is correct
	bool checkRadius1();            // checks price_ is correct
	bool checkRadius2();            // checks price_ is correct
	bool checkX();                  // checks price_ is correct
	bool checkY();                  // checks price_ is correct
	bool checkSquare();             // checks price_ is correct
	void checkIntegrity();          // checks everything
};

#endif