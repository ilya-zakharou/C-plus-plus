#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> nums = { 1,2,3,4,5 };
	std::erase(nums,(<3));
	for (int n : nums) std::cout << n << " ";
}