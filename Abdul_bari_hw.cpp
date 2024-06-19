//Average of the array input values--------
/*
#include<iostream>
using namespace std;

int main(){
    int n,average = 0;
    cout<<"Input for number of elements in the array.";
    cin>>n;
    int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    for(int j=0; j<n; j++){
        average = average+ A[j];
    }
    average = average/n;
    cout<<average;
}
*/

//Program to multiply two matrices -----
/*
#include<iostream>
using namespace std;

int main()
{
    int n,m,q,w;
    int A[2][3]={1,2,3,5,6};
    int B[2][3]={12,13,44,12,134};
    int C[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            int C[2][3] = {A[i][j] * B[i][j]};
        }
        cout<<C[2][3];
    }
}
*/


//Find the length of string ---------------------------------
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1 = "Welcome";
    cout<<s1.length();
}
*/

//using pointer iteration to find the length---------------------------
/*
#include<iostream>
#include<string>
using namespace std;

int main() {
    int count=0;
    string s1 = "Welcome";
    string::iterator ola;
    for(ola = s1.begin(); ola!=s1.end(); ola++){
        count++;
    }
    cout<<count;
}
*/

//Change the cases for string --- ie WELCOME -> welcome
/*
#include<iostream>
#include<string>

using namespace std;
int main() {
    string s1;
    string::iterator pp;
    for(pp = s1.begin(); pp!=s1.end();pp++){
        *pp = *pp + 32;
        cout<<*pp;
    }
}
*/

//couny vowel, consonants in strings-----------------
/*#include<iostream>
#include<string>

using namespace std;

int main() {
    int vowels = 0, consonants = 0;
    string s = "Hello How maNy Words";
    for(int i=0; s[i]!= '\0'; i++){
        if(s[i] == 'A'|| s[i] == 'E'|| s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
            vowels++;
        }
        else{
            consonants++;
        }
    }
    cout<<vowels<<endl;
    cout<<consonants<<endl;
    
  }
*/


//Write a class for students--------------
#include<iostream>
using namespace std;

class Student_info
{
    int roll;
    string name;
    int mark_math;
    int mark_phy;
    int mark_chem;
public:
    Student_info(int r, string n, int m,int p, int c)   //parametrised constructor----
    {
        roll = r;
        name = n;
        mark_math = m;
        mark_phy = p;
        mark_chem = c;
    }
    int total();          //we will declare em outside with 
    char grade();

};

int Student_info::total() 
{
    return mark_math + mark_phy + mark_chem;
};

char Student_info::grade() 
{
     float average = total()/3;
     if(average = total()/3)
     {
        return 'A';
     }
     else if(average>=40 && average<60)
     {
        return 'B';
     }
     else
     {
        return 'C';
     }
};

int main() {
    int roll;
    string name;
    int m,p,c;
    cout<<"enter roll number of a student";
    cin>>roll;
    cout<<"enter your name";
    getline(cin, name);
    cout<<"input for math, physics and chem marks";
    cin>>m>>p>>c;
    Student_info s(roll, name, m,p,c);
    cout<<"total mark"<<s.total()<<endl;
    cout<<"Grade of student"<<s.grade()<<endl;

}