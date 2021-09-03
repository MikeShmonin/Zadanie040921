#include <iostream>
 #include <string>
 using namespace std;

 int main()
 {
     int a, b=0, x=0;
     cin >> a;
     while (a/10>0) {
         x=a%10;
         b=b*10+x;
         a=a/10;
     }
     b=b*10+a;
     cout << b << endl;
 return 0;
 } 