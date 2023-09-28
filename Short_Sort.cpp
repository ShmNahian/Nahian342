#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
    
        if(x[0]== 'a' || x[1] == 'b' || x[2]=='c')
        {
            cout << "YES" << endl;
        }else {
            cout << "No" << endl;
        }
    }
        
    return 0;
}
