// Practice Homework Tasks from Lecture:

/*
Q1.Write a program that takes a character ch as input and checks if it is:
Lowercase (a to z)
Uppercase (A to Z)
Numeric (0 to 9)
*/
#include<iostream>
using namespace std;
int main(){
  char a;
  cin>>a;
  if(a>='A' && a<='Z'){
  cout<<"This is upper case";
  }
  else if(a>='a' && a<='z'){
    cout<<"This is lower case"<<endl;
  }
  else if(a>='0' && a<='9'){
    cout<<"This is digit"<<endl;
  }
  return 0;
}

// Q2. Sum of all Even Numbers from 1 to N
int sumOfEvenNumber(){
int n;
cin>>n;
int sum = 0;
int i = 2;
while(i<=n){
  sum+=i;
  i+=2;
}
cout<<"sum of First "<<n<<"even number is: "<<sum<<endl;
}

// Q3.Fahrenheit to Celsius conversion table using a loop
int fahrenheitToCelsius(){
  float fahrenheit;
  cin>>fahrenheit;
  float celsius = (5.0/9)*(fahrenheit - 32);
  cout<<fahrenheit << "F = "<<celsius<<" C"<<endl;
}


