#include <stdio.h>
#include <stdlib.h>

int main()
{
char characterName[] = "Mikan";// store a bunch of characters
int age = 3;

printf("My name is %s and I'm %d years old\n", characterName, age); //printf is a function

age = 4;
printf("I'm %d years old", age);
  /*
%s -> string of letters
%d -> decimal integer
%i -> integer
%f -> floating point number
%lf -> double 
%c -> character


%d assume base 10 while %i auto detects the base
*/
  
int age; //declare a variable
printf("Enter yoaur age\n");
scanf("%d", &age);//pointer
printf("You are %d years old", age);
    

return 0;
}
