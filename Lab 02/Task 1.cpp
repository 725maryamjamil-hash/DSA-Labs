#include <iostream>
using namespace std;
int main()
{
	//insertion in arrays
	int arr[100] = {10,20,30,40,50};
	int position = 3;
	int value = 100;
	cout << "Array elements before insertion:" << endl;
	for(int i=0 ; i<5 ; i++)
	{
		cout << arr[i] << endl;
	}
	
	for (int i=6 ; i>=position ; i--)
	{
		arr[i] = arr[i-1];
	}
	arr[position-1] = value;
	
	cout << "\nArray elements after insertion:" << endl;
	for (int i=0 ; i<6 ; i++)
	{
		cout << arr[i] <<endl;
	}
	return 0;
}
