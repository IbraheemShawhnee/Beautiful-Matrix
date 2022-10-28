#include<string>
#include<vector>
#include<cctype>
#include <iostream>
#include <cstring>

using namespace std;
int countColumn(int array[5][5], int y)
{
    int flaqcol=0;
    while(y!=2)
    {
        flaqcol++;
        if(y>2)
        {
            y--;
        }
        else if(y<2)
        {
            y++;
        }
    }
    return flaqcol;
}
int countRow(int array[5][5], int x)
{
    int flaqrow=0;
    while(x!=2)
    {
        flaqrow++;
        if(x>2)
        {
            x--;
        }
        else if(x<2)
        {
            x++;
        }
    }
    return flaqrow;
}
int main()
{
    int beautifulMatrix[5][5];
    int indexX, indexY, sumSteps=0;
    for(int i=0 ; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin>>beautifulMatrix[i][j];
        }
    }

    for(int i=0 ; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(beautifulMatrix[i][j]==1)
            {
                indexX=i;
                indexY=j;
            }
        }
    }
    sumSteps=countColumn(beautifulMatrix, indexY)+countRow(beautifulMatrix, indexX);
    cout<<sumSteps;
    return 0;
}
//IbraMAINeem
