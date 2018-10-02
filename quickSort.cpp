#include<iostream>
using namespace std;

void QSort(int a[],int start,int end){
 if(start>=end)
  return;
 int p=a[end];
 int ind=start;
 for(int i=start;i<=end;i++){
  if(a[i]<=p){
  int temp=a[ind];
  a[ind]=a[i];
  a[i]=temp;
  ind++;
  }
  }
 QSort(a,start,ind-2);
 QSort(a,ind,end);
}
int main(){
 int a[7];
 for(int i=0;i<7;i++)
 cin>>a[i];
 QSort(a,0,6);
 for(int i=0;i<7;i++)
 cout<<a[i]<<" ";
 return 0;
}

 
  
 
