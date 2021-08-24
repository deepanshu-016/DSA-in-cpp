/* C++ program to search for a particular element in an array using Linear Search*/

#include <iostream>
using namespace std;

//Function to search for a particular element in an array
int linearSearch(int arr[], int len, int target)
{
	for (int i = 0; i < len; i++)
	{
		//To check if element at the index i is equal to the target element
		if (arr[i] == target)
			return i;
	}

	//If target element not found in the array
	return -1;
}
//Main function
int main()
{
	//The array containing all the elements
	int arr[] = {2, 4, 6, 7, 9, 13, 26, 33, 76, 81};

	//The element to be searched in the array
	int target = 33;

	//Length of the array
	int len = sizeof(arr) / sizeof(arr[0]);

	//Function call
	int ans = linearSearch(arr, len, target);

	if (ans == -1)
		cout << "Element not present in the array\n";

	else
		cout << "Element present at index : " << ans << "\n";

	return 0;
}