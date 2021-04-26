#include "test.h"
#include "math.h"
#include "student.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * Example for demonstration at start of test.
 */

int example(){
	return 42;
}

/**
 * Warmup (but counts for credit!)
 * Square the value x points to.
 */
void easyPeasy(int* x){
	int y = *x;
	*x = y * y;
}

/**
 * Set a's first name to "Jigglypuff".
 * Set the last name to "Ketchum".
 * Set the g number to 10, the gpa to 1.16.
 */
void one(Student* a){
	a->first_name = "Jigglypuff";
	a->last_name = "Ketchum";
	a->g_number = 10;
	a->gpa = 1.16;
}

/**
 * Copy the information from Student b to Student a.
 * (pointer parameters).
 */
void two(Student* a, Student* b){
	a->first_name = b->first_name;
	a->last_name = b->last_name;
	a->g_number = b->g_number;
	a->gpa = b->gpa;
}

/**
 * Copy the information from Student a to Student b.
 * (mixed variable type parameters).
 */

void three(Student a, Student* b){

	b->first_name=a.first_name;
	b->last_name=a.last_name;
	b->g_number=a.g_number;
	b->gpa=a.gpa;
}

/**
 * Create and return a Student.  Give it the values
 * "T. Yoshisaur" (first_name)
 * "Munchakoopas" (last_name)
 * 1990		  (g_number)
 * 3.1		  (gpa)
 * Mario	  (roommate [defined above])
 * Remember: C is pass by copy ONLY.
 */
Student four(){
	Student temp;
	temp.first_name = "T. Yoshisaur";
	temp.last_name = "Munchakoopas";
	temp.g_number = 1990;
	temp.gpa = 3.1;
	temp.roommate = &Mario;
	return temp;
}

/**
 * Create and return a Student*.  Give it the value
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 * Remember: C is pass by copy ONLY.
 */
Student* five(){
	Student* temp = (Student*)malloc(sizeof(Student));
	temp->first_name = "Luigi";
	temp->last_name = "Mario";
	temp->g_number = 2;
	temp->gpa = 3.54;
	temp->roommate = NULL;
	return temp;
}

/**
 * Create a hunk of memory we can use as an array of 10
 * Students.  Set the 4th element (meaning use array
 * index 3) to
 *
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 */
Student* six(){
	Student* arr = (Student*)malloc(sizeof(Student) * 10);
	Student* temp = five();
	arr[3] = *temp;
	return arr;
}

/**
 * Seven will take a pointer to a pointer.  It should
 * create a hunk of memory that can be used as an array
 * of size 10, and will set the pointer correctly so
 * that the "array" is usable in main.
 * Set the 10th (index 9) element equal to
 *
 * "Luigi" (first_name)
 * "Mario" (last_name)
 * 2       ( :( )
 * 3.54    (gpa [we know he's the smart one])
 */
void seven(Student** students){
	*students = (Student*)malloc(sizeof(Student) * 10);
	Student* temp = five();
	students[0][9] = *temp;//stupid but works
}


/**
 * Given a, b, and c calculate the first solution for
 * the quadratic equation (given below).
 *
 * -b + sqrt(b^2 - 4ac) / (2a)
 */
double quadratic(double a, double b, double c){
	return (-b + sqrt(b*b - 4*a*c)) / (2 * a);
}

/**
 * Given a "string" (a character array) and a length,
 * replace each lower case character with its uppercase
 * equivalent.
 *
 * Do not use any string functions provided by the library.
 * Merely check to see if each character is between the
 * range of values for a lowercase letter.  If it is,
 * replace it with the uppercase value equivalent.
 *
 * If you are writing more than five lines you are doing it wrong.
 */
#include <stdio.h>
void capitalize(char* str, size_t len){
	for (int i = 0; i < len; i++)
		if (str[i] < 123 && str[i] > 96)
			str[i] -= 32;
}
