
/*130. Дан целочисленный массив размера N. Преобразовать массив, увеличив все его серии наибольшей длины на один элемент.*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max=1;
    int k=1;
    int flags[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        flags[i] = 0;
    }
    for (int i=1; i<n; i++)
    {
        if(arr[i-1]==arr[i])
        {
            k++;
            if(max<k)  
                max=k;
        }
        else k=1;
    }
    k=1;
    for (int i=1; i<n; i++)
    {
        if(arr[i-1]==arr[i])
            k++;
        else 
            k=1;
        if(k==max)
        {
            for(int j=i; j>i-max-1; j--)
                flags[j]=1;
            if(max>1) 
                flags[i-max+1] = 2; 
        }
    }
    for(int i=0; i<n; i++)
    {
        if(flags[i]==0)
            cout<<arr[i]<<" ";
        else
        {
            if(flags[i]==2 && max>1 || flags[i]==1 && max==1)
            {
                for (int j=0; j<max+1; j++)
                    cout << arr[i] << " ";
            }
        }
    }
    
    return 0;
}

