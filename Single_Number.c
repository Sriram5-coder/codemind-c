#include<stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d ", &arr[i]);
    }
    for(int i=0 ; i<n ; i++)
    {
        bool se = true;
        if(arr[i]==-1)
            continue;
        for(int j=i+1 ; j<n ; j++){
            if(arr[i]==arr[j]){
                arr[j]=-1;
                se = false;
            }
        }
        if(se){
            printf("%d ", arr[i]);
        }
    }
}