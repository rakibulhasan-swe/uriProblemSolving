#include<iostream>
#include<string.h>
#include<cstdio>
using namespace std;
int split(string s,int len,int year)
{
    int long long n=0;
    for(int i=0;i<len;i++){
        n=( n*10+ (s[i]-'0') )%year;
    }
    if(n==0)
        return 0;
    else
        return 1;
}
int main()
{
    char num[1000001];
    unsigned  long long len, n=0;
    int x,y,z;
    z=0;
    while(cin>>num)
    {
        len=strlen(num);
        if(z==1)
        cout<<endl;
        z=1;
        y=0;
        x=0;
        if( split(num,len,4)==0 && split(num,len,100) !=0 || split(num,len,400)==0 ){
             printf("This is leap year.\n");
             y=1;
             x=1;
         }
         if(split(num,len,15)==0){
           printf("This is huluculu festival year.\n");
            y=1;
         }
        if(split(num,len,55)==0 && x==1){
            printf("This is bulukulu festival year.\n");
        }
        if(y==0)
           printf("This is an ordinary year.\n");
    }
    return 0;
}
