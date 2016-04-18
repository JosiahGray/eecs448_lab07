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

//main
int main()
{
  cout << "\n\n";

  test0();

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
