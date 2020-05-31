#include <iostream>
using namespace std;


void shkembimi(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;

}

void SelectionSort(int A[], int n) {
	int index_min;

	for (int i = 0; i < n ; i++)
	{
		index_min = A[0];
		if (A[i] < A[0]) {
			index_min = A[i];
		}
		
		shkembimi(&A[index_min], &A[i]);
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