/*
* Action Node
* complete a ,or one step behavior£¬decide the return value;
* leaf node;
*/

#ifndef ACTION_H
#define ACTION_H
#include <vector>
#include "../inc/Node.h"
using namespace std;

namespace Lemon_BT_CPlus
{
	class Action : public Node
	{
		public:
			Action();
			~Action();
	};
}

#endif // ACTION_H
