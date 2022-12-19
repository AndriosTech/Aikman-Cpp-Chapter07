#include <iostream>
using namespace std;

int main() {
   void isPrime(int*);
   int p;
   cout<<"Enter number:"<<endl;
   cin>>p;
   isPrime(&p);
   return 0;
}
void isPrime(int *n) {
   int i, flag = 0;
   for(i=2; i<=*n/2; i++) {
      if(*n%i==0) {
         flag=1;
         break;
      }
   }
   if (flag==0)
   cout<<*n<<" is a prime number"<<endl;
   else
   cout<<*n<<" is not a prime number"<<endl;
}
