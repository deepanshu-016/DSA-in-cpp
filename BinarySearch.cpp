/* C++ program to search for a particular element in a sorted array using Binary Search*/

#include <iostream>
using namespace std;

//Function to search for a particular element in a sorted array
int binarySearch(int arr[], int start, int end, int target)
{
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		//To check if element in the middle is equal to the target element
		if (arr[mid] == target)
			return mid;

		//If target element is greater than the middle element, ignore the left half
		else if (arr[mid] < target)
			start = mid + 1;

		//If target element is less than the middle element, ignore the right half
		else
			end = mid - 1;
	}

	//If target element not found in the array
	return -1;
}

//Main function
int main()
{
	//The array containing all the elements
	//The array must be sorted
	int arr[] = {2, 4, 6, 7, 9, 13, 26, 33, 76, 81};

	//The element to be searched in the array
	int target = 33;

	//Length of the array
	int len = sizeof(arr) / sizeof(arr[0]);

	//Function call
	int ans = binarySearch(arr, 0, len - 1, target);

	if (ans == -1)
		cout << "Element not present in the array\n";

	else
		cout << "Element present at index : " << ans << "\n";

	return 0;
}