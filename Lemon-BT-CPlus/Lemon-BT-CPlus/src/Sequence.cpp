/*
* Sequence Node
* When execute this type Node, it performs its own iteration Child Node from begin to end:
* If a Child Node returns false after the execution, that stop the iteration,
* this Node to its Parent Node also returns false;
* Otherwise all Child Node returns true, that this Node to their Parent Node returns true.
*/

#include "../inc/Sequence.h"

namespace Lemon_BT_CPlus
{

	Sequence::Sequence()
	{
		reset();
	}

	Sequence::~Sequence()
	{
	}

	Result Sequence::doAction()
	{
		 if (this->children.empty())
		 {
			 return Result::SUCCESS;
		 }

		 if (this->m_pIndex>=this->children.size())
		 {
			 reset();
		 }

		 Result _result = Result::NONE;
		 for (size_t length = this->children.size(); m_pIndex < length;++m_pIndex)
		 {
			 _result = this->children[m_pIndex]->doAction();
			 if (_result==Result::FAILURE)
			 {
				 reset();
				 return _result;
			 }
			 else if (_result == Result::RUUNING)
			 {
				 return _result;
			 }
			 else
			 {
				 continue;
			 }
		 }

		 reset();
		 return Result::SUCCESS;
	}

	void Sequence::reset()
	{
		m_pIndex = 0;
	}
}
