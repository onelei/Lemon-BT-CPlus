/*
 * test cpp;    
 */

#include "testNode1.h"
#include "testNode2.h"
#include "../inc/Sequence.h"
#include "../inc/Select.h"
#include "../inc/ParallelSelector.h"
#include "../inc/ParallelSequence.h"
#include "../inc/Decorator.h"
#include"../inc/Debug.h"
#include <iostream>
using namespace Lemon_BT_CPlus;

// test Sequence;
void testSequence()
{
	cout << white << "test Sequence=>" << endl;
	Sequence* seq = new Sequence();
	testNode1* test_node_1 = new testNode1();
	testNode2* test_node_2 = new testNode2();
	seq->addChild(test_node_1);
	seq->addChild(test_node_2);
	seq->doAction();
	delete seq;
	delete test_node_1;
	delete test_node_2;
}

// test select node;
void testSelect()
{
	cout <<white<< "test select=>" << endl;
	Select* sele = new Select();
	testNode1* test_node_1 = new testNode1();
	testNode2* test_node_2 = new testNode2();
	sele->addChild(test_node_1);
	sele->addChild(test_node_2);
	sele->doAction();
	delete sele;
	delete test_node_1;
	delete test_node_2;
}

// test ParallelSelector;
void testParallelSelector()
{
	cout << white << "test ParallelSelector=>" << endl;
	ParallelSelector* pasel = new ParallelSelector();
	testNode1* test_node_1 = new testNode1();
	testNode2* test_node_2 = new testNode2();
	pasel->addChild(test_node_1);
	pasel->addChild(test_node_2);
	pasel->doAction();
	delete pasel;
	delete test_node_1;
	delete test_node_2;
}

// test ParallelSequence;
void testParallelSequence()
{
	cout << white << "test ParallelSequence=>" << endl;
	ParallelSequence* paseq = new ParallelSequence();
	testNode1* test_node_1 = new testNode1();
	testNode2* test_node_2 = new testNode2();
	paseq->addChild(test_node_1);
	paseq->addChild(test_node_2);
	paseq->doAction();
	delete paseq;
	delete test_node_1;
	delete test_node_2;
}

// test Decorator;
void testDecorator()
{
	cout << white << "test Decorator=>" << endl;
	Decorator* deco = new Decorator();
	testNode1* test_node_1 = new testNode1();
	testNode2* test_node_2 = new testNode2();
	deco->doAction();

	delete deco;
	delete test_node_1;
	delete test_node_2;
}

int main()
{
	// test Sequence;
	testSequence();

	// test Select;
	testSelect();

	// test ParallelSelector;
	testParallelSelector();

	// test ParallelSequence;
	testParallelSequence();

	// test Decorator;
	testDecorator();

	getchar();
	return 0;
}


