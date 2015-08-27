/*
* Parallel Node
* parallel execute Child Node.
* The specific strategies to Parent Node return value and Parallel Node taken related;
* Parallel Sequence Node: one true then return true,all false then return false.
*/

#ifndef PARALLELSEQUENCE_H
#define PARALLELSEQUENCE_H
#include <vector>
#include "../inc/Parallel.h"
using namespace std;

namespace Lemon_BT_CPlus
{
	class ParallelSequence :public Parallel
	{
		public:
			ParallelSequence();
			~ParallelSequence();
		public:
			Result doAction();

		protected:
			vector<Node*> m_pWaitNodes;

		private:
			bool m_pIsSuccess;
			Result checkResult();
			void reset();

	};
}

#endif // PARALLELSEQUENCE_H
