#include "testNode1.h"
#include "../inc/Debug.h"
#include <iostream>

Result testNode1::doAction()
{
	cout << red << "test node 1" << endl;
	return Result::FAILURE;
}