#include <iostream>
using namespace std;
int binarySrearch(int A[],int n,int x){
  int low = 0,high =n-1;
   while(low<=high){
     int mid = (low+high)/2;
      if (x==A[mid]) return mid;
      else if (x<A[mid]) high =mid-1;
      else low = mid+1;
   }
 }

int main(){
/*int A[] = 0 1 2 3  4  5  6  7       <- indexes*/
  int A[] ={2,4,5,7,13,14,18,31};
  cout<<"Enter num - ";
  int xx;
  cin>>xx;
  int index = binarySrearch(A,8,xx);
  if(xx <=A[index]) {
    if(xx==A[index])
      cout<<"number found index  ["<<index<<"] \n";
    else if(xx<A[index])
      cout<<"number found index between ["<<index-1<< "] and ["<<index<<"] \n";
  }
  else  cout<<"Not found !\n";
}
