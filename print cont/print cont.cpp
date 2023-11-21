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