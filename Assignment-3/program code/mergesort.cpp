#include <iostream>
using namespace std;

void mergesort(float[],int,int);
void merge(float[],int,int,int);

int main() 
{ 
	float arr[50];
        int arr_size,i;
	cout<<"How many elements? ";
	cin>>arr_size;
	cout<<"Enter elements: ";
	for(i=0;i<arr_size;i++)
		cin>>arr[i];

        mergesort(arr, 0, arr_size - 1); 
  
        printf("\nSorted array is \n"); 
        for(i=0;i<arr_size;i++)
		cout<<arr[i]<<" ";
        return 0; 
} 

void mergesort(float arr[],int l,int r)
{
	int m;
	if(l<r)
	{
		m = l+(r-l)/2;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);

		merge(arr,l,m,r);
	}
	
}

void merge(float arr[],int l,int m,int r)
{
	int i,j,k,n1,n2;
	n1 = m-l+1;   //Length of left sub array
	n2 = r-m;     //Length of right sub array

	//Creating two temporary arrays
	float L[n1],R[n2];
	
	for(i=0;i<n1;i++)
		L[i] = arr[l+i];
	for(j=0;j<n2;j++)
		R[j] = arr[m+1+j];

	i=0;
	j=0;
	k=l;
	
	while(i<n1 && j<n2)
	{
		if(L[i] <= R[j])
		{
			arr[k] = L[i];
			i = i+1;
		}
		else
		{
			arr[k] = R[j];
			j = j+1;
		}
		k = k+1;
	}

	while(i<n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}
	
	while(j<n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}














