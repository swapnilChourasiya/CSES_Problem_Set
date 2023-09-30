#include <iostream>

using namespace std;

int main() {
   int n;cin>>n;
   int sumGiven=0;
   int sumOfNNumbers = n*(n+1)/2;
   n = n-1;
   while(n--) {
       int x; cin>>x;
       sumGiven +=x;
       
   }
   
   cout<<sumOfNNumbers - sumGiven<<endl;
       
}