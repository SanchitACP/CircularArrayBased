/*
 * LaQueue
 * 
 * 
 * This is part of a series of labs for the Liberal Arts and Science Academy.
 * The series of labs provides a mockup of an POSIX Operating System
 * referred to as LA(SA)nix or LAnix.
 *  
 * (c) copyright 2018, James Shockey - all rights reserved
 * 
 * */

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include "PQueue.h"

using namespace std;

/*
 * Class Priority Queue
 */

		
/*
* Insert into Priority Queue
*/
void PQueue::push(void *item)
{
	if (((end + 1) % length) == start)
		return;
	
	/* Your code here */
	list[end] = item;
	end = ++end % length;
}

/*
 * Delete from Priority Queue
 */
void* PQueue::top()
{
	if (start == end)
		return NULL;
	
	return list[start];
}
/*
 * Delete from Priority Queue
 */
void PQueue::pop()
{
	if (start == end)
		return;
	
	void * temp = list[start];
	start = ++start % length;
}

/*
 * Print Priority Queue
 */
void PQueue::display()
{

	/* Your code here */
	for (int i = start; i < end; i++)
	{
		cout << list[(i % length)];
	}

}
	
