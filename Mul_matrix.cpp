
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
    int mul[r1][c1];
    
    if(r1==c2 && c1==r2){
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
    cout<<"1st matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cout<<Arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"2st matrix is: "<<endl;
    cout<<endl;
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<Arr2[i][j]<<" ";
        }
        cout<<endl;
    }   
    }
    else{
        cout<<"Matrix Multiplication cannot be done!!";
    }
    cout<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            
            mul[i][j]=Arr1[i][j]*Arr2[i][j];
        }
        }
    
    cout<<"Multiplication of matrix is: "<<endl;
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*Output
Enter the no. of rows for 1st matrix: 
2
Enter the no. of columns for 1st matrix: 
2
Enter the no. of rows for 2nd matrix: 
2
Enter the no. of columns for 2nd matrix: 
2
Enter 1st matrix
Enter elements of matrix for 1st row: 
1
2
Enter elements of matrix for 2st row: 
3
4
Enter 2nd matrix
Enter elements of matrix for 1st row: 
1
2
Enter elements of matrix for 2st row: 
3
4
1st matrix is: 
1 2 
3 4 
2st matrix is: 

1 2 
3 4 

Multiplication of matrix is: 
1 4 
9 16 */