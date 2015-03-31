

#include <iostream>
#include <Windows.h>

using namespace std;

#ifndef UPDOWNCOUNTER_H
#define UPDOWNCOUNTER_H

class upDowncounter
{
private:

	int Start, Stop, Up, Down;

public:

	upDowncounter();
	void count();
	void count(int, int, int, int);

};

#endif