/*
#include<iostream>
using namespace std;

int main() { 
    cout<<"Hello World";
    return 0;
}
*/
/*
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Give input for a,b" ;
    cin>>a>>b;
    c = a+b;
    cout<<"The c  = "<<c;
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int a,b,d;
    cout<<"Give the input for a and b";
    cin>>a>>b;
    d = a+b;
    cout<<"The arithmatic of the d is"<<d;
    return 0;
}
*/

/*
#include<iostream>

using namespace std;

int main() {
    string str;
    cout<<"May i know your name";
    getline(cin, str);

    cout<<"Hello"<<str;
    return 0;
}
*/

//Area of triangle ------------------------------------------------------------------------------------

/*
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Give an input for a and b, a being the height and b being breath concurrently";
    cin>>a>>b;
    c = (a*b)/2;
    cout<<"The following area of the triangle"<<c;
    return 0;

}
*/

//Perimeter of the rectangle------------------------------------------------------------

/*
#include<iostream>
using namespace std;

int main() {
    int p,l,b;
    cout<<"Give an input for l and b";
    cin>>l>>b;
    p = 2*(l+b);
    cout<<"The following perimeter of the given dimensions"<<p;
    return 0;
}
*/


//Sum of n terms -------------------------------------------------

/*
#include<iostream>
using namespace std;

int main() {
    int n,p;
    cout<<"Give in the data for n";
    cin>>n;
    p = (n*(n+1))/2;
    cout<<"Sum of n terms"<<p;
    return 0;
    
}
*/


//nth terms of AP series--------------------------------------------

/*
#include<iostream>
using namespace std;

int main() {
    int t,a,n,d;
    cout<<"Give in the input for a(first term), n(number of terms), d(common difference) in sequence";
    cin>>a>>n>>d;
    t = a+(n-1)*d;
    cout<<"The nth term of AP series"<<t;
    return 0;
}
*/


//Root of an Quadratic equation ------------------------------------------

/*
#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int r,b,a,c;
    cout<<"Give the input for b(middle term), a(first term), c(last term)";
    cin>>b>>a>>c;
    r = (-b+sqrt(b*b-4*a*c))/2*a;
    cout<<"The root of quadratic equation for the following expression"<<r;

    return 0;


}
*/


//Typecasting and finding the area of Triangle in Float ------------------------------
/*
#include <iostream>
using namespace std;

float area( int base, int height) 
{ 
    float area = (static_cast<float>(base)*static_cast<float>(height))/2.0f;
    return area;
}

int main() {
    int base = 5,height = 7;
    float area(int base, int height);
    cout<<"Area of the triangle "<<area<<endl;
    return 0;
}
*/

//comprehensive code  simplified.. good way to feel dumb...
/*#include <iostream>
using namespace std;

void area() 
{
    int b=7,h=5;
   
    float area;
	
    area=(float)b*h/2;//Write a expression to find Area as float using typecasting
    
 
 cout<<area;
}
*/
//we dont understand the woeking because udemy work space have inbuilt functions for the following purpose--------------







//Timepass with conditional statements ---------------------------------------------------------------------------------------------

/*
#include<iostream>
using namespace std;

int main() 
{
    int a,b,c;
    cout<<"Enter 2 numbers";
    cin>>a>>b;
    if(b==0)
    {
        cout<<"Division by a zero";
    }
    else
    {
        c = a/b;
        cout<<c<<endl;
    }
}
*/


//Compound if and else statement  implementation where work time is to be demonstrated ie between 9 and 18 we have working and anything out of these is leisures

/*
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"Input a working hour prefereable in 24 hour integer style.";
    cin>>a;
    if(a>=9 && a<=18) {
        cout<<"Working hours";
    }
    else{
        cout<<"Leisure";
    }
    return 0;
}
*/

//Compound if and else statement --- implementing the age part between 12-50 is young or not young  

/*
#include<iostream>
using namespace std;

int main() {
    int a;
    cout<<"What is your age";
    cin>>a;
    if(a>=12 && a<=50){
        cout<<"young";
    }
    else{
        cout<<"not young";
    }
}
*/


//Nested loops -------

/*
#include<iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"Input for a,b,c";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a;
    }
    else{
        if(b>c){
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
}

*/


//different solution to the problem -------------------------------------------------

/*
#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"input for a,b,c";
    cin>>a>>b>>c;
    if(a>b && a>>c){
        cout<<a;
    }
    else if(b>c){
        cout<<b;
    }
    else{
        cout<<c;
    }
}
*/


//Quadratic equation ----------------------------------------------------------

/*
#include<iostream>
#include<cmath>
using namespace std;

void discriminant() {
    int a,b,c,d,r;
    d = (b*b -4*a*c);

}

void roots() {
    int a,b,c,d,r;
    r = -b + sqrt(b*b - 4*a*c);
}


int main() {
    int a,b,c,d,r;
    cout<<"Give input for a,b,c";
    cin>>a>>b>>c;
    discriminant() ;
    if (d == 0){
        cout<<"Root are real and equal";
        roots();
    }
    else if(d>0) {
        cout<<"Roots are real and unequal";
        roots();
    }
    else{
        cout<<"Roots are imaginary";
        roots();
    }


}

*/


//Display grades------

/*
#include<iostream>
using namespace std;

int main()
{
    int m1,m2,m3,total;
    float avg;
    cout<<"Input for m1,m2,m3(where m represents the marks)";
    cin>>m1>>m2>>m3;
    total = m1+m2+m3;
    avg = total/3;

    if(avg>=60){
        cout<<"You get an A grade";
    }
    else if(avg<60 && avg>=35){
        cout<<"You get a B grade";
    }
    else{
        cout<<"You get a c grade";
    }
}

*/


//Calculate discounted Bill Amount ----------------------

/*
#include<iostream>
using namespace std;

int main() 
{
    int amount;
    float disamount;
    cout<<"give an input for the amount";
    cin>>amount;
    if(amount>=5000)
    {
        disamount = amount - amount * 20/100;
        cout<<disamount;
    }
    else if(amount>= 2000 && amount<5000)
    {
        disamount = amount - amount * 10/100;
        cout<<disamount;
    }
    else{
        disamount = amount - amount * 5/100;
        cout<<disamount;
    }

}
*/

// Short circuit problem ( || - or operation) better than && operation in certain cases -
//reduces search time and complexity that is reduced by checking only left side(only if true), if turned out to be 
//turned out to be false 

/*
#include<iostream>
using namespace std;

int main() {
    int a=10, b= 5, i = 5;
    if (a>b || ++i <=0){

    }
    cout<<i<<endl;
    return 0;
}
*/

//Dynamic declaration in C++ refers to the ability to declare variables at any point in the code, not just at the beginning of a block
/*int main() {
    int a = 10, b = 5;
    if (int c = a + b; c > 10) {
        cout << "Value of C is " << c << endl;
    }
}
*/

// we can limit the accesibility of the data by making multiple dummy blocks ---------------------------

/*
#include<stdio.h>
using namespace std;

int main(){
    int a=10,b=5;
    { int c = a + b;
    cout<<c;
    }

    { 
    }
    //cout<<c;   // would not recognise the variable c here because (check the topic)
    
}
*/


//Switch Case---------------------------------------------------------------------------
/*
#include<iostream>
using namespace std;

int main() {
    int day;
    cout<<"Enter the day no.";
    cin>>day;
    switch(day){
        case 1: cout<<"Mon";
               break;

        case 2: cout<<"Tues";
               break;

        case 3: cout<<"Thur";
               break;

        case 4: cout<<"Fri";
               break;

        case 5: cout<<"Sat";
               break;

        case 6: cout<<"Sun";
               break;

        case 7: cout<<"Wed";
               break;

        default: cout<<"invalid date";
    }
}

*/


//practise some switch 
/*#include<iostream>
using namespace std;

int main(){
    int option;
    cout<<"input for option varies as 1.Add, 2.subtract, 3.multiply, 4.division";
    cin>>option;
    int a,b,c;
    cout<<"input for a,b";
    cin>>a>>b;

    switch(option) {
        case 1: c = a+b;
        break;
        case 2: c = a-b;
        break;
        case 3: c = a*b;
        break;
        case 4: c = a/b;
        break;
        default: cout<<"invalid input";
    }
    cout<<c;


}
*/


//Write a program to offer discount on total bill amount

/*
#include<iostream>
using namespace std;

int main(){
    float bill;
    int b;
    cout<<"input amount of bill";
    cin>>bill;
    if(bill < 100){
        cout<<bill;
    }
    else if(bill>=100 && bill<=500){
        b = bill - bill*(10/100);
        cout<<b;
    }
    else{
        b = bill - bill*(20/100);
        cout<<b;
    }
}
*/

//do last question from Conditional statement ------------------------





//LOOPS ____----------------------------------------------------------------------------------------------------

//displaying n numbers--

/*#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"input a number";
    cin>>n;
    while(n>0){
        cout<<n;
        n = n-1;
    }
}
*/

//Multiplication of 6-----------------------------
/*
#include<iostream>
using namespace std;

int main(){
    int n,l;
    cout<<"input for n(number of multiplication";
    cin>>n;
    for(int i; i<=n; i++){
        l = 6*i;
        cout<<l;
    }
    
}
*/

/*
#include<iostream>
using namespace std;

int main() {
    int n,sum = 0;
    cout<<"input n";
    cin>>n;
    for(int i; i<=n; i++){
        sum = sum + i;
        cout<<sum;
   }
   
}
*/


//Factorial --------------
/*
#include<iostream>
using namespace std;

int main() {
    int n, factorial=1,z;
    cout<<"input for n factorial";
    cin>>n;
    for(int i=1; i<=n; i++){
        z = factorial * i;
        factorial = factorial + 1;
        cout<<z<<endl;
    }

}
*/

//Factors of a number ------

/*
#include<iostream>
using namespace std;

int main() 
{
    int n;
    cout<<"Give an input you want to check cofactors";
    cin>>n;
    for(int i; i<=n; i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    } 
    return 0;
}
*/

//find prime numbers----
/*
#include<iostream>
using namespace std;

int main()
{
    int i=1, n, counts = 0;
    cout<<"input for the number";
    cin>>n;
    if(i<=n)
    {
        if(n%i==0)
        {
            counts++;
        }
    }
    if(counts>=2)
    {cout<<"not a prime"<<counts<<endl;
    }
    else{
        cout<<"a prime"<<counts<<endl;
    }
}
*/

//Finding/Displaying digits of a number ----------------------
//use of basic definition of modulo and division -----
/* modulo give out the remainder of any division. eg- 1724%10 would give out 4
division for int will give out the proper division that is  eg - 1724 / 10 will give out 172 as 4 goes in the decimal hence avoid.*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n,r,count = 0;
    cout<<"input for the n";
    cin>>n;
    for(int i; i<=n; i++)
    {
        r = n%10;
        n = n/10;
        count ++;
    }
    cout<<count;
    return 0;
}
*/

//To check if armstrong numbers---------------------

/*
#include<iostream>
using namespace std;

int main(){
    int n,count = 0,r;
    cout<<"input for n";
    cin>>n;
    for(int i; i<=n;i++){
        r = n%i;
        n = n/i;
        count = r*r*r + count;
    }
    if(count = n){
        cout<<"armstrong number";
    }
    else{
        cout<<"Not armstrong number";
    }
}
*/

// REversing a number ---------------------------------------------
/*
#include<iostream>
using namespace std;

int main() {
    int n,m,rev = 0,r;
    cout<<"Enter n";
    cin>>n;
    m=n;
    while(n>0){
        r = n%10;
        n = n/10;
        rev = rev*10 + r;
    }
    cout<<"reverse no."<<rev;
}
*/


//Greatest common divisor-----------------------
/*
#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Input for n and m";
    cin>>n>>m;
    while(m!=n){
        if(m>n){
            m = m-n;
        }
        else if(m<n){
            n = n-m;
        }
    }
    cout<<m;
}
*/


//program to reverse a number and then checking if its equal to the number or it is a palindrome----
/*
#include<iostream>
using namespace std;

int main() {
    int n,r,q,rev;
    cout<<"Input for n";
    cin>>n;
    while(n>0){
        r = n%10;
        n = n/10;
        rev = r *10 + rev;
    }
    if(rev = n){
        cout<<"palindrom";
    }
    else{
        cout<<"not palindrome";
    }
}
*/


//Array can be of anytype------------ ie it can be float, int, character------

//Declaration of array using input for an Array -----

/*
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"input for the n(np. of arrays we want)";
    cin>>n;
    int A[n];                 //to to take user input for the array, first we should initialise the array.
    for(int i=0; i<=n-1; i++){
        cin>>A[i];
    }
    for(int j=0; j<=n-1; j++){
        cout<<A[j]<<endl;
    }
}
*/


//Adding all elements of array -------

/*
#include<iostream>
using namespace std;

int main(){
    int n,add = 0;
    cout<<"input for the n(np. of arrays we want)";
    cin>>n;
    int A[n];                 //to to take user input for the array, first we should initialise the array.
    for(int i=0; i<=n-1; i++)
    {
        cin>>A[i];
    }

    for(int j=0; j<=n-1; j++){
        add = add + A[j];

    }
    cout<<add;
}
*/


// Max element of an array.....
/*
#include<iostream>
using namespace std;

int main(){
    int n,v;
    cout<<"input for n";
    cin>>n;
    int A[n];
    for(int j; j<=n-1; j++){
        cin>>A[j];
    }
    for(int i; i!=0; i++){
        if(A[i]>A[i+1]){
            v = A[i];
        }
    }
    cout<<v;
}
*/


//Linear search -----------------------------------------------------

/*
#include<iostream>
using namespace std;
int main() {
    int n,m,count;
    cout<<"Input n";
    cin>>n;
    int A[n];
    for(int i; i<=n; i++){
        cin>>A[i];
    }
    int key;
    cout<<"Input key";
    cin>>key;

    for(int i; i<=n; i++){
        if(A[i]==key)
        {
            cout<<"key found"<<endl;
            return 0;
        }
        else{
            cout<<"invalid";
        }
    }
}
*/
/*
#include<iostream>
using namespace std;

int main() {
    for(int i=0; i<=5; i++){
        for(int j=0; j<=10; j++){
            cout<<"("<<i<<")"<<"("<<j<<")" <<endl;
        }
    }
}
*/


//Nested for loop patterm --------------------------------
/*
#include<iostream>
using namespace std;

int main(){
    int count = 1; 
    for(int i=0; i<4;i++){
        for(int j=0; j<4; j++){
            cout<<count<<" ";
            count++;}
        cout<<endl;
    }
}
*/

//This patter is not working -------
/*
#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<3;i++)
    {
        for(int j=0; j<3;j++)
        {
            if(i==j)
            {
                cout<<"*"<<" ";
                cout<<endl;
            }
            else if(i!=j)
            {
                cout<<"*"<<" ";
            }
        }
    }
}
*/


//Alternative for the pyramid problem---------------------------
/*#include<iostream>
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

//wrong code but actually differnet type of pyramid(upside down)
/*
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i<=j){
                cout<<"*"<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//This code makes out the same pyramid we wanted for the first problem------
/*#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++){

        for(int j=0; j<4; j++){ 
            if(i>=j){
                cout<<"*"<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
*/


//different pyramid spotted ------------------------------
/*
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i<=j){
                cout<<"*"<<" ";
            }
        }
        cout<<endl;
    }
}
*/

//Pyramid we actually wanted------
/*
#include<iostream>
using namespace std;

int main(){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(i>j){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
*/

//New perspective in building pyramid -------------
/*
#include<iostream>
using namespace std;

int main(){
    for(int i; i<4; i++){
        for(int j; j<4; j++){
           if(i+j>=3){
            cout<<"*"<<" ";
           } 
           else{
            cout<<" ";
           }
        }
    }
}
*/

/*
#include<iostream>
using namespace std;

int main() {
    int i,j,n;
    int A[2][3] = {2,3,4,5,6};
    for(int i=0;i<3;i++){
        for(int j=0; j<3;j++){
            cout<<A[i][j];
        }
        cout<<endl;
    }
}
*/

//Add two arrays -----------------------------------------
/*
#include<iostream>
using namespace std;

int main(){
    int A[2][3] = {2,4,45,23,652,23};
    int B[2][3] = {6,3,2,56,672,1};
    int C[2][3];

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++){
            C[i][j] = A[i][j] + B[i][j];
        }

    }

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
}
*/

//Matrix operation----------------------------------------------
/*
#include<iostream>
using namespace std;

int main(){
    int A[2][3] = {2,3,4,5,6,7};
    int B[2][3] = {2,3,4,5,6,7};
    int C[2][3];
    for(int i=0; i<2; i++){
        for(int j=0; j<3;j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i=0; i<2 ; i++){
        for(int j=0; j<3; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }

}
*/


//Pointers---------------------------------------------------------------------------------------------

//Initialisation of pointer(understanding of array)-----
/*
#include<iostream>
using namespace std;

int main(){
    int a = 293;
    int *p;
    p = &a;
    cout<<p<<endl<<&a<<endl<<*p<<endl<<&p<<endl<<&a;
}
*/

/*
#include<iostream>
using namespace std;

int main(){
    int *p;
    p= new int[5];
    p[0] = 12;
    p[1] = 144;
    cout<<p[0]<<endl;
    cout<<p[1]<<endl;

    delete []p;
    p = NULL;

    cout<<p[0];
}
*/



//understanding the pointers--------
/*#include<iostream>
using namespace std; 
int main(){
    int A[] = {2,4,6,8,10};
    int *p = A;
   // p = p+1;
    cout<<p<<endl;
    cout<<&A<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
    cout<<*A<<endl;
    cout<<*p+2<<endl;
    cout<<p+2<<endl;
}
*/


//Understanding Reference ------------------------------------------------
/*
#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int &y = x;
    int c = x;
    x++;
    y++;
    c++;
    cout<<x<<endl<<y<<endl<<c<<endl;
    cout<<&x<<endl<<&y<<endl<<&c<<endl;
    return 0;
}
*/


//STRINGS----------------------------------------------------------
/*#include<iostream>
using namespace std;
 
 
int main() {

char S[20];
cout<<"Enter your name";
cin>>S;
cout<<S;
}
*/

//issue of normal input syntax with STRING----------------------
/*#include<iostream>
using namespace std;

int main(){
    char s1[100];
    cout<<"Input for the s1";
    cin>>s1;
    cout<<s1;

}
*/


//Now the solution for the problem----------
/*
#include<iostream>
using namespace std;

int main(){
    char s1[100];
    cout<<"What is your name";
    cin.get(s1,100);
    cout<<s1;
}
*/


//Understanding cin.get and cin.getline for the following-------------
/* Notice the issue
#include<iostream>
using namespace std;

int main(){
    char s1[100];
    cout<<"input for the s1";
    cin.get(s1,100);
    cout<<s1;
    char s2[100];
    cout<<"input for the s2";
    cin.get(s2,100);
    cout<<s2;
}
*/

//Solving the issue for multiple input------------------------
/*#include<iostream>
using namespace std;

int main(){
    char s1[100];
    cout<<"Input for s1";
    cin.getline(s1,100);
    cout<<s1;
    char s2[100];
    cout<<"input for s2";
    cin.getline(s2,100);
    cout<<s2;
}
*/

//STRING FUNCTION -----------------------------------
//string lenght;
/*
#include<iostream>
#include<cstring>
#include<string.h>

using namespace std;

int main(){
    char s1[100];
    cout<<"input for the string";
    cin.getline(s1,100);
    cout<<s1<<endl;
    cout<<strlen(s1)<<endl;
}
*/

//Comparing strings
/*#include<iostream>
#include<string>

using namespace std;

int main() {
    string st1 = "Hello";
    string st2 = "World";

    cout<<st1.compare(st2);
    cout<<endl;
}
*/
/*
#include<iostream>
#include<string>

using namespace std;

int main() {
    string st1 = "Hello";
    string st2 = "Hello";

    cout<<st1.compare(st2);
    cout<<endl;
}
*/

//String pointer ------------- reverse iterators-------
/*#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1 = "hello World";
    string::iterator ola;
    for(ola = s1.begin(); ola!=s1.end(); ola++){
        cout<<*ola;
    }
}
*/


//Reverse pointers------
/*#include<iostream>
#include<string>
using namespace std;

int main(){
    string s1 = "Hello World";
    string::reverse_iterator ola;
    for(ola= s1.rbegin(); ola!= s1.rend() ; ola++)
    {
        cout<<*ola;
    }
}
*/

//Fucntion templating --------------------------------------------------------
/*
#include<iostream>
using namespace std;

template<class T>
T max(T x,T y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }

}

int main(){
    int c = ::max(10, 5);
    cout<<"This is "<<c<<endl;
    float d = ::max(10.5f, 5.9f);
    cout<<"this is "<<d<<endl;
}
*/


//practise on template function------------------------------------------------

/*
#include<iostream>
using namespace std;

template<class T>
T maxim(T x, T y)
{
    return (x>y)? x:y;
}

int main() {
   cout<< int maxim(3, 10);
   cout<< float maxim(3.4f, 6.31f);
}
*/

//Making a class and object hence using them dynamically---------------------------------------
/*
#include<iostream>
using namespace std;

class rectangle
{
    public:
    int length;
    int breath;
    int area(){
        return length * breath;
    }
    int perimeter(){
        return (length+breath)*2;
    }
};

int main() {
    rectangle r1,r2;
    r1.length = 10;
    r1.breath = 20;
    r2.length = 15;
    r2.breath = 88;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
}
*/


//Playing with classes and objects------implementing the scope resolution for better class utility ----------------------
/*
#include<iostream>
using namespace std;

class rectangle {
    private:
    int length;
    int breath;
    public:
    rectangle(int length, int breath);        //we dont use non parameterized constructor because its of no use.
    rectangle(rectangle &r);
    int setLength(int length);
    int settbreath(int breath);
    void getlength();
    void getlength();
    int area();
    int perimeter();
    bool issquare;
    ~rectangle();
};

int rectangle::area(){

}

*/




//In class by default everything is private whereas for the 
//The structure is default public and ready to use.....

//all the functions and the properties are same...........



//use of inheritance to our existing classes.................................................................
/*
#include<iostream>
using namespace std;

class rectangle{
private:
    int length;
    int breath;
public:
rectangle(int l=0, int b=0)
{
    length = l;
    breath = b;
    int getlength();
    int getbreath();
    void setlength(int l);
    void setbreath(int b);
    int area();
    int perimeter();
}
};

class cuboid:public rectangle
{
        private:
        int height;
        public:
        cuboid(int l=0, int b=0, int h=0)
        {
            height = h;
            setlength(l);
            getbreath(b);
        }
        int getheight();
        void setheight(int h);
        int volume()
        {
            return getlength()*getbreath()*height;
        }

        
};
*/

//You can use "Auto" function to auto implement the type of data type you are trying to solve or use init............
//decltype exist for similar purpose.

#include<iostream>
#include<memory>
using namespace std;

class Rectangle {
    private:
    int length;
    int breath;
    public:
    Rectangle(int l, int b){
        length = l;
        breath = b;
    }
    int area(){
        return length*breath;
    }
    int perimeter() {
        return 2*(length*breath);
    }
};

int main() {
    int n,m;
    cout<<"input for the l,b";
    cin>>n>>m;
    unique_ptr<Rectangle> ptr (new Rectangle(n,m));
    cout<<ptr->area();
    cout<<ptr->perimeter();
    return 0;

}
