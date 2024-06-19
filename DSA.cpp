//binary search for sorted list ----------------------------------------------------------
/*
#include<iostream>
using namespace std;

int main() 
{
    int l,h, mid,key,j;
    cout<<"give the input for the array size you want...";
    cin>>j;
    int A[j];
    cout<<"give input for the array want to make.";
    for(int i=0; i<=j-1; i++){
        cin>>A[i];
    }
    cout<<"input for the l(starting point) and h(end point)";
    cin>>l;
    cin>>h;
    cout<<"input for the key you would like to search";
    cin>>key;
    while (l < h) {
    mid = (l + h) / 2;
    if (A[mid] == key) {
        cout << "found at index " << mid;
        return 0;
    } else if (A[mid] < key) {
        l = mid + 1;
    } else {
        h = mid;
    }
}
}
*/


//Pyramid problem ---------
/*
#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<4;i++)
    {
        for(int j=0; j<4;j++)
        {
            if(i>=j){
                cout<<"*";
            }
            
        }cout<<endl;
    }
}
*/


//Checking Palindrome -----------------------------------------------------------------
/*
#include<iostream>
#include<string>

using namespace std;

int main() 
{
    string s1;
    cout<<"enter a string";
    getline(cin,s1);
    string s3;                             //earlier s2 string was empty. so we deleted it so it will stop reassigning the value and not storing the *poo value in it
    string::reverse_iterator poo;
    for(poo = s1.rbegin(); poo != s1.rend(); poo++)
    {
        s3 = s3 + *poo;
    }

        if(s1 == s3)
        {
            cout<<"following is palindrom";
           
        }
        else
        {
            cout<<"Following is not palindrom";
        }
            
}
*/

//check for username in the email id ----------------------------------------

#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1;
    cout<<"Please enter the emailid";
    getline(cin,s1);
    int i = s1.find('@');
    cout<<s1.substr(0,i);
    
}
    
    



















































































































































































































































































































































































































































































































