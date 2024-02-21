//Ek no. uski sahi jagah pe pohocha de baki recursion smbhal lega
//pivot element choose karo
//pivot ko uske sahi jagah pohochao
//uske left me sab chote uske right me sab bade
// 8 3 4 1 20 50 30

// 1 3 4 8 20 50 30

// 8 ke left and right ko recursion smbhal lega

// ab bat yeh ata hai ki pivot ko uska sahi jagah kaise smjhega?
// to uske liye count karenge kitne elements usse chote hai and uske starting position se utne elements add krke swap kr deng e 
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  //step1: chooose pivotelement
  int pivotIndex = s;
  int pivotElement = arr[s];

  //step2: find right positio for pivot Element and place it there
  int count = 0;      
  for(int i=s+1; i<=e; i++) {
    if(arr[i] <= pivotElement) {
      count++;
    }
  }
  //jab main loop se bahar hua, toh mere paas pivot ki right position ka index ready h 
  int rightIndex = s + count;
  swap(arr[pivotIndex], arr[rightIndex]);
  pivotIndex = rightIndex;

  //Step3: left me chote and right me bade
  int i = s;
  int j = e;

  while( i < pivotIndex && j > pivotIndex) {
    while(arr[i] <= pivotElement) {
      i++;
    }
    while( arr[j] > pivotElement){
      j--;
    }

    //2 case ho sakte h -> 
    //A-> you found the elements to swap
    //B-> no need to swap
    //yahan mujhe ek doubt aya tha ki yeh niche wala phirse condition check ka kyu zarurt hai ?
    // to uska reason yehi hai ki upar comparison element k sath horha hai to similar elements v aa skte hai to the pivot isiliye = sign and aysa ho skta hai ki i jo hai apne pivot pe hi aa ruke par wo to already apne sahi jagah pe hai to usko replace krne ka scene nahi banta.

    if(i < pivotIndex && j > pivotIndex)
      swap(arr[i],arr[j]);
  }
  return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
  //base case
  if(s >= e)
    return ;

  //partition logic, return pivotIndex
  int p = partition(arr, s, e);

  //recursive calls
  //pivot element -> left
  quickSort(arr, s, p-1);
  
  //pivot element -> right
  quickSort(arr, p+1, e);

}
int main() {
  int arr[] = {8,1,3,4,20,50,50,50,50,50,5,1,1,1,1,2,2,2,50,30};
  int n = 20;

  int s = 0;
  int e = n-1;
  quickSort(arr, s, e);

  for(int i=0; i<n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}