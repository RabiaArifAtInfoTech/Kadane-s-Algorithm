#include<iostream>
//#include<bits/bitc++.h>

int largestSum(int arr[], int size)
{
	int sum = -100000;
	int tempSum = 0;
	
	for (int i = 0; i < size; i++)
	{
		tempSum = tempSum + arr[i];
		/*std::cout << "\n\ni: " << i;
		std::cout << "\nSum: " << sum;
		std::cout << "\nTemp Sum: " << tempSum;*/

		if (tempSum > sum)
		{
			sum = tempSum;
		}
		if (tempSum < 0)
		{
			tempSum = 0;
		}
		//std::cout << "\nSum: " << sum;
	}

	
	return sum;

}

int main()
{
	const int N1 = 10;
	int arr1[N1] = { -2, -3, 4, -1, -2, 1, 5, -3 };

	std::cout << "\nLargest Sum : " << largestSum(arr1, N1);


	std::cout << "\n\n\n";
	return 0;
}