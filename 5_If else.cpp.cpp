#include <iostream>
using namespace std;

int main(){
  int num;
  
  cout<<"Enteer a number(10-20)"<<endl;
  cin>>num;
  
  if(num>=10&&num<=20){
    cout<<"The number"<<" "<<num<<" "<<"ranges between (10-20)"<<endl;
  }else{
    cout<<"The number"<<" "<<num<<" "<<"does not ranges between (10-20)"<<endl;
  }
  return 0; 

}