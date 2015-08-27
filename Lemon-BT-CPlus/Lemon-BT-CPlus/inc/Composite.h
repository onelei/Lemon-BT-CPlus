/*
* Composite Node
* In fact, according to the composite nature of it can also be subdivided into three kinds;
* =>Selector Node:one true then true,all false then false;
* =>Sequence Node:one false then false,all true then true;
* =>Parallel Node:parallel execution;
*/

#ifndef COMPOSITE_H
#define COMPOSITE_H
#include <vector>
#include "../inc/Node.h"
using namespace std;

namespace Lemon_BT_CPlus
{
	class Composite:public Node
	{
	public:
		Composite();
		~Composite();
		void addChild(Node* node);
	public:
		vector<Node*> children;
	private:

	};
}

#endif // COMPOSITE_H
