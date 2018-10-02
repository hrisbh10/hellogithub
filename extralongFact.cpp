#include<iostream>
#include<vector>
using namespace std;

int main(){
 vector<int> f,c;
 int i,k,n;
 cin>>n;
 f[0]=1;
 for(i=2;i<=n;i++){
  for(k=0;k!=f.size();k++){
   f[k]*=i;
   if(k>0)
    f[k]+=c[k-1];
   if(f[k]/10>0){
    c[k]=f[k]/10;
    if(f[k+1]=='\0')
     f[k+1]=c[k];
   }
   f[k]%=10;
  }
}
for(i=f.size()-1;i>=0;i--)
 cout<<f[i];
return 0;
}
