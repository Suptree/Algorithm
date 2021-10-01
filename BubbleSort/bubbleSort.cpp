#include <iostream>

void bubbleSort(int A[], int N) {
    bool flag = true;
    int i = 0;
    while(flag) {
        flag = false;
        for(int j = N-1; j >= i + 1; j--){
            if(A[j] < A[j-1]){
                std::swap(A[j],A[j-1]);
                flag = true;
            }

        }
    }
}

int main() {
    int N;
    int A[N];
    std::cin >> N;
    for(int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    bubbleSort(A,N);
    for(int i = 0; i < N; i++){
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}