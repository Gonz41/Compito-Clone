/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Alessandro Gonzalez 30/03/2023  
*/

# include <iostream>
using namespace std;
int main()
{
  int i=0; 
int n;
  cout<<"Quante volte voi stampare la frase? ";
  cin>>n;
  while (i<n)
  {
   cout<<"Bada come la fuma"<<endl; 
        i++; 
  }
  system("pause");
}
