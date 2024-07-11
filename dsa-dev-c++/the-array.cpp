#include <bits/stdc++.h>
using namespace std;
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int minElement(int arr[], int size)
{
	int min = INT_MAX;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}

int maxElement(int arr[], int size)
{
	int max = INT_MIN;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

bool linearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
		{
			return true;
			break;
		}
	}
	return false;
}

void reverseTheArray(int arr[], int size)
{
	int temp = 0;
	int start = 0;
	int last = size - 1;
	while (start <= last)
	{
		temp = arr[start];
		arr[start] = arr[last];
		arr[last] = temp;
		start++;
		last--;
	}
}

void swapAltenate(int arr[], int size)
{
	for (int i = 0; i < size; i += 2)
	{
		if (i + 1 < size)
		{
			swap(arr[i], arr[i + 1]);
		}
	}
}

int uniueqInArray(int arr[], int size)
{
	//  ----------------- broute force --------------
	//
	/*
	int ans = -1;
	for(int i=0;i<size;i++){
		int count = 1;
		for(int j=0;j<size;j++){
			if(arr[i]==arr[j] && j!=i){
				count++;
			}
		}
		if(count==1) ans = arr[i];
	}
	return ans;

	*/
	// -------- optimal --------------
	int ans = 0;
	for (int i = 0; i < size; i++)
	{
		ans ^= arr[i];
	}
	return ans;
}

void pairSum(int arr[], int size, int total)
{
	int ans[size];
	int k = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] + arr[j] == total)
			{
				ans[k] = arr[i];
				ans[k + 1] = arr[j];
				k += 2;
			}
		}
	}
	int n = sizeof(ans) / sizeof(ans[0]);
	sort(ans, ans + n);

	printArray(ans, n);
}

void sort01(int arr[], int size)
{
	int i = 0, j = size - 1;

	while (i < j)
	{
		while (arr[i] == 0)
		{
			i++;
		}
		while (arr[j] == 1)
		{
			j--;
		}
		if (i < j)
		{
			swap(arr[i], arr[j]);
			i++;
			j--;
		}
	}
}

void sort012(int arr[], int size)
{
	int start = 0, mid = 0, end = size - 1;

	while (mid <= end)
	{
		switch (arr[mid])
		{
		case 0:
			swap(arr[start], arr[mid]);
			start++;
			mid++;
			cout << "in case of 0 \n"
				 << endl;
			printArray(arr, size);
			break;
		case 1:
			mid++;
			cout << "in case of 1 \n"
				 << endl;
			printArray(arr, size);
			break;
		case 2:
			swap(arr[end], arr[mid]);
			end--;
			cout << "in case of 2 \n"
				 << endl;
			printArray(arr, size);
			break;
		}
	}
}

bool binarySearch(int arr[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;

	while (start <= end)
	{
		if (arr[mid] == key)
		{
			return true;
		}
		if (arr[mid] < key)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = start + (end - start) / 2;
	}

	return false;
}

int firstOccOfElem(int arr[], int size, int key)
{
	int start = 0, end = size - 1;
	int mid = start + (end - start) / 2;
	int index = 0;
	while (start <= end)
	{
		// match
		if (arr[mid] == key)
		{
			index = mid;
			end = mid - 1;
		}
		// >
		if (arr[mid] > key)
		{
			end = mid - 1;
		}
		if (arr[mid] < key)
		{
			start = mid + 1;
		}
		// <
		mid = start + (end - start) / 2;
	}
	return index;
}

int lastOccOfElem(int arr[], int size, int key)
{
	int start = 0, end = size - 1;
	int mid = start + (end - start) / 2;
	int index = 0;
	while (start <= end)
	{
		// match
		if (arr[mid] == key)
		{
			index = mid;
			start = mid + 1;
		}
		// >
		if (arr[mid] > key)
		{
			end = mid - 1;
		}
		if (arr[mid] < key)
		{
			start = mid + 1;
		}
		// <
		mid = start + (end - start) / 2;
	}
	return index;
}

int peakIndexInMountainArr(int arr[], int size)
{
	int start = 0, end = size - 1;
	int mid = start + (end - start) / 2;
	printArray(arr, size);
	while (start < end)
	{
		if (arr[mid] < arr[mid + 1])
		{
			start = mid + 1;
		}
		else
		{
			end = mid;
		}
		mid = start + (end - start) / 2;
	}
	return arr[start];
}

int pivoitElmentInRotedSortedArray(int arr[], int size)
{
	int start = 0, end = size - 1;
	int mid = start + (end - start) / 2;

	while (start < end)
	{
		if (arr[mid] >= arr[0])
		{
			start = mid + 1;
		}
		else
		{
			end = mid;
		}
		mid = start + (end - start) / 2;
	}

	//	return arr[end];
	return end;
}

int specialBinarySearch(int arr[], int s, int e, int key)
{
	int start = s;
	int end = e;
	int mid = start + (end - start) / 2;

	while (start <= end)
	{
		if (arr[mid] == key)
		{
			return mid;
		}
		if (key > arr[mid])
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = start + (end - start) / 2;
	}
	return -1;
}

bool serachElementInRotedSortedArray(int arr[], int size, int key)
{
	int pivotElement = pivoitElmentInRotedSortedArray(arr, size);
	int ans = false;
	if (key >= arr[pivotElement] && key <= arr[size - 1])
	{
		ans = specialBinarySearch(arr, pivotElement, size - 1, key);
	}
	else
	{
		ans = specialBinarySearch(arr, 0, pivotElement, key);
	}
	return ans;
}

int sqrtOfNum(int num)
{
	int start = 0;
	int end = num;
	// here long long int for too big number than 2^31(int max range)
	// prevent from big numbers
	long long int mid = start + (end - start) / 2;
	long long int ans = -1;

	while (start <= end)
	{
		long long int sqaure = mid * mid;
		if (sqaure == num)
		{
			return mid;
		}
		if (sqaure < num)
		{
			start = mid + 1;
			ans = mid;
		}
		else
		{
			end = mid - 1;
		}
		mid = start + (end - start) / 2;
	}
	return ans;
}

double morePrecision(int num, int precisonCount, int intSqrt)
{
	double factor = 1; // /10 -> 0.1 -> 0.01 -> 0.001
	double tempNum = intSqrt;

	for (int i = 0; i < precisonCount; i++)
	{
		factor = factor / 10;
		for (double j = tempNum; j * j < num; j = factor + j)
		{
			tempNum = j;
		}
	}

	return tempNum;
}
bool isPossibleSoution(int arr[], int size, int numOfStudent, int mid)
{
	int studentCount = 1;
	int pageSum = 0;

	cout << "CHecking for mid " << mid << endl;
	for (int i = 0; i < size; i++)
	{
		if (pageSum + arr[i] <= mid)
		{
			pageSum += arr[i];
		}
		else
		{
			studentCount++;
			if (studentCount > numOfStudent || arr[i] > mid)
			{
				return false;
			}
			pageSum = 0;
			pageSum = arr[i];
		}
		if (studentCount > numOfStudent)
		{
			return false;
		}
		cout << "for i " << i << " student count " << studentCount << " page sum is " << pageSum << '\n';
	}
	return true;
}

int bookAllocation(int arr[], int size, int numOfStudent)
{
	int sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	};
	int start = 0;
	int end = sum;

	int mid = start + (end - start) / 2;
	int ans = -1;

	while (start <= end)
	{
		if (isPossibleSoution(arr, size, numOfStudent, mid))
		{
			ans = mid;
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
		mid = start + (end - start) / 2;
	}

	return ans;
}

int main()
{

	// int arr[] = {12,13,15,14,0};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int minValue = minElement(arr,size);
	// int maxValue = maxElement(arr,size);
	// cout << "min value " << minValue << " " << "max value "<< maxValue << endl;
	// int key = 0;
	// int serach1Ans = linearSearch(arr,size,0);
	//	if(serach1Ans){
	//		cout << key <<" Found in array "<< endl;
	//	}else{
	//		cout << key <<" Not Found in array "<< endl;
	//	}

	// -----------------  Reverse the array ---------------
	// printArray(arr,size);
	// cout << "\n Reversing the array \n";
	// reverseTheArray(arr,size);
	// printArray(arr,size);
	// ----------------------------------------------------

	// ---- ---------------- swap alternate ---------------
	// in odd size array last element reamin at same postions
	// printArray(arr,size);
	// cout << "swap alternete elemenent "<< endl;
	// swapAltenate(arr,size);
	// printArray(arr,size);
	// ----------------------------------------------------

	// --------------- uniuqe element ----------------------
	// int arr[] = {3,5,3,6,5}; // 6;
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int ans = uniueqInArray(arr,size);
	// if(ans != -1 || ans == 0){
	// 		cout << "Uniueq in array is "<< ans;
	// }else {
	//		cout << "no Uniueq in array " ;
	// }
	// ----------------------------------------------------

	// -------------- pair sum ----------------------------
	// int arr[] = {1,2,3,4,5};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// printArray(arr,size);
	// int total = 5;
	// pairSum(arr,size,total);
	// ----------------------------------------------------

	// -------------- sort 0 ,1 and 2 ---------------------
	// together all element
	//	int arr[] = {0,1,1,0,0,1,0};
	// int arr[] = {0,1,1,2,2,0,0,1,0};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// printArray(arr,size);
	// sort012(arr,size);
	// printArray(arr,size);
	// -------------------------------------------------------

	// ------------------- Binary Search ---------------------
	// int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,55,77,88};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int key = 10;
	// bool ans = binarySearch(arr,size,key);
	// if(ans){
	//	cout << key << " Found in array \n";
	// }else{
	// 	cout << key << " Not found in array \n";
	// }
	// -------------------------------------------------------

	// ------------------- Binary Search Problems ------------
	// 1. First And Last Occurence of Element in array and Count total occurences
	// int arr[] = {1,2,3,3,5};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int key = 3;
	// int firstOccurenceOfElement = firstOccOfElem(arr,size,key);
	// int lastOccurenceOfElement = lastOccOfElem(arr,size,key);
	// int totalOccurenceOfElement = lastOccurenceOfElement - firstOccurenceOfElement + 1;
	// cout << "First Occuerences " << firstOccurenceOfElement << " Last Occuerences " << lastOccurenceOfElement << " Total Occuerences " << totalOccurenceOfElement << endl;

	// 2. peak Index In Mountain Array
	// example 1. [0,1,0] -> ans 1
	// example 2. [0,1,2,3,2,1] -> ans 3
	// int arr[] = {0,1,2,3,2,1};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int ans = peakIndexInMountainArr(arr,size);
	// printArray(arr,size);
	// cout << "Peak Element in The array is " << ans << endl;

	// 3. Search Pivoit Element in roted sorted array
	// int arr[] = {7,9,12,14,1,2};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int ans = pivoitElmentInRotedSortedArray(arr,size);
	// cout << "Ans is " << ans;

	// 4. Search Element in Roted Sorted Array
	// O (log n) + O (log n)  = O (log n)
	// int arr[] = {7,9,1,2,3};
	// int size = sizeof(arr) / sizeof(arr[0]);
	// int key = 2;
	// printArray(arr,size);
	// bool ans = serachElementInRotedSortedArray(arr,size,key);

	// if(ans){
	//	cout << key << " Found in array \n";
	// }else{
	// 	cout << key << " Not Found in array \n";
	// }

	// 5. Square Root of a number using binary search
	// cout <<"LOL" << endl;
	// int num = 37;
	// int ans = sqrtOfNum(num);
	// cout << ans <<endl;
	// double sqrtWithMorePrecision = morePrecision(num,8,ans);
	// cout << "\n Sqare Root of with more precision " << num << " = " << sqrtWithMorePrecision ;

	// 6. Book allocation Problem

	int arr[] = {10, 20, 30, 40};
	int size = sizeof(arr) / sizeof(arr[0]);
	int numOfStudent = 2;
	// 7. painter
	int numOfPainter = 2;
	int ans = bookAllocation(arr, size, numOfStudent);
	cout << ans;
	// -------------------------------------------------------

	int anyNum = 100;
	if (anyNum > 0)
	{
		cout << "Level one";
		if (anyNum > 10)
		{
			cout << "Level two";
			if (anyNum > 20)
			{
				cout << "Level three";
			}
			if (anyNum > 30)
			{
				cout << "Level Four";
			}
		}
	}
	return 0;
}
