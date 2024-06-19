//Practising string iterator (pointer)-------------------------
/*
#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "hello world";
    string::iterator opal;
    for(opal = s1.begin(); opal != s1.end(); opal++ ){
        cout<<*opal;
    }
}
*/

//Practising string reverse iterator---------------------------

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "Hello World";
    string::reverse_iterator pp;
    for(pp = s1.rbegin(); pp!=s1.rend(); pp++ ){
        cout<<*pp;
    }
}