//
//  main.c
//  BinarySearchC
//
//  Created by duh8n on 2021/07/13.
//

#include <stdio.h>

int BinarySearch(int arr[], int first, int last, int target){
    int mid;
    
    while(first <= last){
        mid = (first+last)/2;
        if(arr[mid] == target){
            return arr[mid];
        } else if(arr[mid] < target){
            first = mid+1;
        } else if(arr[mid] > target){
            last = mid-1;
        }
    }
    
    return -1;
}

int main(int argc, const char * argv[]) {
    int arr[8] = {1, 3, 7, 12, 16, 20, 38, 55};
    
    for (int i = 0 ; i < 8 ; i++){
        printf("%d " ,arr[i]);
    }
    
    printf("%d", BinarySearch(arr, 0, 7, 3));
    return 0;
}
