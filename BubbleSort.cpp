/* C++ program to sort an array using Bubble Sort technique */

#include <iostream>
using namespace std;

//Function to sort an array with Bubble Sort
void bubbleSort(int arr[], int len)
{
	bool swap;

	for (int i = 0; i < len; i++)
	{
		swap = false;

		for (int j = 1; j < len - i; j++)
		{
			if (arr[j] < arr[j - 1])
			{
				//Swaaping the values

				int temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
				
				swap=true;
			}
		}
		 
		 //Array is already sorted,break
		 if(swap==false)
		 	break;
	}
}

int main()
{
	int arr[] = {6, 4, -4, 23, 0, 68, 43, 27};

	int len = sizeof(arr) / sizeof(arr[0]);

	//Function call
	bubbleSort(arr, len);

	cout << "Array after sorting : \n";

	//Printing the array after sorting
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}