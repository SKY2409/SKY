#include <iostream>
using namespace std;
int main()
{
    int n,i,term1=0,term2=1,nextterm=0;
    cout << "Enter the number of terms : -";
    cin >> n;
    cout << "* fibonacci series of even number upto *"<<n<<" Iterations \n";
    for(i=1;i<n;i++)
    {
            nextterm = term1 + term2;
            term1 = term2;
            term2 = nextterm;
            if(nextterm%2 == 0)
            {
                cout <<" "<< nextterm;
            }
    }
}

