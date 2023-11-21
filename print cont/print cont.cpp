#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>

template <typename T>

void Print(const T& c, const std::string& separate) {
	auto iter = c.begin();
	std::cout << *iter;
	iter++;
	while (iter != c.end()) {
		std::cout << separate << *iter;
		iter++;
	}
}			

int main()
{
	std::list<int> L = { 5,50,500,5000,50000 };
	Print(L, " ");
	std::cout << "\n";
	std::vector<int> V = { 1,2,3,4,5 };
	Print(V, " / ");
	std::cout << "\n";
	std::deque<double> Deq = { 1.5, 2.5, 3.5, 4.5 };
	Print(Deq, " '' ");
	std::cout << "\n";
	std::array<int, 5> Arr = { 1, 2, 4, 8, 16 };
	Print(Arr, " _ ");

}