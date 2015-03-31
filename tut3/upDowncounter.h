* /

#include <iostream>
#include <Windows.h>

using namespace std;

#ifndef UPDOWNCOUNTER_H
#define UPDOWNCOUNTER_H

class UpDownCounter
{
private:

	int Start, Stop, Up, Down;

public:

	UpDownCounter();
	void count();
	void count(int, int, int, int);

};

#endif