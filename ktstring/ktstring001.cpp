
#include <iostream>
#include <string>
using namespace std;
long long traLaiViTri(string s){
    long long end = s.find(',');
    long long begin = s.find(char(34));
    string child = s.substr(begin+1,end-begin-2);
    string parent = s.substr(end+12,s.length()-2);
    long long x = parent.find(child);
    return x; 4
}
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        //fflush(stdin);
       	string s;
        getline(cin,s);
        cout<<traLaiViTri(s)<<endl;
    }
}