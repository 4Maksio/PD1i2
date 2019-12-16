#include <vector>
#include <iostream>
#include <algorithm>

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
	int suma = 0;
	auto S = [&](int a)
	{
		suma += a;
	};
	std::for_each(A.begin(),A.end(),S);
	double srednia = suma / 100;

	//	Zad.4
	std::vector<int> B(100);
	auto par = [](int a) {
		return (a%2==0);
	};
	std::copy_if(A.begin(),A.end(),std::back_inserter(B)/*Czy to o to chodziło?*/,par);

	//	Zad.5
	std::vector<int> C(100);
	auto npar = [](int a) {
		return (a % 2 != 0);
	};
	std::copy_if(A.begin(), A.end(), std::back_inserter(C), npar);

	//	Zad.6
	std::sort(A.begin(),A.end());

	//	Zad.7
	std::vector<int> tmp = A;
	auto ToBack = [&](int a)
	{
		A.pop_back();
		A.insert(A.begin(),a);
	};
	std::for_each(tmp.begin(), tmp.end(), ToBack);

	//	Zad.8
	int min=INTMAX_MAX, max=INTMAX_MIN;
	auto Fmin = [&](int a)
	{
		if (a < min)
			min = a;
	};
	std::for_each(C.begin(), C.end(), Fmin);
	auto Fmax = [&](int a)
	{
		if (a > max)
			max = a;
	};
	std::for_each(C.begin(), C.end(), Fmax);
}