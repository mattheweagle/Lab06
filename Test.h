#ifndef TEST_H
#define TEST_H
#include "LinkedListOfInts.h"

class Test
{
public:
	Test();
	void runTests();

private:
	void testConstructor();
	void testIsEmpty();
	void testIsNotEmpty();
	void testAddFrontSize();
	void testAddBackSize();
	void testSearchValueNotInList();
	void testSearchValueAddFront();
	void testSearchValueAddBack();
	void testRemoveBackEmpty();
	void testRemoveFrontEmpty();
	void testRemoveBackNotEmpty();
	void testRemoveFrontNotEmpty();
	void testRemoveBackSize();
	void testRemoveFrontSize();
	void testAddFront();
	void testAddBack();
	void testRemoveFront();
	void testRemoveBack();
};
#endif
