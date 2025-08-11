
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    int r,c;
    cout << "Enter the no. of rows for matrix: "<<endl;
    cin>>r;
    cout<<"Enter the no. of columns for matrix: "<<endl;
    cin>>c;
    int Arr[r][c];
    for(int i=0;i<r;i++){
        cout<<"Enter elements of matrix for "<<i+1<<"st row: "<<endl;
        for(int j=0;j<c;j++){
            cin>>Arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<Arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
/*Output
Enter the no. of rows for matrix: 
3
Enter the no. of columns for matrix: 
3
Enter elements of matrix for 1st row: 
1
2
3
Enter elements of matrix for 2st row: 
4
5
6
Enter elements of matrix for 3st row: 
7
8
9
1 2 3 
4 5 6 
7 8 9 
*/