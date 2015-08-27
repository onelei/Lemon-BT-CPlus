/*
* Composite Node
* In fact, according to the composite nature of it can also be subdivided into three kinds;
* =>Selector Node:one true then true,all false then false;
* =>Sequence Node:one false then false,all true then true;
* =>Parallel Node:parallel execution;
*/

#include "../inc/Composite.h"

namespace Lemon_BT_CPlus
{

	Composite::Composite()
	{
	}

	Composite::~Composite()
	{
		for (vector<Node*>::iterator it = children.begin(); it != children.end();)
		{
			it = children.erase(it);
		}
		this->children.clear();		
	}

	void Composite::addChild(Node*node)
	{
		this->children.push_back(node);
	}
}
