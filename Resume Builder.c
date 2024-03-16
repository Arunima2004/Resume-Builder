#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
void SetColor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }

void SetColor(int ForgC);

struct Resume {
    char first_name[50];
    char last_name[50];
    char email[50];
    char phone_no[15];
    char address[100];
    char objective[200];
    char qualification[50];
    char computer_skills[50];
    char additional_skills[50];
};

int main() {
    struct Resume resume;
    SetColor(2);
    printf("Welcome to the Resume Builder!\n\n");
    SetColor(1);
    printf("Enter your first_name: ");
    fgets(resume.first_name, sizeof(resume.first_name), stdin);

    printf("Enter your last_name: ");
    fgets(resume.last_name, sizeof(resume.last_name), stdin);
    
    printf("Enter your email: ");
    fgets(resume.email, sizeof(resume.email), stdin);

    printf("Enter your phone number: ");
    fgets(resume.phone_no, sizeof(resume.phone_no), stdin);

    printf("Enter your address: ");
    fgets(resume.address, sizeof(resume.address), stdin);

    printf("Enter your career objective: ");
    fgets(resume.objective, sizeof(resume.objective), stdin);
    
    printf("Enter your qualifications: ");
    fgets(resume.qualification, sizeof(resume.qualification), stdin);

    printf("Enter your knowledge about computer: ");
    fgets(resume.computer_skills, sizeof(resume.computer_skills), stdin);

    printf("Enter your additional skills: ");
    fgets(resume.additional_skills, sizeof(resume.additional_skills), stdin);

    // Display the entered information
    SetColor(8);
    printf("\n--- Your Resume ---\n");
    SetColor(9);
    printf("Name: %s", resume.first_name);
    printf("Name: %s", resume.last_name);
    printf("Email: %s", resume.email);
    printf("Phone: %s", resume.phone_no);
    printf("Address: %s", resume.address);
    printf("Objective: %s", resume.objective);
    printf("Objective: %s", resume.qualification);
    printf("Objective: %s", resume.computer_skills);
    printf("Objective: %s", resume.additional_skills);

    return 0;
}