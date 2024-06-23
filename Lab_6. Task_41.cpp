
/*41. Дан массив размера N (N>1). Найти два соседних элемента, сумма которых максимальна, и вывести эти элементы 
в порядке возрастания их индексов.*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int n;
    double temp1 = 0, temp2 = 0;
    cin >> n;
    if (n>1)
    {
        double arr[n];
        for (unsigned int i=0; i<n; i++)
            cin >> arr[i];
        double sum = arr[0]+arr[1];
        temp1 = arr[0];
        temp2 = arr[1];
        for (unsigned int i=1; i<n-1; i++)
        {
            double sum1 = arr[i]+arr[i+1];
            if (sum < sum1) 
            {
                sum = sum1;
                temp1 = arr[i];
                temp2 = arr[i+1];
            }
        }
        cout << temp1 << " " << temp2;
    }
    
    return 0;
}
