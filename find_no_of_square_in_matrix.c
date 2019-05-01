#include <stdio.h>
int find_small(int,int);
int main()
{
   int M,N,P,Q;
    printf("enter length and breadth");
    scanf("%d%d%d%d",&M,&N,&P,&Q);
    int len=(N-M+1)*(Q-P+1),k=0;
    int arr[len][2];
    for(int i=M;i<=N;i++){
        for(int j=P;j<=Q;j++){
            arr[k][0]=i;
            arr[k][1]=j;
        k++;
        }
    }
    int count=0;
    for(int i=0;i<len;i++){
        if(arr[i][0]==arr[i][1])
            count++;
        else{
            while(arr[i][0]!=arr[i][1]){
                int flag=find_small(arr[i][0],arr[i][1]);
                if(flag==1){
                    count++;
                    arr[i][0]=arr[i][0]-arr[i][1];
                }
                else{
                    count++;
                    arr[i][1]=arr[i][1]-arr[i][0];
                }
            }
        count++;
        }
    printf("%d\n",count);
    }
}


int find_small(int a,int b){
    if(a<b)
        return 0;
    else
        return 1;
}
