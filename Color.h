#pragma once
#include <iomanip>
#include <string>
using namespace std;

class Color
{
public:
	string colorName;
	int colorVal;
	unsigned char blue;
	unsigned char green;
	unsigned char red;
	string cToHex(unsigned char color) const;

	void SetValue(int value);
	void setName(const char* name);

	unsigned char GetR() const;
	unsigned char GetG() const;
	unsigned char GetB() const;
	string GetHexValue() const;
	string GetName() const;

	
};

