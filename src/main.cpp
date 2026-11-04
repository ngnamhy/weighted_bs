#include <print>

#include "algo/naive.hpp"
#include "algo/binary_search.hpp"

int main() {
	Naive naive{}; 
	BinarySearch binary_search{}; 
	std::println("Naive: {}", naive.run(10)); 
	std::println("Binary Search: {}", binary_search.run(10)); 

	return 0; 
}

