#include<bits/stdc++.h>
using namespace std;
void firstfit(int blocksize[],int m,int processSize[],int n)
{
    int allocation[n];
    memset(allocation,-1,sizeof(allocation));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(blocksize[j]>processSize[i])
            {
                allocation[i]=j;
                blocksize[j]-=processSize[i];
                break;
            }
        }
    }
    cout<<"\nProcess No. \tProcess Size\tBlock no.\n";
    for(int i=0;i<n;i++)
    {
        cout<<" "<<i+1<<"\t\t"<<processSize[i]<<"\t\t";
        if(allocation[i]!=-1)
        cout<<allocation[i]+1;
        else
        cout<<"Not Allocated";
        cout<<endl;
    }
}
int main()
{
    int blocksize[]={100,500,200,300,600};
    int m=sizeof(blocksize)/sizeof(int);
    int processSize[]={212,417,112,426};
    int n=sizeof(processSize)/sizeof(int);
    firstfit(blocksize,m,processSize,n);
}