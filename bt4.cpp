#include<stdio.h>
void importArray(int *arr,int n){
	for(int i =0;i<n;i++){
		printf("nhap mang tu thu %d:  \n",i+1);
		scanf("%d",arr+1);
	}
}
void printArray(int *arr,int n){
	printf("mang cua ban la: ");
	for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
void copyArray(int *arr1, int *arr2, int n) {
    for (int i = 0; i < n; i++) {
        *(arr2 + i) = *(arr1 + i);
    }
    printf("Da sao chep mang thanh cong.\n");
}
void relocateArray(int *arr1, int *arr2, int n) {
    int *temp = (int *)malloc(n * sizeof(int));
    copyArray(arr1, temp, n);
    copyArray(arr2, arr1, n);
    copyArray(temp, arr2, n);
    free(temp);
    printf("Da doi cho 2 mang thanh cong.\n");
}
void arrayReversal(int *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = *(arr + i);
        *(arr + i) = *(arr + n - i - 1);
        *(arr + n - i - 1) = temp;
    }
    printf("Da dao nguoc mang thanh cong.\n");
}

void characterSearch(int *arr, int n, int x) {
    int *p = arr;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(p + i) == x) {
            printf("Tim thay ky tu %d tai vi tri %d.\n", x, i + 1);
            count++;
        }
    }
    if (count == 0) {
        printf("Khong tim thay ky tu %d trong mang.\n", x);
    }
}
int main(){
	int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int *arr1 = (int *)malloc(n * sizeof(int));
    int *arr2 = (int *)malloc(n * sizeof(int));
    int choice;
	do{
	printf("\nMenu\n");
	printf("1.Nhap vao mang\n");
	printf("2.In ra mang\n");
	printf("3.Sao chep mang vao mang khac\n");
	printf("4.Nhap vao mang khac, doi cho 2 mang voi nhau\n");
	printf("5.Dao nguoc mang\n");
	printf("6.Nhap vao 1 ky tu,tim kiem ky tu do trong mang\n");
	printf("7.Thoat\n");
	printf("Lua chon cua ban: ");
	scanf("%d",&choice);
	switch (choice) {
            case 1:
                importArray(arr1, n);
                break;
            case 2:
                printArray(arr1, n);
                break;
            case 3:
                copyArray(arr1, arr2, n);
                break;
            case 4:
                importArray(arr2, n);
                relocateArray(arr1, arr2, n);
                break;
            case 5:
                arrayReversal(arr1, n);
                break;
            case 6:
                int x;
                printf("Nhap vao ky tu can tim kiem: ");
                scanf("%d", &x);
                characterSearch(arr1, n, x);
                break;
            case 7:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
                break;
        }
	
	}while(choice!=7);
}
