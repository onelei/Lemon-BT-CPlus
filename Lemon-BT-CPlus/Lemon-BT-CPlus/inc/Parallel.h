/*
* Parallel Node
* parallel execute Child Node.
* The specific strategies to Parent Node return value and Parallel Node taken related;
* Parallel Selector Node: one false then return false,all true then return true.
* Parallel Sequence Node: one true then return true,all false then return false.
* Parallel Hybird Node: the number of Child Node return true or false results before deciding;
* Parallel Node: it provides concurrent and improve performance;
* Not like the Selector / Sequence as anticipation which should put the former Child Node, which should be put back;
* Common situation is;
* (1)used for parallel multi trees subtree.
* (2)add subtree under Parallel Node, and add a plurality Condition Node;
* To provide real-time and performance;
* Parallel Node increase the performance and convenience,
* but also increase the complexity of the implementation and maintenance;
*/

#ifndef PARALLEL_H
#define PARALLEL_H
#include <vector>
#include "../inc/Composite.h"
using namespace std;

namespace Lemon_BT_CPlus
{
	class Parallel :public Composite
	{
		public:
			Parallel();
			~Parallel();

		private:

	};
}

#endif // PARALLEL_H
