#include <iostream>
#include <cassert>


bool isPalindrome(int x) {
	long long palX = 0;
	for (int tmp = x; tmp > 0; tmp /= 10) {
		palX = palX * 10 + (tmp % 10);
	}

	return palX == x;
}



int main(int, char**)
{
	// test 1
	int test1X = 121;
	assert(isPalindrome(test1X));

	// test 2
	int test2X = -121;
	assert(!isPalindrome(test2X));

	// test 3
	int test3X = 10;
	assert(!isPalindrome(test3X));


	std::cout << "ALL SUCCESS!" << std::endl;

	return 0;
}

