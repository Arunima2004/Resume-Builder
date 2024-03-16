# 1.	INTRODUCTION
A resume builder is an interactive online form that allows you to input your information and build out a clean, organized resume. Using select resume templates, a resume builder helps job seekers create professional resumes that showcase their talents while saving them time. A good resume builder provides an easy-to-use interface that walks you through each of the most important resume sections. The online interface should lead you through a series of questions that will help you build out your resume and provide suggestions along the way. There is nothing illegal about using a resume builder. They are simply tools to help you build a better, faster resume. Hiring managers don’t spend a lot of time looking through every resume. They skim through, taking about six seconds to determine whether or not you are a good fit for the role. Including the right keywords in your skills section and job description bullet points is important. Including a well-crafted summary can also go a long way. If your resume warrants a deeper look, the hiring manager will pay attention to other important factors. Your relevant work experience and career progression as well as the impact you have had in each of your roles will also matter to them. Be sure to quantify any achievement you can. While they are skimming, they will notice glaring errors. Don’t exaggerate. And, be sure to double, triple, and quadruple-check for spelling and grammatical errors.

# 2.	COMPONENT DESCRIPTION:
Software: -Programming Language: c VScode (Compiler - MinGW)

Hardware: - HP envy AMD RADEON Graphics i7 (13+ generation), RYZEN
16 GB RAM
 
# 3.	APPLICATIONS: -
•	Job Hunting: The most common use of a resume builder is to create a professional resume when applying for jobs. It helps job seekers showcase their skills and experience effectively.

•	Career Changes: When transitioning to a new career or industry, a resume builder can help highlight transferable skills and relevant experiences.

•	Internships and Entry-Level Positions: Students and recent graduates often use resume builders to create their first professional resumes for internships or entry-level positions.

•	Freelancing and Gig Work: Freelancers and gig workers can use resume builders to create profiles that they can share on freelance platforms, highlighting their skills and previous projects.

•	Networking Events: When attending career fairs, conferences, or networking events, having a well-prepared resume can make a strong impression on potential employers or contacts.

# 4.	FEATURES: -
•	User-Friendly Interface

•	Pre-Designed Templates

•	Resume Sections

•	Editing Tools

•	Customization

•	Examples and Tips

•	Privacy and Security

•	Accessibility

•	Mobile Compatibility

•	Feedback and Review

•	Offline Access

•	Multiple Language Support

•	Continuous Updates
 
# 5.	CODE BLOCK: -
   #include <stdio.h>
  	#include <string.h>
  	#include <stdlib.h>
  	#include <windows.h>
  	void SetColor(int ForgC)
{

WORD wColor;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); CONSOLE_SCREEN_BUFFER_INFO csbi;

//We use csbi for the wAttributes word. if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
{
//Mask out all but the background attribute, and add in the forgournd color wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F); SetConsoleTextAttribute(hStdOut, wColor);
}
return;

}

void SetColor(int ForgC);
struct Resume {

char first_name[50]; char last_name[50];
 
char email[50]; char phone_no[15]; char address[100]; char objective[200];
char qualification[50]; char computer_skills[50]; char additional_skills[50];
};
int main() {

struct Resume resume;

SetColor(2);

printf("Welcome to the Resume Builder!\n\n"); SetColor(1);
printf("Enter your first_name: ");

fgets(resume.first_name, sizeof(resume.first_name), stdin); printf("Enter your last_name: ");
fgets(resume.last_name, sizeof(resume.last_name), stdin); printf("Enter your email: ");
fgets(resume.email, sizeof(resume.email), stdin); printf("Enter your phone number: "); fgets(resume.phone_no, sizeof(resume.phone_no), stdin); printf("Enter your address: ");
fgets(resume.address, sizeof(resume.address), stdin); printf("Enter your career objective: "); fgets(resume.objective, sizeof(resume.objective), stdin);
 
printf("Enter your qualifications: "); fgets(resume.qualification, sizeof(resume.qualification), stdin);

printf("Enter your knowledge about computer: "); fgets(resume.computer_skills, sizeof(resume.computer_skills), stdin);

printf("Enter your additional skills: ");

fgets(resume.additional_skills, sizeof(resume.additional_skills), stdin);

// Display the entered information SetColor(8);
printf("\n--- Your Resume ---\n"); SetColor(9);
printf("Name: %s", resume.first_name); printf("Name: %s", resume.last_name); printf("Email: %s", resume.email); printf("Phone: %s", resume.phone_no); printf("Address: %s", resume.address); printf("Objective: %s", resume.objective); printf("Objective: %s", resume.qualification); printf("Objective: %s", resume.computer_skills); printf("Objective: %s", resume.additional_skills);

return 0;
}
 
# 6.	EXPLANATION: -
1.	SetColor Function:

void SetColor(int ForgC) {

// Function to set the console text color WORD wColor;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
{ wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F); SetConsoleTextAttribute(hStdOut, wColor);
}
return;
}

This function is responsible for changing the text color in the console. It takes an integer ForgC as an argument, representing the foreground color.
It	uses	Windows	API	functions	(GetStdHandle,	GetConsoleScreenBufferInfo, SetConsoleTextAttribute) to manipulate the console text color.
The color information is combined with the current console attributes to set the desired text color.

2.	struct Resume:
struct Resume {

// Structure to store resume information char first_name[50];
char last_name[50]; char email[50];
 
char phone_no[15]; char address[100]; char objective[200]; char qualification[50];
char computer_skills[50]; char additional_skills[50];
};

This structure defines the blueprint for storing information related to a resume, such as first name, last name, email, etc.

3.	main Function:
int main() {

// Main function where the program execution begins struct Resume resume;

// Setting text color for the welcome message SetColor(2);
printf("Welcome to the Resume Builder!\n\n");

// Setting text color for user input SetColor(1);

// Getting user input for resume information

// ...

// Displaying the entered information with different text colors

// ... 
return 0;
}

The main function is the entry point of the program.
It creates an instance of the struct Resume to store the user's resume information.
The SetColor function is used to set different text colors for the welcome message, user input prompts, and the displayed resume.

Note:
There is a redundancy in the function declaration void SetColor(int ForgC);. It is not necessary since the function is already defined above.
The code prompts the user to enter information for various fields and then displays the entered information in a formatted manner.

# 7. STEPS PERFORMED: -
1.	Header Files:

#include <stdio.h> #include <string.h> #include <stdlib.h> #include <windows.h>
Included necessary header files:

<stdio.h> for standard input/output functions.

<string.h> (though not used in the code).

<stdlib.h> (though not used in the code).

<windows.h> for Windows API functions used to manipulate console properties.
 
2.	SetColor Function:


void SetColor(int ForgC) { WORD wColor;
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); CONSOLE_SCREEN_BUFFER_INFO csbi;

if(GetConsoleScreenBufferInfo(hStdOut, &csbi)) { wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F); SetConsoleTextAttribute(hStdOut, wColor);
}

return;

}

Defined a function SetColor to change the console text color.

Used Windows API functions (GetStdHandle, GetConsoleScreenBufferInfo, SetConsoleTextAttribute) to manipulate console attributes.
The function takes an integer ForgC representing the foreground color.

3.	struct Resume:


struct Resume {

char first_name[50]; char last_name[50]; char email[50];
char phone_no[15]; char address[100]; char objective[200]; char qualification[50];
 
char computer_skills[50]; char additional_skills[50];
};

Defined a structure Resume to store information related to a resume, including fields for first name, last name, email, etc.
4.	main Function:


int main() {

struct Resume resume;

SetColor(2);

printf("Welcome to the Resume Builder!\n\n"); SetColor(1);

// User input for resume information

// ...


// Displaying entered information with different text colors

// ...



return 0;

}

The main function is the entry point of the program.

Created an instance of the struct Resume to store user's resume information.

Used SetColor to set text colors for the welcome message and user input prompts.

5.	User Input Section:

The code prompts the user to enter information for various fields (e.g., first name, last name, email, etc.) using printf and fgets.
6.	Displaying Entered Information:
 

SetColor(8);

printf("\n--- Your Resume ---\n"); SetColor(9);
printf("Name: %s", resume.first_name);

// Displaying other fields...

Set text colors for displaying the entered resume information.

Used printf to display the entered information in a formatted manner.




8.	RESULT: -
![image](https://github.com/Arunima2004/Resume-Builder/assets/163457506/4a63eb2f-0a6f-4ff2-a272-6de6e47e03bb)


 
9.	FUTURE SCOPE: -
•	Redundancy Removal: Remove redundant declarations like void SetColor(int ForgC);.
•	Input Validation: Enhance user input validation to ensure robustness against invalid or unexpected inputs.
•	Field Name Correction: Correct the display section to use accurate field names from the struct Resume.
•	Formatting Improvement: Enhance the formatting of the displayed resume for better readability.
•	Additional Features: Consider adding more features, such as error handling, additional input validation, or the ability to edit and save the resume.
CONCLUSION: -
In conclusion, the provided C code serves as a simple console-based resume builder. It utilizes a structure (struct Resume) to store information related to a person's resume and incorporates a function (SetColor) to enhance the visual appearance by changing the console text color.
BIBLIOGRAPHY: -

https://chat.openai.com/c/31147865-0a48-4453-9f5c-d82b277b6ec0

https://www.scribd.com/document/289876205/Resume-Builder-Report-17-Nov-2015

https://www.scribd.com/document/544322912/Railway-Management-System-Final-Project
