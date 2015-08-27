/*
* Sequence Node
* When execute this type Node, it performs its own iteration Child Node from begin to end:
* If a Child Node returns false after the execution, that stop the iteration,
* this Node to its Parent Node also returns false; 
* Otherwise all Child Node returns true, that this Node to their Parent Node returns true.
*/

#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <vector>
#include "../inc/Composite.h"
using namespace std;

namespace Lemon_BT_CPlus
{
	class Sequence :public Composite
	{
		public:
			Sequence();
			~Sequence();
	public:
			Result doAction();
		private:
			size_t m_pIndex;
			void reset();
	};
}

#endif // SEQUENCE_H
