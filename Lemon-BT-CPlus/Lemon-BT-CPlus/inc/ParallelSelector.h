/*
* Parallel Node
* parallel execute Child Node.
* The specific strategies to Parent Node return value and Parallel Node taken related;
* Parallel Selector Node: one false then return false,all true then return true.
*/

#ifndef PARALLELSELECTOR_H
#define PARALLELSELECTOR_H
#include <vector>
#include "../inc/Parallel.h"
using namespace std;

namespace Lemon_BT_CPlus
{
	class ParallelSelector :public Parallel
	{
		public:
			ParallelSelector();
			~ParallelSelector();

		public:
			Result doAction();

		protected:
			vector<Node*> m_pWaitNodes;

		private:
			bool m_pIsFail;
			Result checkResult();
			void reset();
	};
}

#endif // PARALLELSELECTOR_H
