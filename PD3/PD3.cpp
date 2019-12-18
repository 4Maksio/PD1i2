#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

int main()
{

	//	Zad.1
	std::vector<int> A(100);

	//	Zad.2
	auto rnd = []()
	{
		return rand() % 100;
	};
	std::generate(A.begin(), A.end(), rnd);

	//	Zad.3
	int suma = std::accumulate(A.begin(), A.end(), 0);
	double srednia = suma / 100;

	//	Zad.4
	std::vector<int> B(100);
	auto par = [](int a) {
		return (a % 2 == 0);
	};
	std::copy_if(A.begin(), A.end(), std::back_inserter(B), par);

	//	Zad.5
	std::vector<int> C(100);
	auto npar = [](int a) {
		return (a % 2 != 0);
	};
	std::copy_if(A.begin(), A.end(), std::back_inserter(C), npar);

	//	Zad.6
	std::sort(A.begin(), A.end());

	//	Zad.7
	std::vector<int> tmp=A;
	std::copy_backward(tmp.begin(), tmp.end(), tmp.end());

	//	Zad.8
	auto Min = std::min(C.begin(), C.end());
	auto Max = std::max(C.begin(), C.end());
}