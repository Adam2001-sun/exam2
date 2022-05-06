#include<iostream>

using namespace std;


int sumOfCube(int n){
 
if (n<=0){
    return 0;
}

return n*n*n+sumOfCube(n-1);
}

// //test
// int main(){
// int n=3;
//     cout << sumOfCube(n) << endl;
// }