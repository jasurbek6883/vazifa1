// k1

// #include<stdio.h>
// int main(){
//   int arr[4][4];
//   for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//   int sum = 0;
//   for(int i=0;i<4;i++){
//     for(int j=0;j<4;j++){
//       printf("%2d ",arr[i][j]);
//       sum +=arr[i][j];
//     }
//     puts("");
//   }
//   puts("");
//   printf("summasi = %d",sum);
//   return 0;
// }

// k2

// #include<stdio.h>
// int main(){
//   int arr[3][4];
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   for(int i=0;i<3;i++){
//     if(i % 2)
//     for(int j=0;j<4;j++){
//       printf("%2d ",arr[i][j]);
//     }
//   }
//   return 0;
// }

// k3

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));
//   int arr[7][4];
//   for(int i=0;i<7;i++){
//     for(int j=0;j<4;j++){
//       arr[i][j] = -5 + rand() % 20;
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   for(int i=0;i<7;i++){
//     for(int j=0;j<4;j++){
//       if(j%2==0)
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   return 0;
// }

// k4

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));
//   int arr[3][3];
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       arr[i][j] = -5 + rand() % 20;
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//       printf("%2d ",arr[j][i]);
//     }
//     puts("");
//   }
//   return 0;
// }

// k5

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));
//   int arr[3][4];
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//       arr[i][j] = -5 + rand() % 20;
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   for(int i=0;i<3;i++){
//     for(int j=0;j<4;j++){
//       printf("%d ",arr[i][j]);
//     }
//   break;  
//   }   
//   return 0;
// }

// k6

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));
//   int n;
//   printf("n = "); scanf("%d",&n);
//   int sum;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = -5 + rand() % 20;
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   for(int i=0;i<n;i++){
//     sum = arr[i][0];
//     for(int j=1;j<n;j++){
//       sum += arr[i][j];
//     }
//     printf("%d - qatorda %d\n",i+1 ,sum);
//   }   
//   return 0;
// }

// k7

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));
//   int n;
//   printf("n = "); scanf("%d",&n);
//   int sum;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = -5 + rand() % 20;
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
  
//   for(int i=0;i<n;i++){
//     int sum = 0;
//     for(int j=0;j<n;j++){
//       sum += arr[j][i];
//     }
//     printf("%d - ustunda %d\n",i ,sum);
//   }   
//   return 0;
// }

// k8

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));
//   int n;
//   printf("n = "); scanf("%d",&n);
//   int sum;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = -5 + rand() % 20;
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
  
//   for(int i=0;i<n;i++){
//     int max = 0;
//     for(int j=0;j<n;j++){
//       if(arr[i][j]>=max){
//         max = arr[i][j];
//       }
//     }
//     printf("%d - qatorda %d\n",i ,max);
//   }   
//   return 0;
// }


// k9

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));
//   int n;
//   printf("n = "); scanf("%d",&n);
//   int sum;
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = -5 + rand() % 20;
//       printf("%2d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
  
//   for(int i=0;i<n;i++){
//     int max = 0;
//     for(int j=0;j<n;j++){
//       if(arr[j][i]>=max){
//         max = arr[j][i];
//       }
//     }
//     printf("%d - qatorda %d\n",i ,max);
//   }   
//   return 0;
// }

// k10

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));

//   int n;
//   printf("n = ");
//   scanf("%d",&n);

//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = -5 + rand() % 10;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }

//   int temp = 0;
//   for(int i=0;i<n;i++){
//     temp = arr[i][i];
//     arr[i][i] = arr[i][n-1-i];
//     arr[i][n-1-i] = temp;
//   }
//   puts("output:");

//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   return 0;
// }

// k11

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){

//   srand(time(0));

//   int n;
//   printf("n = "); scanf("%d",&n);

//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = -5 + rand() % 30;
//       printf("%3d ", arr[i][j]);
//     }
//     puts("");
//   }
//   printf("output:");
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(i == j){
//         printf("%3d ",arr[i][j]);
//       }
//     }
//   }



//   return 0;
// }


// k12

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){

//   srand(time(0));
//   int n;
//   printf("n = ");
//   scanf("%d",&n);
//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = -10 + rand() % 20;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   printf("output");
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(i==n-1-j){
//         printf("%3d ",arr[i][j]);
//       }
//     }
//   }

//   return 0;
// }


// k13 1 - usul;

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));

//   int n;
//   printf("n = ");scanf("%d",&n);

//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = 1 + rand() % 20;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   printf("output:");
//   for(int i=0;i<n;i++){
//     printf("%3d ",arr[i][0]);
//   }

//   return 0;
// }


// k13 2 - usul;

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));

//   int n;
//   printf("n = ");scanf("%d",&n);

//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = 1 + rand() % 20;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   printf("output:");
//   for(int i=0;i<n;i++){
//     for(int j=0;j<1;j++){
//     printf("%3d ",arr[i][j]);
//     }
//   }

//   return 0;
// }




// k14


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #include<stdbool.h>

// int main(){

//   srand(time(0));
//   int n,m;
  
//   printf("n = ");scanf("%d",&n);
//   printf("m = ");scanf("%d",&m);

//   bool check = false;
//   int arr[n][m];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       arr[i][j] = -4 + rand() % 15;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   int sum = 0;
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       if(arr[i][j]>0){
//         printf("+%d",arr[i][j]);
//         sum += arr[i][j];
//       }else{
//         check = true;
//         break;
//       }
//     }
//     if(check){
//       break;
//     } 
    
//   }
//   printf("=%d ",sum);
//   return 0;
// }

// k15

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// #include<stdbool.h>

// int main(){

//   srand(time(0));
//   int n,m;
  
//   printf("n = ");scanf("%d",&n);
//   printf("m = ");scanf("%d",&m);

//   bool check = false;
//   int arr[n][m];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//       arr[i][j] = -4 + rand() % 15;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");
//   int sum = 0;
//   for(int i=n-1;i>=0;i--){
//     for(int j=m-1;j>=0;j--){
//       if(arr[i][j]>0){
//         printf("+%d",arr[i][j]);
//         sum += arr[i][j];
//       }else{
//         check = true;
//         break;
//       }
//     }
//     if(check){
//       break;
//     } 
    
//   }
//   printf("=%d ",sum);
//   return 0;
// }

// k16 

// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));

//   int n;
//   printf("n = ");scanf("%d",&n);

//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = rand() % 10;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");

//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       if(i == 0 || j == 0){
//         printf("%3d ",arr[j][i]);
//       } else printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   return 0;
// }

// k17


// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>

// int main(){
//   srand(time(0));

//   int n;
//   printf("n = ");scanf("%d",&n);

//   int arr[n][n];
//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//       arr[i][j] = rand() % 10;
//       printf("%3d ",arr[i][j]);
//     }
//     puts("");
//   }
//   puts("");

//   for(int i=0;i<n;i++){
//     for(int j=0;j<n;j++){
//         printf("%3d ",arr[j][i]);
//     }
//     puts("");
//   }
//   return 0;
// }