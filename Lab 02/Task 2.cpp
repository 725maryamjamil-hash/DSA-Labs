#include <iostream>
using namespace std;
int main()
{
	//searching an element in an array
	int arr[100] = {10,20,30,40,50};
	int value = 30;					//searching element
	for(int i=0; i<5 ; i++)
	{
		if(arr[i]==value)
		{
			cout << "\nValue " << value << " is available at " << i << "\n" << endl;
		}
	 	else
		{
			cout << "Invalid Value at " << i <<endl;
		}
	}
	return 0;
}
