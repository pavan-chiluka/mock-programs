#include<stdio.h>
#include<stdlib.h>
#define MAX 10
#define MAX1 5
int subarray(int *ptr1,int *ptr2,int len1,int len2);
int main()
{
        int arr1[MAX]={1,2,3,4,5,6,7,8,9,10};
        int len1=(sizeof(arr1)/sizeof(arr1[0]));
        int arr2[MAX1]={4,5,6,7,8};
        int len2=((sizeof(arr2))/(sizeof(arr2[0])));
       // printf("%d %d",len1,len2);
       subarray(arr1,arr2,len1,len2);
}
int subarray(int *ptr1,int *ptr2,int len1,int len2)
{
        int i,j,k,found=0;
        for(i=0;i<len1;i++)
        {
                if(ptr1[i]==ptr2[0])
                {
                        for(j=1,k=i+1;j<len2;j++,k++)
                        {
                                if(ptr1[k]!=ptr2[j])
                                {
                                        break;
                                }
                                if(j==len2-1)
                                {
                                        found=1;
                                }
                        }

                        if(found==1)
                        {
                                printf(" the sub array found and it starts from pos%d \n",i);
                        }
                }
        }

}


