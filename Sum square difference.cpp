#include <iostream>
using namespace std;
int main()
{
    int i,n,suofsq=0,sqofsu=0,final=0;
    cout << "Enter the range of your ";
    cin >> n;
    for(i=0;i<=n;i++)
    {
        suofsq = suofsq + i*i;
        sqofsu = sqofsu + i;
    }
    sqofsu = sqofsu * sqofsu;
    final =sqofsu - suofsq;
    cout << final;
}
