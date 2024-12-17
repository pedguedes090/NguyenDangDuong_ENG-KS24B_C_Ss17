#include<stdio.h>
void nhapMang(int**arr,int*n){
	printf("Nhap so phan tu: ");
	scanf("%d",n);
	*arr=(int*)malloc(*n*sizeof(int)); 
	printf("Nhap vao cac phan tu:\n ");
	for(int i=0; i<*n;i++){
		printf("Phan tu thu %d: \n ",i+1);
		scanf("%d",&(*arr)[i]); 
	}
}
void  hienThiMang(int*arr, int n){
	printf("Cac phan tu trong mang la: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]); 
	} 
	printf("\n"); 
}
int doDaiMang(int n){
	return n; 
} 
int tongCacPhanTuTrongMang(int*arr,int n) {
	int tong=0;
	for (int i=0;i<n;i++){
		tong += arr[i]; 
	}
	return tong; 
}
int phanTuLonNhat(int *arr,int n){
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i]; 
		} 
	} 
	 return max; 
}
int main(){
	int *arr;
	int n=0;
	int luaChon;
do{
	printf("\nMenu\n");
	printf("1. Nhap vao so phan tu va tung phan tu\n");
	printf("2. Hien thi cac phan tu trong mang\n");
	printf("3. Tinh do dai mang\n");
	printf("4. Tinh tong cac phan tu trong mang\n");
	printf("5. Hien thi phan tu lon nhat\n");
	printf("6. Thoat\n");
	printf("Lua chon cua ban: \n");
	scanf("%d",&luaChon);
	switch(luaChon){
		case 1:
			nhapMang(&arr,&n);
		break;
		case 2:
			hienThiMang(arr,n); 
		break;
		case 3:
			printf("Do dai mang la: %d\n ",doDaiMang(n));
		break;
		case 4:
		printf("Tong cac phan tu trong mang la: %d \n",tongCacPhanTuTrongMang(arr,n));
		break;
		case 5:
			printf("Phan tu lon nhat trong mang la: %d \n",phanTuLonNhat(arr,n));
		break;
		case 6:
			printf("Thoat\n");
		break; 
		default:
			printf("Khong hop le");
	} 
} while(luaChon!=6);
	free (arr); 
	return 0;
}
