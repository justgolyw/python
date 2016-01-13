#include <cstdio>
#include <cmath>
#define max 200000 + 5
int find_num,book,data[max],center;
int Found(int left,int right)
{

	if(find_num == data[center] ){
		book = center;
	}
	if(fabs(left - right) == 1){
        if(find_num == data[left])
            book = left;
        if(find_num == data[right])
            book = right;
        return book;
	}
	else if(find_num < data[center]){
		right = center - 1;
		center = (left + right) / 2;
		Found (left , right);
	}
	else if(find_num > data[center]){
		left = center + 1;
		center = (left + right) / 2;
		Found(left,right);
	}

	return book;
}

int main()
{
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n;i++)
		scanf("%d",&data[i]);
	int num;
	scanf("%d",&num);
	for(int i = 0;i < num;i++){
        book = -1;
		scanf("%d",&find_num);
		center = n/2;
		if(Found(1,n) != -1 ){
			printf("%d\n",Found(1,n) - 1);
		}
		else
			printf("Not Found\n");
	}
}
