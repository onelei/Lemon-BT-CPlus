/*
* Decorator node.
*/

#include "../inc/Decorator.h"

namespace Lemon_BT_CPlus
{

	Decorator::Decorator()
	{
	}

	Decorator::~Decorator()
	{
	}

	void Decorator::setChild(Node*node)
	{
		this->child = node;
	}
}
