
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int A[20], i, x,n;

    printf("Enter the array elements\n");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("search key ...\n");
    scanf("%d",&x);

    for(i=0;i<n;i++)
    {
      if(A[i]==x)
        break;
    }
    printf("array index %d",i);

    return 0;
}
