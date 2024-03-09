#include <iostream>
#include <string>
#include <stack>

using namespace std;

string xoaDauNgoacNgoai(string s) {
    stack<char> st;
    string ketQua = "";

    for (char c : s) {
        if (c == '(') {
            if (!st.empty()) {
                ketQua += c;
            }
            st.push(c);
        } else if (c == ')') {
            st.pop();
            if (!st.empty()) {
                ketQua += c;
            }
        }
    }

    return ketQua;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    	string s;
    	cin>>s;
    	cout<<xoaDauNgoacNgoai(s)<<endl;
	}
}