#include <iostream>
using namespace std;
int main()
{
    int i=2,j,n,count,primecount;
    cout<<"Enter the nth prime number ";
    cin >> n;
    while(i)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            primecount++;
        }
        if(primecount == n)
        {
            cout <<i;
            break;
        }
        i++;
    }
    
}
