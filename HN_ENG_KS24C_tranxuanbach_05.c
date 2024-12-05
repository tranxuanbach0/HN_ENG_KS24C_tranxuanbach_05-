#include <stdio.h> 
int main(){
	int chosse=0; 
	int n=0;
	int arr[100];
	int value=0;
	int i,j=0;
	while(chosse!=11){
		printf("menu\n");
		printf("1.nhap so phan tu va gia tri cho mang\n");
		printf("2.in ra cac phan tu trong mang theo dang\n");
		printf("3.dem so luong cac so hoan hao co trong mang\n");
		printf("4.tim gia tri nho thu 2 trong mang\n");
		printf("5.them 1 phan tu moi them vao trong mang\n");
		printf("6.xoa phan tu tai 1 vi tri cu the\n");
		printf("7.sap xep mang theo thu tu giam dan\n");
		printf("8.tim kiem phan tu trong mang\n");
		printf("9.sap xep lai mang\n");
		printf("10.dao nguoc cac phan tu co trong mang\n");
		printf("11.thoat chuong trinh\n");
		printf("moi ban nhap ");
		scanf("%d",&chosse);
		switch(chosse){
			case 1:
			        printf("nhap so phan tu cho mang ");
			        scanf("%d",&n);
			    for(i=0;i<n;i++){
		            printf("nhap gia tri %d",i+1);
			        scanf("%d",&arr[i]);
			}
			break;
			case 2:
			    for(i=0;i<n;i++){
			        printf("arr[%d]=%d\n",i,arr[i]);	
			}
			break;
			case 3:{
				int count=0;
				for(i=0;i<n;i++){
					int sum=0;
					for(j=1;j<arr[i];j++){
						if(arr[i] % j == 0){
							sum+=j;
				}
				}	
				if(sum==arr[i]){
					count++;
				}
				}	
				printf("so luong so hoan hao la %d\n",count);
	    	break;		
			}
			case 4: {
                if (n < 2) {
                printf("ko co gia tri nho thu 2 vi mang chi co %d phan tu\n", n);
                } else {
                int min1 = __INT_MAX__, min2 = __INT_MAX__;
                for (i = 0; i < n; i++) {
                if (arr[i] < min1) {
                min2 = min1;
                min1 = arr[i];
               }else if (arr[i] < min2 && arr[i] != min1) {
                min2 = arr[i];
               }
            }
                if (min2 == __INT_MAX__) {
                printf("ko co gia tri nho thu 2\n");
            }   else {
                printf("gia tri nho thu 2 la %d\n",min2);
                }
            } 
            break;
            }
		    case 5:
		    	printf("nhap gia tri cho phan tu moi ");
		    	scanf("%d",&value);
		    	for(i=n;i>0;i--){
		    		arr[i]=arr[i-1];
				}
				arr[0]=value;
				n++;
		    break;
		    case 6:{
                printf("nhap vi tri can xoa: ");
                int pos;
                scanf("%d", &pos);
                if (pos < 1 || pos > n) {
                    printf("vi tri ko dung\n");
                } else {
                    for (i = pos - 1; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                break;
            }
			case 11:
			    printf("thoat chuong trinh");
				break;
		    default:
			    printf("hay chon lai\n");	
		} 
	} 
	return 0; 
}
