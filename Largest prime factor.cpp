#include <iostream>
using namespace std;
int main()
{
    int num,count,LPrime=0,i,j;
    cout<<"Enter the number : - ";
    cin>>num;
    cout << "The largest Prime Factor of given number \n";
    for(i=1;i<=num;i++)
    {
        if(num%i==0)//It is a Factor
        {
            count = 0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                 	count++;
                }
            }
            if(count == 2)
        	{
                LPrime = i;
       		}
        }
    }
    cout << LPrime;
}	
