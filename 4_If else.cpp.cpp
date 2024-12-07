#include<iostream>
using namespace std;

int main() 
{
  float marks;
  cout<<"Enter your marks:"<<endl;
  cin>>marks;
  
  if (marks>=20){
    cout<<"Congratulations!You Passed the exam."<<endl;
  }else{
    cout<<"Sorry.You failed the exam.Better luck next of time"<<endl;
  }
  return 0;
}