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