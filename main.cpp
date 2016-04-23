/**
*	@file main.cpp
*	@author Josiah Gray
*	@date 4/18/16
*	@brief A file to test the functionality of the LinkedList
*/

#include <iostream>
#include <vector>
#include "LinkedList.h"
#include "Node.h"

using namespace std;

//test function declarations
void test0();
void test1();
void test2();
void test3();

//main
int main()
{
  cout << "\n\n";

  test0();
  test1();
  test2();
  test3();

  return 0;
}

//test0 performs basic tests on a linked list of size 0 (empty list)
void test0()
{
  //starting test
  cout << "*********************************\n";
  cout << "Starting Linked List test: size 0\n";
  cout << "*********************************\n\n";

  //declare linked list
  LinkedList<int> testList;

  //test the initial contents of empty list
  vector<int> displayVector = testList.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";

  //test initial size of empty list
  int size = testList.size();
  cout << "Testing the initial size of the list:\n";
  cout << "\tinitial size should be 0\n";
  cout << "\tinitial size is " << size << "\n";
  if(size == 0)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test initial value of isEmpty of empty list
  bool empty = testList.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return True or 1\n";
  cout << "\tisEmpty returns " << empty << "\n";
  if(empty == true)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test removefront function on an empty list
  cout << "Testing behavior of removeFront on an empty list:\n";
  cout << "\tcalling removeFront\n";
  testList.removeFront();
  displayVector = testList.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";
  size = testList.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 0\n";
  cout << "\tsize is " << size << "\n";
  if(size == 0)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty = testList.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return True or 1\n";
  cout << "\tisEmpty returns " << empty << "\n";
  if(empty == true)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test adding and removing a value to list
  cout << "Testing behavior when a value is added and removed from an empty list:\n";
  cout << "\tadding 5 to the list\n";
  testList.addFront(5);
  cout << "\tremoving front value from the list\n";
  testList.removeFront();
  displayVector = testList.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";
  size = testList.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 0\n";
  cout << "\tsize is " << size << "\n";
  if(size == 0)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty = testList.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return True or 1\n";
  cout << "\tisEmpty returns " << empty << "\n";
  if(empty == true)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
}

//test1 performs basic tests on a linked list of size 1
void test1()
{
  //starting test
  cout << "*********************************\n";
  cout << "Starting Linked List test: size 1\n";
  cout << "*********************************\n\n";

  //declare linked list and test variables
  LinkedList<int> testList;
  vector<int> displayVector = testList.toVector();
  int size = testList.size();
  bool empty = testList.isEmpty();

  //test adding a value to list
  cout << "Testing behavior when a value is added to the list:\n";
  cout << "\tadding 5 to the list\n";
  testList.addFront(5);
  displayVector = testList.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";
  size = testList.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 1\n";
  cout << "\tsize is " << size << "\n";
  if(size == 1)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty = testList.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty << "\n";
  if(empty == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
}

//test2 performs basic tests on a linked list of size 2
void test2()
{
  //starting test
  cout << "*********************************\n";
  cout << "Starting Linked List test: size 2\n";
  cout << "*********************************\n\n";

  //declare linked lists and test variables
  LinkedList<int> testList;
  vector<int> displayVector = testList.toVector();
  int size = testList.size();
  bool empty = testList.isEmpty();

  LinkedList<int> testList2;
  vector<int> displayVector2 = testList2.toVector();
  int size2 = testList2.size();
  bool empty2 = testList2.isEmpty();

  LinkedList<int> testList3;
  vector<int> displayVector3 = testList3.toVector();
  int size3 = testList3.size();
  bool empty3 = testList3.isEmpty();

  LinkedList<int> testList4;
  vector<int> displayVector4 = testList4.toVector();
  int size4 = testList4.size();
  bool empty4 = testList4.isEmpty();

  //test adding 2 values to front of list
  cout << "Testing behavior when 2 values are added to front of the list:\n";
  cout << "\tadding 5 to the list\n";
  cout << "\tadding 6 to the list\n";
  testList.addFront(5);
  testList.addFront(6);
  displayVector = testList.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 6, 5\n";
  if(displayVector[0] == 6 && displayVector[1] == 5)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size = testList.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 2\n";
  cout << "\tsize is " << size << "\n";
  if(size == 2)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty = testList.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty << "\n";
  if(empty == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test adding 2 values to back of list
  cout << "*** Starting test again with new list ***\n\n";
  cout << "Testing behavior when 2 values are added to back of the list:\n";
  cout << "\tadding 5 to the list\n";
  cout << "\tadding 6 to the list\n";
  testList2.addBack(5);
  testList2.addBack(6);
  displayVector2 = testList2.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector2.size(); i++)
  {
    cout << displayVector2[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 5, 6\n";
  if(displayVector2[0] == 5 && displayVector2[1] == 6)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size2 = testList2.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 2\n";
  cout << "\tsize is " << size2 << "\n";
  if(size2 == 2)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty2 = testList2.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty2 << "\n";
  if(empty2 == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test removing values from front of list
  cout << "*** Starting test again with new list ***\n\n";
  cout << "Testing behavior when removing from front of the list:\n";
  cout << "\tadding 7 to the list\n";
  cout << "\tadding 8 to the list\n";
  testList3.addFront(7);
  testList3.addFront(8);
  displayVector3 = testList3.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector3.size(); i++)
  {
    cout << displayVector3[i] << "\n";
  }
  cout << "\n";
  cout << "\tremoving front of the list\n";
  testList3.removeFront();
  displayVector3 = testList3.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector3.size(); i++)
  {
    cout << displayVector3[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 7\n";
  if(displayVector3[0] == 7)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size3 = testList3.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 1\n";
  cout << "\tsize is " << size3 << "\n";
  if(size3 == 1)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty3 = testList3.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty3 << "\n";
  if(empty3 == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test removing values from back of list
  cout << "*** Starting test again with new list ***\n\n";
  cout << "Testing behavior when removing from back of the list:\n";
  cout << "\tadding 9 to the list\n";
  cout << "\tadding 10 to the list\n";
  testList4.addFront(9);
  testList4.addFront(10);
  displayVector4 = testList4.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector4.size(); i++)
  {
    cout << displayVector4[i] << "\n";
  }
  cout << "\n";
  cout << "\tremoving back of the list\n";
  testList4.removeBack();
  displayVector4 = testList4.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector4.size(); i++)
  {
    cout << displayVector4[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 10\n";
  if(displayVector4[0] == 10)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size4 = testList4.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 1\n";
  cout << "\tsize is " << size4 << "\n";
  if(size4 == 1)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty4 = testList4.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty4 << "\n";
  if(empty4 == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
}

//test3 performs basic tests on a linked list of size 3
void test3()
{
  //starting test
  cout << "*********************************\n";
  cout << "Starting Linked List test: size 3\n";
  cout << "*********************************\n\n";

  //declare linked list and test variables
  LinkedList<int> testList;
  vector<int> displayVector = testList.toVector();
  int size = testList.size();
  bool empty = testList.isEmpty();

  LinkedList<int> testList2;
  vector<int> displayVector2 = testList2.toVector();
  int size2 = testList2.size();
  bool empty2 = testList2.isEmpty();

  //test adding 3 values to front of list
  cout << "Testing behavior when 3 values are added to front of the list:\n";
  cout << "\tadding 2 to the list\n";
  cout << "\tadding 3 to the list\n";
  cout << "\tadding 4 to the list\n";
  testList.addFront(2);
  testList.addFront(3);
  testList.addFront(4);
  displayVector = testList.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 4, 3, 2\n";
  if(displayVector[0] == 4 && displayVector[1] == 3 && displayVector[2] == 2)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size = testList.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 3\n";
  cout << "\tsize is " << size << "\n";
  if(size == 3)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty = testList.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty << "\n";
  if(empty == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test removing values from front of list
  //cout << "*** Starting test again with new list ***\n\n";
  cout << "Testing behavior when removing from front of the list:\n";
  cout << "\tremoving front of the list\n";
  testList.removeFront();
  displayVector = testList.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 3, 2\n";
  if(displayVector[0] == 3 && displayVector[1] == 2)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size = testList.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 2\n";
  cout << "\tsize is " << size << "\n";
  if(size == 2)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty = testList.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty << "\n";
  if(empty == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test adding 3 values to back of list
  cout << "*** Starting test again with new list ***\n\n";
  cout << "Testing behavior when 3 values are added to back of the list:\n";
  cout << "\tadding 6 to the list\n";
  cout << "\tadding 7 to the list\n";
  cout << "\tadding 8 to the list\n";
  testList2.addFront(6);
  testList2.addFront(7);
  testList2.addFront(8);
  displayVector2 = testList2.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector2.size(); i++)
  {
    cout << displayVector2[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 6, 7, 8\n";
  if(displayVector2[0] == 6 && displayVector2[1] == 7 && displayVector2[2] == 8)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size2 = testList2.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 3\n";
  cout << "\tsize is " << size2 << "\n";
  if(size2 == 3)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty2 = testList2.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty2 << "\n";
  if(empty2 == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test removing values from back of list
  cout << "Testing behavior when removing from back of the list:\n";
  cout << "\tremoving back of the list\n";
  testList2.removeBack();
  displayVector2 = testList2.toVector();
  cout << "displaying contents of the list:\n";
  for(int i = 0; i < displayVector2.size(); i++)
  {
    cout << displayVector2[i] << "\n";
  }
  cout << "\n";
  cout << "The contents of the list should be: 6, 7\n";
  if(displayVector2[0] == 6 && displayVector2[1] == 7)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  size2 = testList2.size();
  cout << "Testing the size of the list:\n";
  cout << "\tsize should be 2\n";
  cout << "\tsize is " << size2 << "\n";
  if(size2 == 2)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
  empty2 = testList2.isEmpty();
  cout << "Testing behavior of isEmpty function:\n";
  cout << "\tisEmpty should return False or 0\n";
  cout << "\tisEmpty returns " << empty2 << "\n";
  if(empty2 == false)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
}
