#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void SortA(ll a[],int n){
 int temp;
 for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
   if(a[i]>a[j]){
     temp=a[i];
     a[i]=a[j];
     a[j]=temp;
   }
  }
 }
}

int main(){

 int T;
 cin>>T;
 for(int x=1;x<=T;x++){
 int n,k,count=0,j=0;
 cin>>n>>k;
 ll d[n];
 for(int i=0;i<n;i++)
 cin>>d[i];
 SortA(d,n);
 while(d[n-1]>0&&j<n){
 for(int t=k;t>0;t--){
 if(d[j]>0&&j<n)
  count++;
 j++;
}
 for(int i=j;i<n;i++)
  d[i]--;
}
cout<<"Case #"<<x<<": "<<count<<'\n';
}
return 0;
}
