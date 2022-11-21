#include<bits/stdc++.h>
using namespace std;
void bestFit(int blockSize[],int m,int processSize[],int n)
{
    int allocation[n];
    memset(allocation,-1,sizeof(allocation));
    for(int i=0;i<n;i++)
    {
        int bstidx=-1;
        for(int j=0;j<m;j++)
        {
            if(blockSize[j]>=processSize[i])
            {
                if(bstidx==-1)
                bstidx=j;
                else if(blockSize[bstidx]>blockSize[j])
                bstidx=j;
            }
        }
        if(bstidx!=-1)
        {
            allocation[i]=bstidx;
            blockSize[bstidx]-=processSize[i];
        }
    }
    cout<<"\n Procees No.\t Process Size\tBlock no.\n";
    for(int i=0;i<n;i++)
    {
        cout<<"  "<< i+1 << "\t\t" << processSize[i]<< "\t\t";
        if(allocation[i]!=-1)
        cout<<allocation[i]+1;
        else
        cout<<"Not allocated";
        cout<<endl;
    }
}
int main()
{
    int blockSize[] = {100, 500, 200, 300, 600};
    int processSize[] = {212, 417, 112, 426};
    int m = sizeof(blockSize)/sizeof(blockSize[0]);
    int n = sizeof(processSize)/sizeof(processSize[0]);

    bestFit(blockSize, m, processSize, n);

    return 0 ;
}