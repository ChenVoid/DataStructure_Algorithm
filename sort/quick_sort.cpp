#include<iostream>
#include<vector>
using namespace std;


void quickSort(vector<int>& nums, int left, int right) {
	if (left >= right) {
		return;
	}
	int i = left;
	int j = right;
	int flag = nums[left];
	while (i < j) {
		if (i < j && nums[j] >= flag) {
			j--;
		}
		nums[i] = nums[j];
		if (i < j && nums[i] <= flag) {
			i++;
		}
		nums[j] = nums[i];
	}
	nums[i] = flag;
	
	quickSort(nums, left, i - 1);
	quickSort(nums, i + 1, right);

}

int main() {
	vector<int> nums = { 4,3,1,7,8,1 };
	quickSort(nums, 0, nums.size() - 1);
	for (int i = 0; i < nums.size(); i++) {
		printf("%d ", nums[i]);
	}
}

