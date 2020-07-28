#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int temp;
    int *arr = new int[n];
    int k=1;
    int index;
    for(int i=0;i<n;i++){
        
        cin>>arr[i];
    }
    
  sort(arr,arr+n);
  
  for(int i=0;i<n;i++){
      
      if(arr[i]!=arr[i+1]){
          continue;
      }
      else{
          k++;
         index =i;
         
      }
      
    
  }
      cout<<k<<" "<<arr[index];
         cout<<endl;
    
    return 0;
}
