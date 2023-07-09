#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4][4], x, y, z;
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 4; j++){
            cin >> a[i][j];
        }
    }
    
    /*for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }*/

    int adt = (a[1][1]*((a[2][2]*a[3][3])-(a[2][3]*a[3][2])))-(a[1][2]*((a[2][1]*a[3][3])-(a[2][3]*a[3][1]))) + (a[1][3]*((a[2][1]*a[3][2])-(a[2][2]*a[3][1])));

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            if(i==1 && j==1){
                x= a[i][j];
                a[i][j] = a[1][4];
            }
            else if(i==2 && j==1){
                y=a[i][j];
                a[i][j]=a[2][4];
            }
            else if(i==3 && j==1){
                z=a[i][j];
                a[i][j]=a[3][4];
          }
        }
    }
    int x1dt = (a[1][1]*((a[2][2]*a[3][3])-(a[2][3]*a[3][2])))-(a[1][2]*((a[2][1]*a[3][3])-(a[2][3]*a[3][1]))) + (a[1][3]*((a[2][1]*a[3][2])-(a[2][2]*a[3][1])));
    cout << setprecision(3) << fixed << (x1dt/float(adt)) << endl;
    a[1][1]=x;
    a[2][1]=y;
    a[3][1]=z;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
          if (i == 1 && j == 2)
          {
                x = a[i][j];
                a[i][j] = a[1][4];
          }
          else if (i == 2 && j == 2)
          {
                y = a[i][j];
                a[i][j] = a[2][4];
          }
          else if (i == 3 && j == 2)
          {
                z = a[i][j];
                a[i][j] = a[3][4];
          }
        }
    }
     int x2dt = (a[1][1]*((a[2][2]*a[3][3])-(a[2][3]*a[3][2])))-(a[1][2]*((a[2][1]*a[3][3])-(a[2][3]*a[3][1]))) + (a[1][3]*((a[2][1]*a[3][2])-(a[2][2]*a[3][1])));
     cout << setprecision(3) << fixed << (x2dt/float(adt)) << endl;

}

// x1 and x2 er value ber korci bakigula time er jnno korte parinai