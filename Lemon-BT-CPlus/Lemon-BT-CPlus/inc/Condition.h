/*
* Condition node.
*/

#ifndef CONDITION_H
#define CONDITION_H
#include "../inc/Node.h"
#include "../inc/Result.h"

namespace Lemon_BT_CPlus
{
	class Condition : public Node
	{
		public:
			Condition();
			~Condition();
		public:
			Result doAction();
		private:

	};
}

#endif // CONDITION_H
