#include<iostream>
#include<ctime>
#include<iomanip>
using namespace std;
void OutputArray(int* arr, const int size);
void FillArrayRandomVal(int* arr, const int size, int start, int end);
void RewritingArray(int* arr, const int size, const int k1, const int k2, int& sum, int& quantity);
int main()
{
	srand(time(0));
	const int size_r = 25, start_random = 4, end_random = 73, k1 = 6, k2 = 5;
	int sum = 0, quantity = 0;
	int r[size_r];
	FillArrayRandomVal(r, size_r, start_random, end_random);
	OutputArray(r, size_r);
	RewritingArray(r, size_r, k1, k2, sum, quantity);
	OutputArray(r, size_r);
	cout << "sum = " << sum << "\nquantity = " << quantity << endl;
}
void FillArrayRandomVal(int* arr, const int size, int start, int end)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = start + rand() % (end - start);
	}
}
void OutputArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << setw(4) << arr[i];
	}
	cout << endl;
}
void RewritingArray(int* arr, const int size, const int k1, const int k2, int &sum, int &quantity)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] % k1 == 0 || i % k2 != 0)
		{
			sum += arr[i];
			++quantity;
			arr[i] = 0;
		}
	}
}