#include "testNode2.h"
#include "../inc/Debug.h"
#include <iostream>

Result testNode2::doAction()
{
	cout << green << "test node 2" << endl;
	return Result::SUCCESS;
}