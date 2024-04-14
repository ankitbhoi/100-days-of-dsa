// A)mid find crow
// b)break 2 half
// c)recursion ka use krke 2 halves ko sort kr lenge
// d)2 half ko merge kar lo

#include<bits/stdc++.h>
using namespace std;

// yeh merge wala logic jo hai wo lagega parent array me agar man lo unit element tak gaye and uske parent pe do elements honge to yahan below function pe kaam ham wo do element wale array pe kar rhe hai and usika start and end yahan receive kia gya hain!
// ek copy bana rhe hai array ko beech se divide krke left side ka ek aur right side ka ek naya array pe copy kar lerhe hai elements original wale taki wo kho na jae jab sort karein ham
// 
void merge(int arr[], int s, int e){

    int mid = s + (e - s) / 2; 

    //copy array ka length specify kia jarha hai 
    int len1 = mid - s + 1;
    int len2 = e - mid;

    //new arrays ban rhe hai copy krne ko 
    int* left = new int[len1];              
    int* right = new int[len2];

    //copying horha
    int k = s;
    for(int i = 0; i < len1; i++){
        left[i] = arr[k];
        k++;
    }    

    k = mid + 1;
    for(int i = 0; i < len2; i++){
        right[i] = arr[k];
        k++;
    }

    // Merge logic
    //dono new arrays me se ek ek ko lkr check krenge ki match kar rha hai ki nai
    // jo chota hai usko main array pe place krenge 
    // and jo rah gaye unko as it is while chalake each array pe dalenge to main array
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;

    while(leftIndex < len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]){
            arr[mainArrayIndex] = left[leftIndex];
            mainArrayIndex++;
            leftIndex++;
        }
        else{
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    delete[] left; 
    delete[] right;
}

void mergeSort(int arr[], int s, int e){
    if(s >= e){
        return;
    }

    int mid = s + (e - s) / 2; 

    mergeSort(arr, s, mid);         //yeh wala part bas unit pieces tak left ko tod rha hai 
    mergeSort(arr, mid + 1, e);     //yeh wala part unit pieces tak right ko tod rha hai    
    merge(arr, s, e);                //sorting and merging yahan horhi hai
}

int main(){
    int arr[] = {4, 5, 13, 2, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int s = 0;
    int e = n - 1;
    mergeSort(arr, s, e);

    for (int i = 0; i < n; i++)
    {       
        cout << arr[i] << " ";
    }
    
    return 0;
}
