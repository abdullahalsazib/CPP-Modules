#include <bits/stdc++.h>
using namespace std;

int main()
{
    
        int  arr_resultsize, i, j;

        int a[] = {1,2,4};
        int b[] = {1, 3, 4};

        int arr1size = sizeof(a )/ sizeof(int);
        int arr2size = sizeof(b) / sizeof(int);

        arr_resultsize = arr1size + arr2size;

        int c[arr_resultsize];

        for (i = 0; i < arr1size; i++)
        {
            c[i] = a[i];
        }
        for (i = 0, j = arr1size; j < arr_resultsize && i < arr2size; i++, j++)
        {
            c[j] = b[i];
        }
        
        for(int i = 0; i < arr_resultsize - 1; i++)
        {
            for(int j = i + 1; j < arr_resultsize; j++){
                if(c[i] > c[j])
                {
                    int tmp = c[i];
                    c[i] = c[j];
                    c[j] = tmp;
                }
            }
        }

        for(int i = 0; i < arr_resultsize; i++)
        {
            cout << c[i] <<" ";
        }
        return 0;
}
