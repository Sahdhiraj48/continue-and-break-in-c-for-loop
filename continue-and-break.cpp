/*program in which a girl has RS 3000 and can go out only on odd date of month and till she has money once money is end she can no longer go out of home*/
#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=3000;
    cout<<"days"<<"\t"<<"result"<<endl;
    for(int i=1;i<=30;i++)
    {
        if(i%2==0)
        {continue;}
        if(pocketmoney==0)
        {break;}
        cout<<i<<"\t"<<"she can go out"<<endl;
        pocketmoney=pocketmoney-300;

    }
    return 0;
}