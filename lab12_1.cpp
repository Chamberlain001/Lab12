#include <bits/stdc++.h>
using namespace std;
 
string printRandomString(){
   string alphabet[9] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    string res = "";
    res = alphabet[rand() % 9];
    return res;
}
int main(){
   cout << "Press Enter 3 times to reveal your future.";
   for(int i = 0; i < 3; i++){
        cin.get();
   }
   srand(time(0));
   cout << "You will get " << printRandomString() << " in this 261102.";
   return 0;
}