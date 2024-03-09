#include<bits/stdc++.h>

using namespace std;

int clumsy(int n){
    if(n <= 2){
        return n;
    }
    stack<int> s;
    s.push(n--);
    int index = 0;
    while(n > 0){
        if(index % 4 == 0){
            s.top() *= n;
        } 
		else if(index % 4 == 1){
            s.top() /= n;
        } 
		else if(index % 4 == 2){
            s.push(n);
        } 
		else{
            s.push(-n);
        }
        n--;
        index++;
    }
    int result = 0;
    while(!s.empty()){
        result += s.top();
        s.pop();
    }
    return result;
}

int main(){
    int t; 
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int result = clumsy(n);
        cout << result << endl;
    }
    return 0;
}