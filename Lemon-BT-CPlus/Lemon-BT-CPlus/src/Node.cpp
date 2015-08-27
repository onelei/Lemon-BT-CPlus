/*
* Parent Node
* After any Node is executed, it must report the results of its Parent Node: success / failure;
* This simple success / failure reporting principles were very cleverly
* used to control the entire tree of policy direction;
* =>Composite Node
* =>Decorator Node
* =>Condition Node
* =>Action Node
*/

#include "../inc/Node.h"

namespace Lemon_BT_CPlus
{

	Node::Node()
	{
	}

	Node::~Node()
	{
	}

	Result Node::doAction()
	{
		return Result::NONE;
	}
}
