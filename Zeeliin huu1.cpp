/* Zeeliin huu oloh bodlogo 
garaas 1) niit zeeleh mungunii hemjee
       2) niit heden sar zeeleh
       3) sariin huu 
 ugugdunu. 
 programm niit hedii hemjeenii huu tulhiig olno
 code by uchral 
 2014.12.12*/
 #include<iostream.h>
 #include<iomanip.h>
 using namespace std;
 int main(){
        double a, s=0;
        double i, g, d, b, c, p;
        cout<<"\nNiit zeeleh mungunii hemjee=";
        cin>>a;
        cout<<"\nNiit heden sar zeeleh ve? =";
        cin>>b;
        cout<<"\nSariin huu=";
        cin>>c;
        
        
        d=a/b;
        p=a;
        for(i=1;i<=b;i++){
            g=a/100*c;
            s=d+s+g;
            a=a-d;
            cout<<i<<" deh sar tuluh mungu="<<d+g<<endl;
            cout<<i<<" deh sar tuluh huu="<<g;
            cout<<"\n";
        }  
        cout<<"\nTanii niit tuluh mungu="<<fixed<<setprecision(4)<<s;                           
        s=s-p;
        cout<<"\nTanii niit tuluh huu="<<fixed<<setprecision(4)<<s<<"tugrug"<<endl;   
        system("pause");    
 }
