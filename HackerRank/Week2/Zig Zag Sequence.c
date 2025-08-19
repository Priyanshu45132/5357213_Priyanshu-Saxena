#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int T;
    scanf("%d",&T);
    int r=0;
    while(r<T){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }     
    
    // now in increasinng 
    for(int j=0;j<n-1;j++){
        for(int k=0;k<n-j-1;k++){
            if(a[k]>a[k+1]){
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    int mid=(n-1)/2;
    int left=mid;int right=n-1;
    while(left<right){
        int temp=a[left];
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
    
    for (int h = 0; h < n; h++) {
    printf("%d", a[h]);
    if (h != n - 1) printf(" ");
}
printf("\n");
    r++;
}
return 0;
}                  
