#include<stdio.h>
void input_array(int a[], int n)
{
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
}
void print_array(int a[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d ", a[i]);
}



//insertion in array
void insert_last(int a[], int *n, int item) //*n is pointer
{
    a[*n]=item;
    (*n)++;
}
void insert_first(int a[], int *n, int item) //*n is pointer
{
    for (int i = *n; i>=1; i--) //  i-- islia kyuki vo 4 3 2 1 aise shift ho rha hai
        a[i]=a[i-1];
    a[0]=item;
    (*n)++;
}

void insert_at(int a[], int *n, int item, int k) //*n is pointer
{
    if (k<0 || k>*n){
        printf("\n pehle array ka size badao");
    }
    else{
        for (int i = *n; i>k; i--) //  i-- islia kyuki vo 4 3 2 1 aise shift ho rha hai
        a[i]=a[i-1];
    a[k]=item;
    (*n)++;
    }
    
}


//deletion in array
void del_last(int a[], int *n)
{
    *n=*n-1;
}

void del_first(int a[], int *n) //*n is pointer
{
    for (int i=0; i< *n-1; i++) //  i-- islia kyuki vo 4 3 2 1 aise shift ho rha hai
        a[i]=a[i+1];
    *n=*n-1;
}

void del_pos(int a[], int *n, int k) //*n is pointer
{
    for (int i=k; i< *n-1; i++) //  i-- islia kyuki vo 4 3 2 1 aise shift ho rha hai
        a[i]=a[i+1];
    *n=*n-1;
}

int main()
{
    int subject_count;
    scanf("%d", &subject_count);
    // int marks[subject_count+1]; //for insertion +1 array size
    
    int marks[subject_count-1]; //for deletion +1 array size
    
    input_array(marks, subject_count); 
    printf("\nThe marks values are: ");
    print_array(marks, subject_count);
    
    int new_sub_marks; //variable that hold marks of new subject that will insert in array
    int index;
    // scanf("%d %d",&new_sub_marks, &index);
    scanf("%d", &index);
    
    //marks is where i have to add value in array subject_count is length new_sub_marks is what value we have to add in array
    // insert_last(marks, &subject_count, new_sub_marks);
    // insert_first(marks, &subject_count, new_sub_marks);
    // insert_at(marks, &subject_count, new_sub_marks, index);
    
    // del_last(marks, &subject_count);
    // del_first(marks, &subject_count);
    del_pos(marks, &subject_count, index);
    
    printf("\nThe marks values after insert are: ");
    print_array(marks, subject_count);
}