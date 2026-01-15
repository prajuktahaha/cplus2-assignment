#include<iostream>
using namespace std;
int main(){
    int m , n;
    cout<<"Enter rows and columns : ";
    cin>>m>>n;
    int**mat = new int* [m];
    for(int i = 0 ; i < m ; i++)
    mat[i] = new int[n];
    cout<<"Enter matrix element : \n";
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j < n ; j++){
            cin>>mat[i][j];
        }
    }
    cout << "Matrix is : \n";
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cout << mat[i][j] << "";
        }
        cout<<endl;
    }
    for(int i = 0 ; i < m ; i++)
    delete [] mat [i];
    delete [] mat;
    return 0;
}
