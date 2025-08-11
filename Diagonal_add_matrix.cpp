
//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;

int main() {
    int r1,c1;
    cout << "Enter the no. of rows for 1st matrix: "<<endl;
    cin>>r1;
    cout<<"Enter the no. of columns for 1st matrix: "<<endl;
    cin>>c1;
    int Arr1[r1][c1];
    int add=0;

    cout<<"Enter matrix"<<endl;
    for(int i=0;i<r1;i++){
        cout<<"Enter elements of matrix for "<<i+1<<"st row: "<<endl;
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

    cout<<endl;
    for(int i=0;i<r1;i++){
        for(int j=i;j<c1;j++){
            if(i==j){
            add+=Arr1[i][j];
            
        }
            else{
                break;
            }
        }
        }
        cout<<add;
}
/*Output
Enter the no. of rows for 1st matrix: 
3
Enter the no. of columns for 1st matrix: 
3
Enter matrix
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
1st matrix is: 
1 2 3 
4 5 6 
7 8 9 

15
*/