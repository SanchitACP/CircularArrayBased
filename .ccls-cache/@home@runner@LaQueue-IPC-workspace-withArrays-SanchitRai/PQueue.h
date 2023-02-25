
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

class PQueue
{
	private:
		void ** arr;
		int len = 26;
		int start, end = 0;

	public:
	PQueue()
	{
		arr = new void * [len];
	}
		
	void push(void *item);

	void* top();

	void pop();

	void display();


};
