/*
* Parallel Node
* parallel execute Child Node.
* The specific strategies to Parent Node return value and Parallel Node taken related;
* Parallel Sequence Node: one true then return true,all false then return false.
*/

#include "../inc/ParallelSequence.h"

namespace Lemon_BT_CPlus
{

	ParallelSequence::ParallelSequence()
	{
		m_pIsSuccess = false;
	}

	ParallelSequence::~ParallelSequence()
	{
	}

	Result ParallelSequence::doAction()
	{
		if (this->children.empty())
		{
			return Result::SUCCESS;
		}

		Result _result = Result::NONE;
		vector<Node*> _waitNodes;
		vector<Node*> _mainNodes;
		_mainNodes = this->m_pWaitNodes.size() > 0 ? this->m_pWaitNodes : this->children;
		for (size_t i = 0, length = _mainNodes.size(); i < length; ++i)
		{
			_result = _mainNodes[i]->doAction();
			switch (_result)
			{
			case Lemon_BT_CPlus::Result::NONE:
				break;
			case Lemon_BT_CPlus::Result::SUCCESS:
				m_pIsSuccess = true;
				break;
			case Lemon_BT_CPlus::Result::FAILURE:
				break;
			case Lemon_BT_CPlus::Result::RUUNING:
				_waitNodes.push_back(_mainNodes[i]);
				break;
			default:
				break;
			}
		}

		// if any node runing, return runing;
		if (_waitNodes.size() > 0)
		{
			this->m_pWaitNodes = _waitNodes;
			return Result::RUUNING;
		}

		// check the result;
		_result = checkResult();
		reset();
		return _result;
	}

	Result ParallelSequence::checkResult()
	{
		return this->m_pIsSuccess ? Result::SUCCESS : Result::FAILURE;
	}

	void ParallelSequence::reset()
	{
		for (vector<Node*>::iterator it = m_pWaitNodes.begin(); it != m_pWaitNodes.end();)
		{
			it = m_pWaitNodes.erase(it);
		}
		this->m_pWaitNodes.clear();
		this->m_pIsSuccess = false;
	}
}
