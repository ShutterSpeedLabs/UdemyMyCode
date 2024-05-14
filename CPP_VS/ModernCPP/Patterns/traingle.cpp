#include <iostream>
#include <string>

using namespace std;

int main(){
    string inputString;
    cin >> inputString;
    int strLen = inputString.size();
    int i, j , k , m;
    for( i=0;i<strLen;i++){
        for( j=i;j<strLen-1;j++){
            cout << "  ";
        }
        for( k=0;k<=i;k++){
            cout << inputString[k] << " ";
        }

        for( m=0;m<i;m++){
            cout << inputString[k - m - 2] << " ";
        }
        cout << endl;

        
    }

}