/*
	write a program to demonstrate non-static member initialization also called as in-class member 
	initialization
*/

#include <iostream>
using namespace std;

class Box
{
	private: int length = 0, width = 0;

	public: Box(int l) 
	{
		length = l;
	}

	public: Box(int l, int w)
	{
		length = l;
		width = w;
	}
	
	public: int Area()
	{
		return length*width;
	}
};


int main(int argc, char const *argv[])
{
	Box red; // now this code will give you error

	cout << "Area is: " << red.Area() << endl;

	Box blue(5);

	cout << "Area is: " << blue.Area() << endl;


	Box green(8, 13);

	cout << "Area is: " << green.Area() << endl;

	return 0;
}

/*
	non static member initialization means initializing member variables in class where we declared it

	it's like normal variable initializtion,for example,

					int a = 5;
					double d = 3. 89;
					char ch = ';';


	but remember we still need a constructor to create class object, that's why we should must have a 
	default constructor whenever we are using a user define constructor

	otherwise it will give error

	like this code
*/