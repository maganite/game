#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    srand(time(0));
    int a=rand()% 10;
    int b;
    int c=1;
    cout<<"enter bw 0 and 10"<<" "<<"\n";
    while(c<=3)
    {
       cin>>b;
       if(b>a){
           cout<<"try lesser";
       }
       else if(b<a){
           cout<<"try bigger";
       }
       else if(a==b){
           cout<<"you won";
           break;
       }
        
       c++;
       
    }

    return 0;
}
