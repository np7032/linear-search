#include <iostream>
using namespace std;
int main() {
int arr[5]={2,4,8,10,12};
  int n=5,i;
  int target =10;
  bool flag=0;
  for(i=0;i<n;i++){
     if(arr[i]==target)
     {
       flag=1;
       break;
     }
    
  }
  if(flag==1){
    cout<<"target found"<<endl;
    
    
  }
  else{
    cout<<"target not found";
  }
}