#pragma once
class SpecialNumber
{
private:
	int *spnum;
	const int *digitlength;
	const int digit;
public:
	const bool operator++();
	SpecialNumber(const int digit, const int* digitlength);
	~SpecialNumber();
	const int* const getSpNum();
};

