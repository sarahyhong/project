// This is my first attempt in this project.

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

int main()
{
	std::cout << "How do we commit a file?" << endl;
	std::cout << "Nice, I am getting used to this a bit." << endl;
	
	std::cout << "Okay, let's start doing some stuff with variables." << endl;
	int x = 0;
	int y = 0;

	x = x + 5; 
	y = y + x;
	
	std::cout << "Okay, that was cool. Now maybe we can use the vector library for something." << endl;
	vector<int> v;
	v.push_back(x);
	v.push_back(y);

	std::cout << "So this is our master branch.";
	std::cout << "Now we can try to do some string concatenation.";

	std::string s = "Hi";
	std::string h = "... How are you?";

	std::string sh = s+h;

	return 0;
}

