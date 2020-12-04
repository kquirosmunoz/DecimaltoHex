#include "Color.h"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

void Color::SetValue(int value)
{
	this->colorVal = value;
	this->blue = value & 0xFF;
	this->red = value >> 16 & 0xFF;
	this->green = value >> 8 & 0xFF;
}

void Color::setName(const char* name)
{
	this->colorName = name;
}

string Color::GetName() const
{
	return this->colorName;
}

unsigned char Color::GetR() const
{
	return this->red;
}

unsigned char Color::GetG() const
{
	return this->green;
}

unsigned char Color::GetB() const
{
	return this->blue;
}

string Color::GetHexValue() const
{
	string hexString = "0x";
	hexString += cToHex((int)this->red);
	hexString += cToHex((int)this->green);
	hexString += cToHex((int)this->blue);
	return hexString;
}

string Color::cToHex(unsigned char color) const
{
	int i = 0;
	vector<char> hexNum;
	while (color != 0)
	{

		int temp = 0;
		temp = color % 16;

		if (temp < 10)
		{
			hexNum.push_back(temp + 48);
			i++;
		}
		else
		{
			hexNum.push_back(temp + 55);
			i++;
		}

		color = (color / 16);
	}
	for (auto itr : hexNum)
	{
		itr = toupper(itr);
	}

	reverse(hexNum.begin(), hexNum.end());
	string s(hexNum.begin(), hexNum.end());
	return s;
}