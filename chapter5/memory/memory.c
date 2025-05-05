#include <stdio.h>
int main()
{
  //Dynamic memory allocation

  //Built in functions for dynamic memory management

  malloc(number_of_bytes);

  //ask for memory t store ca2 marks of 50 student
  malloc(200);
  malloc(50*2);
  malloc(50*sizeof(int));
  malloc(n*sizeof(int));



  calloc(number_of_elements,size_of_each_element);

  //ask for memory to store ca2 marks of 50 students'
  calloc(50,sizeof(int));

  int *ptr;
  ptr = (int*)calloc(200);

  //free memory
  free(pointer_variable);


    //realloc
    realloc(pointer_variable,new_size);

    //ask for memory to store ca2 marks of 50 students
    realloc(ptr,50*sizeof(int));

    int *ptr2;

    ptr2 = (int*)realloc(ptr,50*sizeof(int));
}
