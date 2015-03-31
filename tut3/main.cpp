
#include <iostream>
#include <Windows.h>

#include "upDowncounter.h"

using namespace std;

int main()
{
	upDowncounter counting;
	counting.count();

	system("pause");
	return 0;
}