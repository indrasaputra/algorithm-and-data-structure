#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <utility>
#include <bitset>
#include <stack>
#include <queue>

#define fi first
#define sc second

using namespace std;

typedef pair<int,int> cell;

int grid[105][105];
int r,c;
int fill_count = 1;
bool is_visited[105][105];
stack<pair<int,int> > my_stack;

int main()
{
    r = c = 10;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            grid[i][j] = fill_count++;
        }
    }

    my_stack.push(cell(0,0));
    while(!my_stack.empty())
    {
        cell current = my_stack.top();
        my_stack.pop();
        int x = current.fi;
        int y = current.sc;
        if(x>=0 && x<r && y>=0 && y<c && !is_visited[x][y])
        {
            is_visited[x][y] = true;
            my_stack.push(cell(x+1,y));
            my_stack.push(cell(x-1,y));
            my_stack.push(cell(x,y+1));
            my_stack.push(cell(x,y-1));
        }
    }

    return 0;
}