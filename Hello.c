
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define ui unsigned int
#define si int
#define ul unsigned long
#define sl long
#define sd double

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define ui unsigned int
#define si int
#define ul unsigned long
#define sl long
#define sd double


char days[200001][2];
long n;
int partition(char arr[][2], long low, long high){
   char key;
    key = arr[low][0];
    while(low<high){
        while(low <high && arr[high][0]>= key )
            high--;
        if(low<high)
            arr[low++][0] = arr[high][0];
        while( low<high && arr[low][0]<=key )
            low++;
        if(low<high)
            arr[high--][0] = arr[low][0];
    }
    arr[low][2] = key;
    return low;
}
void quick_sort(char arr[][2], long start, long end){
   long pos;
    if (start<end){
        pos = partition(arr, start, end);
        quick_sort(arr,start,pos-1);
        quick_sort(arr,pos+1,end);
    }
    return;
}

   
int main(int num ,char *arg[])
{
 
  //quick_sort(arr,0,N-1);
    return 0;
}
