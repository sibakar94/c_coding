#include<stdio.h>
int main(int argc, char *a[])
{
	//Write code here
	int test_case;
	scanf("%d",&test_case);
	int count[test_case];
	int arr_stren[10][1000];
	int arr_ene[10][1000];
	for(int i=0;i<test_case;i++){
		scanf("%d",&count[i]);
		for(int j=0;j<count[i];j++)
			scanf("%d",&arr_stren[i][j]);
		for(int j=0;j<count[i];j++)
			scanf("%d",&arr_ene[i][j]);
		
	}
	int temp=0;
	for(int k=0;k<test_case;k++){
	for(int i=0;i<count[k];i++){
	    for(int j=i+1;j<count[k];j++){
	        
	        if(arr_stren[k][i]<arr_stren[k][j]){
	            temp=arr_stren[k][i];
	            arr_stren[k][i]=arr_stren[k][j];
	            arr_stren[k][j]=temp;
	        }
	        if(arr_ene[k][i]<arr_ene[k][j]){
	            temp=arr_ene[k][i];
	            arr_ene[k][i]=arr_ene[k][j];
	            arr_ene[k][j]=temp;
	        }
	    }
	}}
	
	for(int i=0;i<test_case;i++){
	    int status=0;
	    for(int j=0;j<count[i];j++){
	        if(arr_ene[i][j]>arr_stren[i][j])
	            status++;
	        }
	    if(status==count[i])
	        printf("WIN");
	    else
	        printf("LOSE");
		printf("\n");
	}
}
