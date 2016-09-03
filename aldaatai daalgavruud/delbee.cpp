/*Garaas oruulsan Tsaguudiin zuruug hamgiin oirhonoor oldog programm 
code by uchral
2014.12.01
*/
#include<iostream>
#include<stdio.h>
#include<math.h>
#define p 86400
using namespace std;
int main(){
      int s,s1,l1,m1,k,l,m,t,t1;
      cout<<"ehnii tsagiig oruul=";
      cin>>t;
      cout<<"ehnii minutiig oruul=";
      cin>>m;
      cout<<"ehnii sekundiig oruul=";
      cin>>s;
      cout<<"2dahi tsagiig oruul=";
      cin>>t1;
      cout<<"2dahi minutiig oruul=";
      cin>>m1;
      cout<<"2dahi sekundiig oruul=";
      cin>>s1;
      t=t*3600;
      m=m*60;
      t=t+m+s;
      t1=t1*3600;
      m1=m1*60;
      t1=t1+m1+s1;
      if (t>t1)
      {
      l=t-t1;
      l1=p-t+t1;
      }                                                                                                                                 
      else {
      l=t1-t;
      l1=p-t1+t;
      }
           
      cout<<"L="<<l<<"\t L1="<<l1<<endl;
      cout<<"L="<<l<<"\t L1="<<l1<<endl;
      cout<<"L="<<l<<"\t L1="<<l1<<endl;
     if (l<l1){
       k=l/3600;        
       s1=l-(k*3600);
       l1=s1/60;
       s=s1%60;
       }
     else {
       k=l1/3600;
       s1=l1-(k*3600);
       l1=s1/60;
       s=s1%60;    
       }
      cout<<"zuruu="<<k<<"tsag"<<l1<<"minut"<<s<<"sekund"<<endl;    
          system("pause");          
}
          
          
