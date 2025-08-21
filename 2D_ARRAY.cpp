#include<iostream>
using namespace std;

int main(){
    int rows, colums;

    cout<<"Enter the number of rows : ";
    cin>>rows;

    cout<<"Enter the number of colums : ";
    cin>>colums;

    int arr[100][100];
    cout<<"Enter the Matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            cin>>arr[i][j];
        }
    }

        cout<<"Your Final Matrix :\n";
        for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}
