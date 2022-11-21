#include<bits/stdc++.h>
using namespace std;
void worstfit(int blocksize[],int m,int processSize[],int n)
{
    int allocation[n];
    memset(allocation,-1,sizeof(allocation));

    for(int i=0;i<n;i++)
    {
        int worstidx=-1;
        for(int j=0;j<m;j++)
        {
            if(blocksize[j]>=processSize[i])
            {
                if(worstidx==-1)
                worstidx=j;
                else if(blocksize[worstidx]<blocksize[j])
                worstidx=j;
            }
        }
    if(worstidx!=-1)
    {
        allocation[i]=worstidx;
        blocksize[worstidx]-=processSize[i];
    }
    }
    cout<<"\nProcess No.\tProcess Size\tBlock No.\n";
    for(int i=0;i<n;i++)
    {
        cout<<" "<< i+1 <<"\t\t"<< processSize[i] <<"\t\t";
        if(allocation[i]!=-1)
        {
            cout<< allocation[i]+1;
        }
        else
        {
            cout<<"Not Allocated";
        }
        cout<<endl;
    }
}

int main()
{
     int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    int m = sizeof(blockSize)/sizeof(blockSize[0]);
    int n = sizeof(processSize)/sizeof(processSize[0]);
    worstfit(blockSize, m, processSize, n);
}