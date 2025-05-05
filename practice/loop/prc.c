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



//✅ 5. Sum of all digits of a number
// #include <stdio.h>
// int main(){
//     int num =547,sum=0,rem;
//     while(num!=0){
//         rem = num%10;
//         sum +=rem;
//         num/=10;
//     }
//     printf("%d",sum);
// }



//✅ 7. Check if number is palindrome
// #include <stdio.h>
// int main(){
//     int num,rem,rev=0,temp;
//     scanf("%d",&num);
//     temp=num;
//     while(num!=0){
//         rem=num%10;
//         rev=rev*10+rem;
//         num/=10;
//     }
//     if (temp==rev){
//         printf("palindrome");
//     }
//     else{
//         printf("not palindrome");
//     }
// }


//✅ 8. Count all palindromes from 100 to 1000
// #include <stdio.h>
// int main(){
//     int count = 0;
//     for (int i =100;i<=1000;i++){
//         int num=i,rev=0,rem;
//         while(num!=0){
//             rem=num%10;
//             rev=rev*10+rem;
//             num/=10;
//         }
//         if(i==rev) count++;
//     }
//     printf("%d",count);
// }
