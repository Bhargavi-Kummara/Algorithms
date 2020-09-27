#include <iostream> 
using namespace std;
 
void quicksort(float[],int,int);
int partition(float[],int,int);

int main()
{
    float a[50];
    int n,i;
    cout<<"How many elements?: ";
    cin>>n;
    cout<<"\nEnter array elements: ";
    
    for(i=0;i<n;i++)
        cin>>a[i];
        
    quicksort(a,0,n-1);
    cout<<"\nArray after sorting:";
    
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    return 0;        
}
 
void quicksort(float a[],int l,int u)
{
    int j;
    if(l<u)
    {
        j=partition(a,l,u);
        quicksort(a,l,j-1);
        quicksort(a,j+1,u);
    }
}
 
int partition(float a[],int l,int u)
{
    float pivot,temp;
    int i,j;
    pivot=a[l];
    i=l;
    j=u+1;
    
    do
    {
        do
            i++;
            
        while(a[i]<pivot && i<=u);
        
        do
            j--;
        while(a[j]>pivot);
        
        if(i<j)
        {
        	temp = a[i];
		a[i] = a[j];
		a[j] = temp;
        }
    }while(i<j);
    
    a[l] = a[j];
    a[j] = pivot;

    return j;
}
