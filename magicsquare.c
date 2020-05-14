#include <stdio.h>

int main(){
	
	int num=1,j,i,start=1,x=0,y;
	
	here: printf("Enter size of magic square (Only odd number): ");
	scanf("%d",&num);
	
	if(num%2==0){
	printf("Only odd number");
		goto here;
	}
	
	int arr[num][num];
	
	for(i=0;i<num;i++)
		for(j=0;j<num;j++)
			arr[i][j] = 0;
			
	arr[0][(num/2)] = start++;
	y = (num/2);
	
	while(start <= num * num){
	y++;
	x--;
	
	if(x==-1)
		x=num-1;
	if(y==num)
		y = 0;

	if(arr[x][y] != 0){
		x+=2;
		y--;
	}
	if( x>num && y <0){
		y = num-1;
		x =  x - num;
	}	
		arr[x][y] = start++;
	}
	
	for(i=0;i<num;i++){
		for(j=0;j<num;j++)
			printf("%5d ",arr[i][j]);
		printf("\n");
	}			
	return 0;
}
