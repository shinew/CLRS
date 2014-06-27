#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;

void insertion_sort(int nums[], int len) {
	for(int i = 1; i < len; i++) {
		int j = i-1;
		int key = nums[i];
		while(j >= 0 && key < nums[j]) {
			nums[j+1] = nums[j];
			j--;
		}
		nums[j+1] = key;
	}
	return;
}

bool insertion_sort_test() {
	int len = 6;
	int a[] = {5, 2, 4, 6, 1, 3};
	int b[] = {1, 2, 3, 4, 5, 6};
	insertion_sort(a, len);
	for(int i = 0; i < len; i++) {
		if (a[i] != b[i]) {
			return false;
		}
	}
	return true;
}

int main() {
	if (insertion_sort_test()) {
		printf("Success!");
	} else {
		printf("Failed.");
	}
	return 0;
}
