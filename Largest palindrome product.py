#include <iostream>
using namespace std;
int main()
{
    int i,j,fnum=0,num=0,sum,r,l=0;
    for(i=999;i>0;i--)
    {
        for(j=999;j>0;j--)
        {
        	sum=0;
            num = i*j;
            fnum=num;
            while(num!=0)
            {
                r = num%10;
                sum = sum*10+r;
                num = num/10;
            }
            if(fnum == sum)
            {
                cout << sum;
                l=1;
                break;
            }
        }
        if(l==1)
            {
            	break;
			}
    }
    
}