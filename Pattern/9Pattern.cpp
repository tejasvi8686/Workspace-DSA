#include<iostream>
using namespace std;
// inverted pyramid
int main (){

    int n;
    cin >>n;

    for (int row=0; row<n; row=row+1){
        //for space 
        for (int col=0; col< row; col=col+1){
            cout <<" ";
        }
        // for star
        for (int col=0; col<n-row; col=col+1){
            cout <<"* ";
        }
        cout << endl;
    }
    return 0;
}