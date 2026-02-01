#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

      
        unordered_map<int, int> indexMap;

    
        for (int currentIndex = 0; currentIndex < nums.size(); currentIndex++) {

            int currentNumber = nums[currentIndex];

   
            int neededNumber = target - currentNumber;

            if (indexMap.find(neededNumber) != indexMap.end()) {
       
                return { indexMap[neededNumber], currentIndex };
            }

     
            indexMap[currentNumber] = currentIndex;
        }

   
        return {};
    }
};