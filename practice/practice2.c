// #include <stdio.h>
// int main(){
//     int i =1;
//     int sum=0;
//     while (i<=10){
//         sum+=i;
//         i++;
//     }
//     printf("%d",sum);
// }


// #include <stdio.h>
// int main(){
//     int i,n;
//     int fac=1;
//     scanf("%d",&n);
//     for (i=1;i<=n;i++){
//         fac*=i;
//         // return fac;
//     }
//     printf("%d",fac);
// }


#include <stdio.h>
int main(){
    int i, n;
    scanf("%d",&n);
    int prime = 0;
    for (i=2;i<n;i++){
        if(n%i==0){
            prime=1;
            break;  
        }
    }
    if(prime){
        printf("its not prime");
    }
    else{
        printf("Its prime");
    }
    return 0;
}
