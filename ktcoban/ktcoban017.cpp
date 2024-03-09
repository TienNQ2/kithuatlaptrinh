#include <iostream>
#include <vector>

int tongDayConLonNhat(std::vector<int> A) {
    int max_sum = A[0]; // tong lay cuoi cung
    int current_sum = A[0]; // tong tam thoi

    for (int i = 1; i < A.size(); i++) {
        current_sum = std::max(A[i], current_sum + A[i]);
        max_sum = std::max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    int t;
    std::cin>>t;
    while(t--){
    	long long n;
    	std::cin>>n;
    	std::vector<int> A(n);
    	for(int i=0;i<n;i++) std::cin>>A[i];
    	std::cout<<tongDayConLonNhat(A)<<std::endl;
	}
}