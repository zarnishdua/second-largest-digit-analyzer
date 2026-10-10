#include<iostream>
using namespace std;
int second_largest(int n){
    int largest=-1;
    int second_large=-1;
    int lastdigit;
while(n>0){
    lastdigit=n%10;
    if(lastdigit>largest){
        second_large=largest;
        largest=lastdigit;
    }
     else if(lastdigit<largest && lastdigit>second_large)
            second_large=lastdigit;
   n=n/10;
}
  return second_large;
}
int main(){
int a;
cout<<"Enter a number :";
cin>>a;
if(a<0)
cout<<"Please enter positive number :";
 int result=second_largest(a);
if(result==-1)
 cout<<"There is no second largest digit";
else
    cout<<"The second largest digit is "<<result;
return 0;
}
