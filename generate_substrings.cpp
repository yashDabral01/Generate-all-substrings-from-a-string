#include<iostream>
using namespace std;
void generateSubstrings(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    string ros = s.substr(1);
    generateSubstrings(ros,ans);
    generateSubstrings(ros,ans+s[0]);
}
int main(){
    generateSubstrings("ABC","");
    return 0;
}