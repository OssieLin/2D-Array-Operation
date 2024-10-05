#include <iostream>

using namespace std;

void clockwise(int Arr[100][100], int r, int c)
{
    int T[100][100];//to store the array after rotation
    
    for(int i=0; i<c; i++){
        for(int j=0; j<r;j++){
            T[i][j]=Arr[r-1-j][i];
        }
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%2d  ", T[i][j]);
        }
        cout << endl;
    }
}

void counterclockwise(int Arr[100][100], int r, int c)
{
    int T[100][100];//to store the array after rotation
    
    for(int i=0; i<c; i++){
        for(int j=0; j<r;j++){
            T[i][j]=Arr[j][c-1-i];
        }
    }

    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%2d  ", T[i][j]);
        }
        cout << endl;
    }
}

void mirror_upside_down(int Arr[100][100], int r, int c)
{
    int T[100][100];//to store the array after mirrioring
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c;j++){
            T[i][j]=Arr[r-1-i][j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%2d ", T[i][j]);
            cout << " ";
        }
        cout << endl;
    }
}

void mirror_left_right(int Arr[100][100], int r, int c)
{
    int T[100][100];//to store the array after mirrioring
    
    for(int i=0; i<r; i++){
        for(int j=0; j<c;j++){
            T[i][j]=Arr[i][c-1-j];
        }
    }

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%2d  ", T[i][j]);
        }
        cout << endl;
    }
}


int main()
{
    int r,c;
    int A[100][100];

    while(cin >> r >> c)
    {
        for(int i=0; i<r; i++){
            for(int j=0; j<c;j++){
                cin >> A[i][j];
            }
        }

        cout << endl << "Original Array: " << endl;
        for(int i=0; i<r; i++){
            for(int j=0; j<c;j++){
                printf("%2d  ", A[i][j]);
            }
            cout << endl;
        }
        
        cout << endl << "Rotate 90 degrees clockwise: " << endl;
        clockwise(A,r,c);
        cout << endl;

        cout << "Rotate 90 degress counterclockwise: " << endl;
        counterclockwise(A,r,c);
        cout << endl;

        cout << "Mirror upside down: " << endl;
        mirror_upside_down(A,r,c);
        cout << endl;

        cout << "Mirror left and right: " << endl;
        mirror_left_right(A,r,c);
        cout << endl;
    }
    
    return 0;
}