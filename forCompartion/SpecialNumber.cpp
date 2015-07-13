#include "stdafx.h"
#include "SpecialNumber.h"


SpecialNumber::SpecialNumber(const int digit, const int* digitlength) :
digit(digit), 
digitlength (digitlength),
spnum(new int[digit]{})
{}


SpecialNumber::~SpecialNumber()
{
	delete this->spnum;
}

const bool SpecialNumber::operator++()
{
	this->spnum[this->digit-1] = this->spnum[this->digit-1] + 1;
	for (int i = (this->digit - 1); i >= 0; --i)
	{
		if (this->spnum[i] >= this->digitlength[i]){
			this->spnum[i] = 0;
			if (i != 0){
				this->spnum[i-1] = this->spnum[i-1] + 1;
			}else{return 0;}
		}else{ return 1;}
	}
	return  0;
}

const int* const SpecialNumber::getSpNum()
{
	return spnum;
}