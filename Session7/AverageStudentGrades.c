/*********************************************
This program prompts the user for a student name
It then reads in student/grade data from student_grades.txt, 
and prints the homework average for the student.
**********************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*********************************************
 ** PROTOTYPES & STRUCT DEFINITIONS
 *********************************************/
 /**
 * Task 1: define the Student struct
 * The struct needs to contain a pointer to an array of ints for homework scores
 * The struct also needs to contain a char array for the name of the student
 **/

/* Declare struct here */

struct Student
{
    int* grades;
    char* name;
};

/*********************************************
 ** FUNCTION PROTOTYPES
 *********************************************/
int find(char* name, struct Student *A, int N);
double average(int *A, int N);

/*********************************************
 ** MAIN FUNCTION
 *********************************************/
int main() {
  // Open file and read header info
  int Ns, Nh;
  char junk[10]; // = malloc(10*sizeof(char))
  FILE* IN = fopen("student_grades.txt", "r");
  fscanf(IN, "%d %s %d %s", &Ns, junk, &Nh, junk);
  
  // Task 4: use malloc and allocate memory to create the array
  // Create array of Ns students with Nh grades each

  struct Student *A = malloc(Ns*sizeof(struct Student));

  for (int i = 0; i < Ns; i++)
  {
      A[i].name = malloc(20*sizeof(char));
      A[i].grades = malloc(Nh*sizeof(int));
  }

  // Task 5: read data into the declared array
  // Read & store student names & grades

  for (int i = 0; i < Ns; i++)
  {
      fscanf(IN, "%s", A[i].name);

      for (int j = 0; j < Nh; j++)
      {
          fscanf(IN, "%d", &A[i].grades[j]);
      }
  }


  // Get name from user
  char name[20];
  printf("Enter name: ");
  scanf("%s", name);

  // Task 6: implement calculating the average of the grades for the student
  // Find student with given name & print his average
  int index = find(name, A, Ns);
  printf("Grades: ");
  printf("%f", average(A[index].grades, Nh));
  printf("\n");
  
  return 0;
}

/*********************************************
 ** FUNCTION DEFINITIONS
 *********************************************/
// Task 2: implement the find() function
// Returns index of array element whose name
// data member matches given name.
int find(char* name, struct Student *A, int N){

   for (int i = 0; i < N; i++)
   {
       if (strcmp(A[i].name, name))
       {
           return i;
       }
       else
       {
           return -1;
       }
   }
}

// Task 3: implement the average() function
// Returns the average of the N ints in array A
double average(int *A, int N)
{
    int avg = 0;

    for (int i = 0; i < N; i++)
    {
        avg += *A + i;
    }

    return avg/N;
}

