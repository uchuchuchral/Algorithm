/* on sar udur shalgah 
code by uchral 
2014.12.03*/
#include<iostream>
using namespace std;
      int undurJil(int jil){
          if (jil%400==0)
             {
              cout<<"\n Undur jil mun\n";
              return 1;
              }
          else                          
             if (jil%100!=0&&jil%4==0)
             {
                cout<<"\n Undur jil\n";                      
                return 1;             
             }
             else {
             cout<<" \n Undur jil bish\n";
             return 0;
             }
}    
          
          
int main(){
    int on,sar,udur;
    cout<<" on :";
    cin>>on;
    cout<<"\nsar :";
    cin>>sar;
    cout<<"\nudur :";
    cin>>udur;
              if(on>0)
              cout<<" zow on";
              else 
              cout<<"\n hudal on";
    
    switch (sar){
           case 1:     
           case 3:
           case 5:
           case 7:
           case 8:
           case 10:
           case 12:
                if (udur<=31 && udur>0)
                    cout<<"\n udur ok;";                         
                else 
                    cout<<"\n buruu udur bn";
                    break;
           case 2:

                if (undurJil(on)==0){
                    if(udur<29 && udur>0){
                       cout<<" \nudur zow bn";
                       }
                    else
                        cout<<" \nudur buruu bn";
                }
                else 
                     if (udur<30&&udur>0){
                        cout<<"\nudur zow bn";
                        }
                     else
                         cout<<"\nudur buruu bn";
                break;     
            case 4:
            case 6:
            case 9:
            case 11:
                 if(udur<31 && udur>0)
                    cout<<"\n udur zow bn";
                 else                                                                                
                    cout<<"\n buruu udur bn";
                    break;
            default:
                    cout<<" \n iim sar baihgui\n";
    }                  
                 system("pause");             
}
