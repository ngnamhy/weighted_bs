#include "binary_search.hpp"

int BinarySearch::run(int key) { 
	int l = 0; 
	int r = 1001;
	int ans = 0; 
	while (l + 1 < r) { 
		int m = (l + r) >> 1; 
		if (m >= key) { 
			r = key; 
			ans += 2; 
		}
		else { 
			l = key; 
			ans += 1; 
		}
	}
	return ans; 
}
