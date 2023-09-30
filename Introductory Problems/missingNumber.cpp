#include <iostream>

using namespace std;

int main() {
   long long n;cin>>n;
   long long sumGiven=0;
   long long sumOfNNumbers = n*(n+1)/2;
   n = n-1;
   while(n--) {
       long long x; cin>>x;
       sumGiven +=x;
   }
   
   cout<<sumOfNNumbers - sumGiven<<endl;
    
    return 0;
}