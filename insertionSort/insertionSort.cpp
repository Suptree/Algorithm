#include <iostream>

void insertionSort(int A[], int N) {
    for(int i = 1; i < N; i++){
        int v = A[i];
        int j = i -1; 

        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--; 
        }
        A[j+1] = v;

        // for(int i = 0; i < N; i++){
        //     std::cout << A[i] << " ";
        // }
        // std::cout << std::endl;
    }
}

int main() {
    int N;
    std::cin >> N;
    int A[N];
    for(int i = 0; i < N; i++){
        std::cin >> A[i];
    }
    insertionSort(A,N);

    // for(int i = 0; i < N; i++){
    //     std::cout << A[i] << std::endl;
    // }

}