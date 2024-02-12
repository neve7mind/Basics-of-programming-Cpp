//Мурашов Иван Вячеславович, НКАбд-04-23
/*30. Дан массив размера N. Найти номера тех элементов массива, которые больше своего правого соседа, и количество таких элементов. 
Найденные номера выводить в порядке их убывания. При отсутствии подобных элементов выведите 0.*/

#include <iostream>
using namespace std;

int main()
{
    int N, k=0;
    cin>>N;
    float arr1[N], arr2[k];
    for(int i=0; i<N; i++)
        cin>>arr1[i];
    for(int i=0; i<N-1; i++)
    {
        if(arr1[i]>arr1[i+1])
        {
            arr2[k]=i+1;
            k++;
        }
    }
    for(int i=0; i<k; i++)
	{
		for(int j=0; j<k-i-1; j++)
		{
			if(arr2[j]<arr2[j+1])
			{
				int tmp=arr2[j];
				arr2[j]=arr2[j+1];
				arr2[j+1]=tmp;
			}
		}
	}
	if(k==0)
	    cout<<k;
	else
	{
    	for(int i=0; i<k; i++)
            cout<<arr2[i]<<" ";
        cout<<endl<<k;
	}

    return 0;
}
