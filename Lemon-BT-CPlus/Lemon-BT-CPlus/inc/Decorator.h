/*
* Decorator node.
*/

#ifndef DECORATOR_H
#define DECORATOR_H
#include "../inc/Node.h"

namespace Lemon_BT_CPlus
{
	class Decorator : public Node
	{
		public:
			Decorator();
			~Decorator();
	public:
			void setChild(Node* node);
		private:
			Node* child;

	};
}

#endif // DECORATOR_H
