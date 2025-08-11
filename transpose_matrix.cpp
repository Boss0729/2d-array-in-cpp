//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2;
    cout << "Enter the no. of rows of matrix: "<<endl;
    cin>>r1;
    cout<<"Enter the no. of columns of matrix: "<<endl;
    cin>>c1;
    int Arr1[r1][c1];
    
    cout<<"Enter matrix"<<endl;
    for(int i=0;i<r1;i++){
        cout<<"Enter elements of matrix for "<<i+1<<" row: "<<endl;
        for(int j=0;j<c1;j++){
            cin>>Arr1[i][j];
        }
    }
    cout<<"1st matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<Arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    r2=c1;
    c2=r1;
    int t[r2][c2];
    cout<<"Transposed matrix is: "<<endl;
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            t[i][j]=Arr1[j][i];
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
}
/*Output
Enter the no. of rows of matrix: 
3
Enter the no. of columns of matrix: 
3
Enter matrix
Enter elements of matrix for 1 row: 
1
2
3
Enter elements of matrix for 2 row: 
4
5
6
Enter elements of matrix for st row: 
7
8
9
1st matrix is: 
1 2 3 
4 5 6 
7 8 9 
Transposed matrix is: 
1 4 7 
2 5 8 
3 6 9 */