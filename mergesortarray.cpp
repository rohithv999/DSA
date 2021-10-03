#include<iostream>
#include<stdio.h>
using namespace std;
void Merge(int A[50],int B[50],int p, int q)
{
    
    int i = 0, j = 0, k = 0, C[50];
 
    
    while (i<p && j <q)
    {
        
        if (A[i] < B[j])
            C[k++] = A[i++];
        else if(A[i]==B[j])
        {
            C[k++]=A[i++];
            C[k++]=B[j++];
        }
        else
            C[k++] = B[j++];
    }
 
       while (i < p)
        C[k++] = A[i++];
 
    
    while (j < q)
        C[k++] = B[j++];

    cout<<"\nMerged array is as follows................."<<endl;
    for(i=0;i<p+q;i++)
        cout<<C[i]<<"\t";

}

 
int main()
{
	int m,n, i;
	cout<<"\nEnter the size of array 1"<<endl;
	cin>>m;
    cout<<"\nEnter the size of array 2"<<endl;
	cin>>n;
 
	int arr1[m],arr[n];
    cout<<"\nEnter element of array 1"<<endl;
	for(i = 0; i < m; i++)
	{
		cin>>arr1[i];
	}
    cout<<"\nEnter element of array 2"<<endl;
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
    Merge(arr1,arr,m,n);
 
	return 0;
}