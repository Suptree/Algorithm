#include <iostream>

void selectionSort(int A[], int N) {
    for(int i = 0; i < N; i++){
        int minj = i;
        for(int j = i; j < N; j++){
            if(A[j] < A[minj]){
                minj = j;
            }
        }
        std::swap(A[i],A[minj]);
    }
}
int main() {
    int N;
    std::cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        std::cin >> A[i];
    }
    selectionSort(A,N);

    for(int i = 0; i < N; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;

}