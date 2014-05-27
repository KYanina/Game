#include <iostream>
#include "stdio.h"
#include <ctime>
#include <stdlib.h>
using namespace std;
int const n=10;
int const m=10;
int i,j;
int t[n][m]= {0};
void gameBoard()
{

    {
//        int const n=10;
//        int const m=10;
//        int i,j;
//        int t[n][m]= {0};
        for (i=0; i<n; i++)
        {
            for (int j=0; j<m; j++)
            {
                t[i][j]=0;
                cout.width(1);
                cout<<t[i][j]<<' ';

            }
            cout<<'\n';
        }
    }
}
int randomEl()
{

    int k = rand()%9;
    int l = rand()%9;
    t[k][l]=1;
    cout.width(1);
    cout<<t[k][l]<<' '<<k<<' '<<l;
    cout<<'\n';
    return l;
    return k;
}

int ship()
{
    gameBoard();
    randomEl();
    for (i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            p[i][j]= {0};
            int k,l;
            int ch;
            switch(ch)
            {

            case 1:


                cout<<"enter 1-2-3-4"<<endl;
                cin<<ch;

                (ch==1)
                {
                    p[k][l+1]=1&&p[k][l+2]=1&&p[k][l+3]=1;
                    cout<<p[i][j];
                }
                cout<<endl;
                break;
            }
            {
            case 2:

                cout<<"enter 1-2-3-4"<<endl;
                cin<<ch;

                (ch==2)
                {
                    p[k][l-1]=1&&p[k][l-2]=1&&p[k][l-3]=1;
                    cout<<p[i][j];
                }
                cout<<endl;
                break;
            }
            {
            case 3:

                cout<<"enter 1-2-3-4"<<endl;
                cin<<ch;

                (ch==3)
                {
                    p[k+1][l]=1&&p[k+2][l]=1&&p[k+3][l]=1;
                    cout<<p[i][j];
                }
                cout<<endl;
                break;
            }
            {
            case 4:

                cout<<"enter 1-2-3-4"<<endl;
                cin<<ch;

                (ch==4)
                {
                    p[k-1][l]=1&&p[k-2][l]=1&&p[k-3][l]=1;
                    cout<<p[i][j];
                }
                cout<<endl;
                break;
            }
            cout.width(1);
            cout<<t[i][j]<<' ';

        }
        cout<<'\n';
    }
    }

//int randomPlace(int **t)
//{
//
//    int k = rand()%9;
//    int l = rand()%9;
//    int r=1;
//    int m=r;
//    t[k][l]=1;
//    //return **t;
//cout<<t[k][l];
//}
