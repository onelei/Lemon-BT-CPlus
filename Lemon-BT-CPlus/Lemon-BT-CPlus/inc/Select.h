/*
* Selector Node
* When execute this type Node, it performs its own iteration Child Node from begin to end:
* If a Child Node returns True after the execution, that stop the iteration,
* This Node to its Parent Node also returns True; 
* Otherwise all Child Node returns False, that this Node to their Parent Node returns False.
*/

#ifndef SELECT_H
#define SELECT_H
#include <vector>
#include "../inc/Composite.h"
using namespace std;

namespace Lemon_BT_CPlus
{
	class Select:public Composite
	{
		public:
			Select();
			~Select();
	public:
			Result doAction();
		private:
			size_t m_pIndex;
			void reset();
	};
}

#endif // SELECT_H
