#include <iostream>
#include <vector>
using namespace std;
int dem=0;
bool is_prime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}
void find_prime_sum_combinations(int P, int S, int N, vector<int> current_combination) {
    if (N == 0 && S == 0) {
    	dem++;
        for (int i = 0; i < current_combination.size(); i++) {
            cout << current_combination[i] << " ";
        }
        cout << endl;
        return;
    }
    if (N <= 0 || S <= 0) return;

    for (int x = P + 1; x <= S; x++) {
        if (is_prime(x)) {
            current_combination.push_back(x);
            find_prime_sum_combinations(x, S - x, N - 1, current_combination);
            current_combination.pop_back();
        }
    }
}

int main(){
    int P, N,S;
    cin>>P>>N>>S;
	vector<int> current_combination;
	find_prime_sum_combinations(P, S, N, current_combination);
	if(dem==0) cout<<-1<<endl;
   	dem=0;
}