#include <cstdio>
#include <time.h>
#include <algorithm>
#include <vector>
#include <iostream>

void none()
{
	int i = 0;
	auto generator = [&]() {
		return i++;
	};
	std::cout << i;
	std::cout << generator();
	std::cout << i;
}

int main()
{
	std::vector<int> A(100);
	auto rnd = [&]()
	{
		return rand()%100;
	};
	std::generate(A.begin(),A.end(),rnd);
}
