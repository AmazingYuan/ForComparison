#include "stdafx.h"
#include "SpecialNumber.h"


SpecialNumber::SpecialNumber(const int digit, const int* digitlength) :
digit(digit), 
digitlength (digitlength),
spnum(new int[digit]{})
{}


SpecialNumber::~SpecialNumber()
{
	delete spnum;
}

const bool SpecialNumber::operator++()
{
	spnum[digit-1] = spnum[digit-1] + 1;
	for (int i = (digit - 1); i >= 0; --i)
	{
		if (spnum[i] >= digitlength[i]){
			spnum[i] = 0;
			if (i != 0){
				spnum[i-1] = spnum[i-1] + 1;
			}else{return 0;}
		}else{ return 1;}
	}
	return  0;
}

const int* const SpecialNumber::getSpNum()
{
	return spnum;
}