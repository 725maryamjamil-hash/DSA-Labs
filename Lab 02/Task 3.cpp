#include <iostream>
using namespace std;
int main()
{
	//deletion of array element
	int arr[100] = {10,20,30,40,50};
	int position = 3;
	cout << "Array elements before deletion:" << endl;
	for(int i=0 ; i<5 ; i++)
	{
		cout << arr[i] <<endl;
	}
	
	for(int i=position-1 ; i<4 ; i++)
	{
		arr[i] = arr[i+1];
	}
	
	cout << "\nArray elements after deletion:" <<endl;
	for(int i=0 ; i<4 ; i++)
	{
		cout << arr[i] <<endl;
	}
	return 0;
}
