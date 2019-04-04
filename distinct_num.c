int main() {
  int len,result;
  printf("enter the size of integer array");
  scanf("%d",&len);
  int arr[len];
  printf("enter the array");
  for(int i=0;i<len;i++)
    scanf("%d",&arr[i])
  for(int i=0;i<len;i++){
  	int count=0;
    for(int j=0;j<len;j++){
      if(arr[i]==arr[j]){
        count++;
        }
    }
    if(count==1){
    	result=arr[i];
    }
  }
  printf("%d",result);
}
