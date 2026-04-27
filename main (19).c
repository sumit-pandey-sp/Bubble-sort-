/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdbool.h>

int main()
{
    int arr[]={1,2,3,4};
    int n=4;
    bool swap;
    for(int i=0;i<n-1;i++){
        swap=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap=true;
            }
            
        }
        if(swap==false){
            break;
        }
    
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    


    return 0;
}