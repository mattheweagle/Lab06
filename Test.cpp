#include "Test.h"
#include <iostream>
using namespace std;

Test::Test()
{

}
void Test::runTests()
{
  cout << "test\n";
  cout << "Test 1: size of list after contructor called is zero: ";
  this->testConstructor();
  cout << "Test 2: isEmpty returns true for empty list: ";
  this->testIsEmpty();
  cout << "Test 3: size returns correct value after 1 addFront: ";
  this->testAddFrontSize();
  cout << "Test 4: size returns correct value after 1 addBack: ";
  this->testAddBackSize();
  cout << "Test 5: isEmpty returns false for non empty list: ";
  this->testIsNotEmpty();
  cout << "Test 6: search returns false for value not in list: ";
  this->testSearchValueNotInList();
  cout << "Test 7: search returns true for value added with addFront: ";
  this->testSearchValueAddFront();
  cout << "Test 8: search returns true for value added with addBack: ";
  this->testSearchValueAddBack();
  cout << "Test 9: removeBack returns false for empty list: ";
  this->testRemoveBackEmpty();
  cout << "Test 10: removeFront returns false for empty list: ";
  this->testRemoveFrontEmpty();
  cout << "Test 9: removeBack returns true for non empty list: ";
  this->testRemoveBackNotEmpty();
  cout << "Test 10: removeFront returns true for non empty list: ";
  this->testRemoveFrontNotEmpty();
  cout << "Test 11: removeBack decreases size by 1: ";
  this->testRemoveBackSize();
  cout << "Test 12: removeFront decreases size by 1: ";
  this->testRemoveFrontSize();
  cout << "Test 13: addBack correctly adds values to back of list: ";
  this->testAddBack();
  cout << "Test 14: addFront correctly adds values to front of list: ";
  this->testAddFront();
  cout << "Test 13: removeBack correctly removes value from back of list: ";
  this->testRemoveBack();
  cout << "Test 14: removeFront correctly removes value from front of list: ";
  this->testRemoveFront();
}
void Test::testConstructor()
{
  LinkedListOfInts testableList;
  if(testableList.size() != 0){
    cout << "FAILED\n";
  }
  else
  {
      cout << "PASSED\n";
  }

}
void Test::testIsEmpty()
{
  LinkedListOfInts testableList;
  if(testableList.isEmpty()){
    cout << "Passed\n";
  }
  else
  {
      cout << "FAILED\n";
  }

}
void Test::testAddFrontSize()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  if(testableList.size() != 1){
    cout << "FAILED\n";
  }
  else
  {
      cout << "PASSED\n";
  }

}
void Test::testAddBackSize()
{
  LinkedListOfInts testableList;
  testableList.addBack(1);
  if(testableList.size() != 1){
    cout << "FAILED\n";
  }
  else
  {
      cout << "PASSED\n";
  }

}
void Test::testIsNotEmpty()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  if(!testableList.isEmpty()){
    cout << "PASSED\n";
  }
  else
  {
      cout << "FAILED\n";
  }

}
void Test::testSearchValueNotInList()
{
  LinkedListOfInts testableList;
  if(testableList.search(1)){
    cout << "FAILED\n";
  }
  else{
    cout << "PASSED\n";
  }
}
void Test::testSearchValueAddFront()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  if(testableList.search(1)){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testSearchValueAddBack()
{
  LinkedListOfInts testableList;
  testableList.addBack(1);
  if(testableList.search(1)){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testRemoveBackEmpty()
{
  LinkedListOfInts testableList;
  if(!testableList.removeBack()){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testRemoveFrontEmpty()
{
  LinkedListOfInts testableList;
  if(!testableList.removeFront()){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testRemoveBackNotEmpty()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  if(testableList.removeBack()){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testRemoveFrontNotEmpty()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  if(testableList.removeFront()){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testRemoveBackSize()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  testableList.removeBack();
  if(testableList.size() == 0){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testRemoveFrontSize()
{
  LinkedListOfInts testableList;
  testableList.addFront(1);
  testableList.removeFront();
  if(testableList.size() == 0){
    cout << "PASSED\n";
  }
  else{
    cout << "FAILED\n";
  }
}
void Test::testAddFront()
{
  LinkedListOfInts testableList;
  for(int i = 0; i < 10; i++){
	testableList.addFront(i);
  }
  if(testableList.toVector()[0] != 9){
    cout << "FAILED\n";
  }
  else
  {
      cout << "PASSED\n";
  }

}
void Test::testAddBack()
{
  LinkedListOfInts testableList;
  for(int i = 0; i < 10; i++){
	testableList.addBack(i);
  }
  if(testableList.toVector()[9] != 9){
    cout << "FAILED\n";
  }
  else
  {
      cout << "PASSED\n";
  }

}
void Test::testRemoveFront()
{
  LinkedListOfInts testableList;
  for(int i = 0; i < 10; i++){
	testableList.addFront(i);
  }
  testableList.removeFront();
  if(testableList.toVector().size() != 9){
    cout << "FAILED\n";
  }
  else
  {
      cout << "PASSED\n";
  }

}
void Test::testRemoveBack()
{
  LinkedListOfInts testableList;
  for(int i = 0; i < 10; i++){
	testableList.addFront(i);
  }
  testableList.removeBack();
  if(testableList.toVector().size() != 9){
    cout << "FAILED\n";
  }
  else
  {
      cout << "PASSED\n";
  }

}