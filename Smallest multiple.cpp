#include <iostream>
using namespace std;
int main()
{
    long int i=1,j,n,count;
    cout << "Enter divided by upto which number ";
    cin >>n;
    while(i!=0)
    {
        count = 0;
        for(j=1;j<=n;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count == n)
        {
            cout << i;
            break;
        }
        i++;
    }
}
