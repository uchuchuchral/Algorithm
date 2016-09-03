#include<iostream>
#define p 24
using namespace std;
int sekund(int n, int m, int s){
          n=n*3600;
          m=m*60;
          int a=n+m+s;
          return a;   
        }        
int main(){
          int k,h,m,s,h1,m1,s1,a,b; 
          cout<<"h ehnii tsagiig oruul- ";
          cin>>h;
          cout<<"m ehnii minutiig oruul- ";
          cin>>m;
          cout<<"s ehnii sekundiig oruul- ";
          cin>>s;
          cout<<"h1 daraagiin tsagiig oruul- ";
          cin>>h1;
          cout<<"m1 daraagiin minutiig oruul- ";
          cin>>m1;
          cout<<"s1 daraagiin sekundiig oruul- ";
          cin>>s1;
          
          
          
          
          
          if(h>h1){         
          h1=h1+p;
          h1=h1*3600;
          m1=m1*60;
          a=h1+m1+s1;
          h=h*3600;
          m=m*60;
          b=h+m+s;
          a=a-b;
          }
          
          else {
          h=h+p;
          h=h*3600;
          m=m*60;      
          h1=h1*3600;
          m1=m1*60;
          b=h1+m1+s1;
          a=h+m+s;
          a=a-b;
          }
          h=a/3600;
          s=a%60;
          m=a%3600;
          m=m/60;
          cout<<h<<"tsag"<<m<<"minut"<<s<<"sekund";
          system("pause");
}
