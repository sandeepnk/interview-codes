#include<iostream>
#include<stdio.h>

//using namespace std;

void sort(int a[]){

	int left = 0;
	//right = sizeof(a)/sizeof(a[0]) - 1;
	int right = 6;
	while(left<right){
		while(a[left]==0 && left<right)
			left++;
		while(a[right]==1 && left<right)
			right--;
		if(left<right){
			
			a[left] = 0;
			a[right] = 1;
			left++;
			right--;		
		}
	}	

}

int main(){
	
	int a[] = {0,1,1,0,0,1,0};
	sort(a);
	for(int i=0;i<7;i++)
		printf("%d",a[i]);
}
