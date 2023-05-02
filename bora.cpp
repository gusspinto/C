#include <iostream>
#include <string.h>

using namespace std;

void flush_in() {
	int ch;
	while ((ch = fgetc(stdin)) != EOF && ch != '\n') {}
}
struct Course {
	char course_name[50];
	int grade;
};

struct Student{
	char name[50];
	int id;
	struct Course curso[3];
};

int main() {
	
	struct Student student;

	printf("Diga me o seu nome: ");
	gets_s(student.name);

	printf("Diga me o seu ID: ");
	scanf_s("%d", &student.id);

	for (size_t i = 1; i < 4; i++)
	{
		flush_in();
		printf("\n---Curso %d---\n", i);
		printf("Diga me o nome do curso: ");
		gets_s(student.curso[i].course_name);

		printf("\nDiga me a sua nota: ");
		scanf_s("%d", &student.curso[i].grade);
	}
	return 0;
}