#include<iostream>
using namespace std;

int main(){
    int rows, colums;

    cout<<"Enter the number of rows : ";
    cin>>rows;

    cout<<"Enter the number of colums : ";
    cin>>colums;

    int arr1[100][100], arr2[100][100],sum[100][100];

    cout<<"Enter the Matrix1 :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            cin>>arr1[i][j];
        }
    }

    cout<<"Enter the Matrix2 :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            cin>>arr2[i][j];
        }
    }

    cout<<"Matrix that you have entered for number one :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Matrix that you have entered for number two :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }


    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            sum[i][j]=arr1[i][j] + arr2[i][j];
        }
    }


    cout<<"Sum of this matrix :\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < colums ; j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }

    }

