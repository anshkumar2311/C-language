//✅1 Sum of all multiples of 5 from 1 to 100
// #include <stdio.h>
// int main(){
//     int i,sum=0,count=0;
//         for (i=1; i<=100;i++){
//             if(i%5==0){
//                 sum+=i;
//                 count++;
//             }
//         }
//     printf("%d %d",sum, count);
// }


//✅ 2. Display n terms of Fibonacci series
// #include <stdio.h>
// int main(){
//     int num,a=0,b=1,next;
//     scanf("%d",&num);
//     for (int i = 0 ;i<=num;i++){
//         printf("%d",a);
//         next=a+b;
//         a=b;
//         b=next;
//     }
// }



//✅ 4. Display the reverse of a number
// #include <stdio.h>
// int main(){
//     int num,rev=0,rem;
//     scanf("%d",&num);
//     while(num!=0){
//         rem = num%10;
//         rev =   rev *10 +rem;
//         num /=10;
//     }
//     printf("%d",rev);
// }

