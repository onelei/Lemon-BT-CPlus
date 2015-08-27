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

#ifndef NODE_H
#define NODE_H
#include "../inc/Result.h"

namespace Lemon_BT_CPlus
{
	class Node
	{
	public:
		Node();
		~Node();

	public:
		virtual Result doAction();
	private:

	};
}

#endif // NODE_H
