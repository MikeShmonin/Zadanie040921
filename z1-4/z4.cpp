#include <iostream>
 #include <string>
 using namespace std;

 int main()
 {
     int x;
     string ans="";
      while (true) {
     cout << "Do you want to find degree of x? " << endl;
     cin >> ans;
     if (ans == "yes") {
     cout << "Enter number: " << endl;
     cin >> x;
     x=pow(x, 3);
     cout << "x^3 = " << x << endl;}
     if (ans == "no") {break;}
     if (ans != "yes" && ans != "no") {cout << "Error" << endl; break;}
     }
 return 0;
 }