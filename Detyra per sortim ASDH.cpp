#include <iostream>
using namespace std;

void Shkembe(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

void SelectionSort(int A[], int n) {
	int index_min;

	for (int i = 0; i < n-1; i++)
	{
		index_min = i;
		for ( int j = i+1; j < n; j++)
		{
			if (A[j]<A[index_min])
			{
				index_min = j;
			}
		}
		Shkembe(&A[index_min], &A[i]);
	}
}

void Printo(int A[], int n) {
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}


int main() {

	int A[] = { 13,12,89,63,7 };
	int n = sizeof(A) / sizeof(A[0]);
	SelectionSort(A, n);
	cout << "Vektori i sortuar " << endl;
	Printo(A, n);
	return 0;
}