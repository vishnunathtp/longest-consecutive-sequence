#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cassert>

int longestConsecutive(const std::vector<int>& nums) {
    std::unordered_set<int> numSet(nums.begin(), nums.end());
    int longest = 0;

    for (int num : numSet) {
        // Only start counting if num is the beginning of a sequence
        if (numSet.find(num - 1) == numSet.end()) {
            int currentNum = num;
            int currentStreak = 1;

            while (numSet.find(currentNum + 1) != numSet.end()) {
                currentNum += 1;
                currentStreak += 1;
            }

            longest = std::max(longest, currentStreak);
        }
    }

    return longest;
}

int main() {
    std::vector<int> nums = {100, 4, 200, 1, 3, 2};
    std::cout << "Longest sequence length: " << longestConsecutive(nums) << std::endl;
    assert(longestConsecutive(nums) == 4);
    assert(longestConsecutive({0,3,7,2,5,8,4,6,0,1}) == 9);
    assert(longestConsecutive({}) == 0);
    std::cout << "All assertions passed successfully!" << std::endl;
    return 0;
}
