/* c++ prograam to print the following pattern
n =5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/
#include <bits/stdc++.h>
using namespace std;
class star {
    public:
    void display(int n) {
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= i; j++) {
                cout << j << " ";
            }
                cout << endl;
        }
    }
};
int main()
{
     int t;
     cout << "enter the value of t : " << endl;
     cin >> t;
   
    star obj;
    obj.display(t);
    
    return 0;
}