#include<bits/stdc++.h>
using namespace std;

int turn_toggle_kth_bit(int x,int k)
{
    return(x^((1 << k)));
}
int main()
{
 cout<<turn_toggle_kth_bit(44,3)<<endl;
return 0;
}
///44 er 3th bit ke toggle(1 to 0) korle 32+4=36 hoy.
