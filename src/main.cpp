#include <print>
#include <ranges>

#include "algo/naive.hpp"
#include "algo/binary_search.hpp"
#include "algo/third_search.hpp"

int main() {
	Naive naive{}; 
	BinarySearch binary_search{}; 
	ThirdSearch third_search{}; 

	for (int i : std::ranges::iota_view(1, 101)) { 
		std::println("==="); 
		std::println("Key: {}", i); 
		std::println("Naive: {}", naive.run(i)); 
		std::println("Binary Search: {}", binary_search.run(i)); 
		std::println("Third Search: {}", third_search.run(i)); 
		std::println("==="); 
	}

	return 0; 
}

