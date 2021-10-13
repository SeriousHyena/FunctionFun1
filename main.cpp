#include <iostream>


using namespace std;

void printSomething();		//declare the function (function prototype) as the function must follw after main
void printMyName();

int main()


{
	printMyName();
	printSomething();
	return 0;
}

void printSomething()		//function definition
{
	cout << "Hello from a Function!" << endl;
}

void printMyName()
{
	cout << "Hello Ernie from a Function!" << endl;
}