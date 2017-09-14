/*Дан двумерный массив размера N?N, заполненный цифрами. Требуется вывести все элементы, находящиеся выше побочной диагонали.*/

#include <iostream>

using namespace std;

void inputArray(int A[][500], int N){
	cout << "Input Array: ";
	for (int i = 0; i < N; ++i){
		for (int j = 0; j < N; ++j){
		cin >> A[i][j];}
	}
	
}

void outputArray(int A[][500], int N){
	for (int i = 0; i < N-1; ++i){
		for (int j = 0; j < N-i-1; ++j){
			cout << A[i][j] << ' ';
		}
	}
	
	
}



int main(){
	int N = 0;
	cout << "N = ";
	cin >> N;
	int A[500][500];
	inputArray(A, N);
	outputArray(A, N);
	
	return 0;
}
