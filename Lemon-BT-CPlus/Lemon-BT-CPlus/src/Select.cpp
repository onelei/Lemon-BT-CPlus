/*
* Selector Node
* When execute this type Node, it performs its own iteration Child Node from begin to end:
* If a Child Node returns True after the execution, that stop the iteration,
* This Node to its Parent Node also returns True;
* Otherwise all Child Node returns False, that this Node to their Parent Node returns False.
*/

#include "../inc/Select.h"

namespace Lemon_BT_CPlus
{

	Select::Select()
	{
		reset();
	}

	Select::~Select()
	{
	}

	Result Select::doAction()
	{
		if (this->children.empty())
		{
			return Result::SUCCESS;
		}

		if (m_pIndex >= this->children.size())
		{
			reset();
		}

		Result _result = Result::NONE;
		for (size_t length = this->children.size(); m_pIndex < length;++m_pIndex)
		{
			_result = this->children[m_pIndex]->doAction();
			if (_result==Result::SUCCESS)
			{
				reset();
				return _result;
			}
			else if (_result==Result::RUUNING)
			{
				return _result;
			}
			else
			{
				continue;
			}
		}
		reset();
		return Result::FAILURE;
	}

	void Select::reset()
	{
		m_pIndex = 0;
	}
}
