#include<bits/stdc++.h>
using namespace std;
int arr[1030][1030];
pair<int,int> a[3];

void QAQ(int row,int col,int n,int x,int y){
    if(n==1)return;
    if(n==2){
        int ind=0;
        for(int i=row;i<=row+1;i++){
            for(int j=col;j<=col+1;j++){
                if(!arr[i][j]){
                    a[ind].first=i; a[ind].second=j;
                    ind++;
                }
            }
        }
        Report(a[0].first,a[0].second,a[1].first,a[1].second,a[2].first,a[2].second);
        return;
    }
    int midrow=row+(n/2)-1;int midcol=col+(n/2)-1;
    if(x>midrow&&y>midcol){
        arr[midrow][midcol]=1;arr[midrow+1][midcol]=1;arr[midrow][midcol+1]=1;
        Report(midrow,midcol,midrow+1,midcol,midrow,midcol+1);
        QAQ(row,col,n/2,midrow,midcol);
        QAQ(row,midcol+1,n/2,midrow,midcol+1);
        QAQ(midrow+1,col,n/2,midrow+1,midcol);
        QAQ(midrow+1,midcol+1,n/2,x,y);
    }else if(x>midrow){
        arr[midrow][midcol]=1;arr[midrow+1][midcol+1]=1;arr[midrow][midcol+1]=1;
        Report(midrow,midcol,midrow+1,midcol+1,midrow,midcol+1);
        QAQ(row,col,n/2,midrow,midcol);
        QAQ(row,midcol+1,n/2,midrow,midcol+1);
        QAQ(midrow+1,col,n/2,x,y);
        QAQ(midrow+1,midcol+1,n/2,midrow+1,midcol+1);
    }else if(y>midcol){
        arr[midrow][midcol]=1;arr[midrow+1][midcol+1]=1;arr[midrow+1][midcol]=1;
        Report(midrow,midcol,midrow+1,midcol+1,midrow+1,midcol);
        QAQ(row,col,n/2,midrow,midcol);
        QAQ(row,midcol+1,n/2,x,y);
        QAQ(midrow+1,col,n/2,midrow+1,midcol);
        QAQ(midrow+1,midcol+1,n/2,midrow+1,midcol+1);
    }else{
        arr[midrow][midcol+1]=1;arr[midrow+1][midcol+1]=1;arr[midrow+1][midcol]=1;
        Report(midrow,midcol+1,midrow+1,midcol+1,midrow+1,midcol);
        QAQ(row,col,n/2,x,y);
        QAQ(row,midcol+1,n/2,midrow,midcol+1);
        QAQ(midrow+1,col,n/2,midrow+1,midcol);
        QAQ(midrow+1,midcol+1,n/2,midrow+1,midcol+1);
    }
    return;
}
void solve(int n,int x,int y){
    arr[x][y]=1;
    QAQ(1,1,n,x,y);
    return;
}
