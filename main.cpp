#include <iostream>


using namespace std;

void printSomething();		//declare the function (function prototype) as the function must follw after main

int main()


{
	printSomething();
	return 0;
}

void printSomething()		//function definition
{
	cout << "Hello from a Function!" << endl;
}