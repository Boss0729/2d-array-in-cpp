
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2;
    cout << "Enter the no. of rows for 1st matrix: "<<endl;
    cin>>r1;
    cout<<"Enter the no. of columns for 1st matrix: "<<endl;
    cin>>c1;
    cout << "Enter the no. of rows for 2nd matrix: "<<endl;
    cin>>r2;
    cout<<"Enter the no. of columns for 2nd matrix: "<<endl;
    cin>>c2;
    int Arr1[r1][c1];
    int Arr2[r2][c2];
    int Add[r1][c1];
    if(r1==r2 && c1==c2){
        cout<<"Enter 1st matrix"<<endl;
    for(int i=0;i<r1;i++){
        cout<<"Enter elements of matrix for "<<i+1<<"st row: "<<endl;
        for(int j=0;j<c1;j++){
            cin>>Arr1[i][j];
        }
    }
    cout<<"Enter 2nd matrix"<<endl;
    for(int i=0;i<r2;i++){
        cout<<"Enter elements of matrix for "<<i+1<<"st row: "<<endl;
        for(int j=0;j<c2;j++){
            cin>>Arr2[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<Arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<Arr2[i][j]<<" ";
        }
        cout<<endl;
    }   
    }
    else{
        cout<<"Matrix addtion cannot be done because size mismatched!!";
    }
    cout<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            Add[i][j]=Arr1[i][j]+Arr2[i][j];
        }
    }
    cout<<"Addition of matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<Add[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*Output
Enter the no. of rows for 1st matrix: 
3
Enter the no. of columns for 1st matrix: 
3
Enter the no. of rows for 2nd matrix: 
3
Enter the no. of columns for 2nd matrix: 
3
Enter 1st matrix
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
Enter 2nd matrix
Enter elements of matrix for 1st row: 
4
7
5
Enter elements of matrix for 2st row: 
6
8
1
Enter elements of matrix for 3st row: 
9
2
3
1 2 3 
4 5 6 
7 8 9 

4 7 5 
6 8 1 
9 2 3 

Addition of matrix is: 
5 9 8 
10 13 7 
16 10 12 */