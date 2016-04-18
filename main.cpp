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

//test functions
void test0();

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
  cout << "/////////////////////////////////\n";
  cout << "Starting Linked List test: size 0\n";
  cout << "/////////////////////////////////\n\n";

  //declare linked list
  LinkedList<int> testList;

  //test the initial contents of empty list
  vector<int> displayVector = testList.toVector();
  cout << "displaying contents of the linked list:\n";
  for(int i = 0; i < displayVector.size(); i++)
  {
    cout << displayVector[i] << "\n";
  }
  cout << "\n";

  //test initial size of empty list
  int iSize = testList.size();

  cout << "initial size should be 0\n";
  cout << "initial size is: " << testList.size() << "\n";
  if(iSize == 0)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }

  //test initial value of isEmpty of empty list
  bool empty = testList.isEmpty();

  cout << "isEmpty should return True or 1\n";
  cout << "isEmpty returns " << empty << "\n";
  if(empty == true)
  {
    cout << "PASS TEST\n\n";
  }
  else
  {
    cout << "FAIL TEST\n\n";
  }
}
