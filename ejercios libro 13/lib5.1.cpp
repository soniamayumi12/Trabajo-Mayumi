#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
int n, i,suma = 1;suma = 0;
{
cout << " valor de n > 0 ";
cin >> n;
} while (n <= 0);
while (i <= n)
{
suma += i;
i++;
}
cout << " valor de la suma "<< suma << endl ;

}
//la salida es valor de n>0 4
// valor de la suma es 10