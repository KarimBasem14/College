#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NUM_DOCTORS 10
#define MAX_PATIENTS 10

/*
 * Names of workers on this project:
 * 1- Mohammad AbdAllah
 * 2- Youssef Ali
 * 3- Karim Mohammad
 */

/*Things that need to be tweaked:
 1- Currently using gets() instead of fgets() as fgets record a /n which gives false with strcmp --> DONEEEEEEEEEEEEEEEEEEEEEEE
 2- Since the data must be retrieved from a file, the number of patients must also be calculated after reading the data --> DONEEEEEEEEE
 3- Limit the number of users that can sign up. --> DONEEEEEEEEEEEEEEEEEEEEEE
 4- Initially I had the number of patients and doctors given at the top of the file. This approaches makes me want to modify the number of patients in the file when exiting the program but since editing a line in a file is hard in c, i am trying to just count the number of lines using a function instead. --> FIXED
 */

struct Doctor {
    char name[100];
    char specialty[100];
    char clinic_address[100];
    int  visita;
};

struct Patients {
    char name[100];
    char username[100];
    char password[100];
};

// Arrays of structs, one for the doctors and one for the patients
struct Doctor doctors[NUM_DOCTORS];
struct Patients patients[MAX_PATIENTS];

int user_exists(char * user, int number_registered_patients);
int password_correct(const char * password, const char * user, int number_registered_patients);
int validate_data(int number_registered_patients);
void print_doctor_data(int doctor_index);
void create_account(int number_registered_patients);
int is_unique_username(const char * username, int number_registered_patients);
void add_data_to_file(int user_index);
int count_file_lines(const char * filename);

int main(){

    FILE * doctors_file = fopen("./Data/Doctor_data.csv","r");
    if (doctors_file == NULL)
    {
        printf("Error Couldn't open the file.\n");
        return 2 ;
    }

    // Here I am dynamically calculating the number of doctors present in the data by counting the number of lines
    int num_doctors = count_file_lines("./Data/Doctor_data.csv");

    // Reading doctor data
    for (int i = 0; i < num_doctors; i++)
    {
        char doct_data [100] ;
        fgets(doct_data,100,doctors_file) ;

        doct_data[strcspn(doct_data, "\n")] = 0; // Removes the /n that results from fgets

        char * token = strtok(doct_data,",") ;
        strcpy(doctors[i].name,token) ;
        token = strtok(NULL,",");
        strcpy(doctors[i].specialty,token) ;
        token = strtok(NULL,",") ;
        strcpy(doctors[i].clinic_address,token) ;
        token = strtok(NULL,",") ;
        doctors[i].visita = strtol(token,NULL,10);

    }
    fclose(doctors_file);

    FILE * patients_file = fopen("./Data/Patients_data.csv","r");
    if (patients_file == NULL)
    {
        printf("Error Couldn't open the file.\n");
        return 2 ;
    }

    // Counting the number of registered patients by counting the number of lines/rows in the Patients_data.csv file
    int number_registered_patients = count_file_lines("./Data/Patients_data.csv");

    // Reading patients data
    for (int i = 0; i < number_registered_patients; i++)
    {
        char patients_data [100] ;
        fgets(patients_data,100,patients_file) ;

        patients_data[strcspn(patients_data, "\n")] = 0; // Removes the /n that results from fgets

        const char * token = strtok(patients_data,",") ;
        strcpy(patients[i].name,token) ;
        token = strtok(NULL,",");
        strcpy(patients[i].username,token) ;
        token = strtok(NULL,",");
        strcpy(patients[i].password,token) ;

    }
    fclose(patients_file);

    int is_signed_in = 0;

    printf("Welcome to the clinical managment system\n How do I help you?\n");

    int input;


    while (is_signed_in == 0) {
        printf("1- Sign in\n2- Sign up \n0-Exit Program\n");

        scanf(" %d", &input);
        getchar(); // Used to catch the remaining /n in the buffer


        if (input == 1) {
            // Ask for username and password
            int num_of_valid_tries = 3;
            while (is_signed_in == 0) {
                if (num_of_valid_tries == 0) {
                    printf("Sorry, you used all your tries, try again later");
                    return 0;
                }
                is_signed_in = validate_data(number_registered_patients);
                num_of_valid_tries--;

                if (is_signed_in == 0) {
                    printf("You have %d tries remaining\n", num_of_valid_tries);
                }
            }
        }


        else if (input == 2) {
            // Ask for name, username and password and create account
            if (number_registered_patients < MAX_PATIENTS) {
                create_account(number_registered_patients);
                number_registered_patients++;
            }
            else {
                printf("Sorry, Maximum number of users reached on the system\n");
            }
        }


        else if (input == 0){
            printf("Thank you for using the program!");
            return 0;
        }
        else {
            printf("Invalid input try again!\n");
        }

        while (is_signed_in) {
            printf("Choose one of the following options:\n");
            printf("1-Search for speciality\n2-See all doctors\n3-Sign out\n0-Exit Program\n");

            int input2;
            scanf(" %d", &input2);
            getchar(); // To take the /n from the buffer

            if (input2 == 1) {
                // Take a speciality and print all doctors with that speciality
                char speciality[100];
                printf("Enter the speciality you want to search for(All specialities start with an uppercase letter): ");

                fgets(speciality, 100, stdin);
                speciality[strcspn(speciality, "\n")] = 0; // Removes the /n from the string due to fgets

                printf("Doctors specialized in %s are: \n", speciality);

                for (int i = 0; i < num_doctors; i++) {
                    if (strcmp( doctors[i].specialty, speciality) == 0) {
                        print_doctor_data(i);

                    }
                }
            }
            else if (input2 == 2) {
                // Print all doctors data
                for (int i = 0; i < num_doctors; i++) {
                    print_doctor_data(i);
                }
            }
            else if (input2 == 3) {
                is_signed_in = 0;
                break; // Breaks from the inner loop which is while(is_signed_in) and goes back to the main program loop
            }
            else if (input2 == 0) {
                return 0; // Exits the program
            }
            else {
                printf("Invalid input\n");
            }
        }
    }





}

int user_exists(char * user, int number_registered_patients) {
    /*
     * Checks if the given user is in the database or not
     * Returns the user's index if found
     * Returns -1 if not found
     */

    for (int i = 0; i < number_registered_patients; i++) {
        // strcmp returns 0 if both of the given strings are equal
        if (strcmp(patients[i].username, user) == 0) {
            return i;
        }
    }
    return -1;
}

int password_correct(const char * password, const char * user, const int number_registered_patients) {
    /*
     * Returns 1 if the given password is correct
     * Returns 0 if the given password is not correct
     */

    for (int i = 0; i < number_registered_patients; i++) {
        // strcmp returns 0 if both of the given strings are equal
        if (strcmp(patients[i].username, user) == 0 && strcmp(patients[i].password, password) == 0) {
            return 1;
        }
    }
    return 0;
}

int validate_data(const int number_registered_patients) {
    /*
     * Takes the username and the password from the user and checks if they are in the database
     * If data are correct returns 1
     * If data not correct returns 0
     */
    char username[100];
    char password[100];

    printf("Enter your username: ");
    fgets(username, 100, stdin);
    username[strcspn(username, "\n")] = 0;

    if (user_exists(username, number_registered_patients) >= 0) {
        // Ask for password
        printf("Enter your password: ");
        fgets(password, 100, stdin);
        password[strcspn(password, "\n")] = 0; // This removes the \n at the end of the string from fgets

        if (password_correct(password, username, number_registered_patients) == 1) {
            printf("Welcome %s! You are now signed in!\n", username);
            return 1;
        }
        else {
            printf("Incorrect password\n");
            return 0;
        }
    }
    else {
        // Try again
        printf("Sorry, username doesn't exist\n");
        return 0;
    }
}

void print_doctor_data(const int doctor_index) {
    /*
     * Takes the index of a doctor and prints all his data
     */
    printf("Name: %s, Specilaity: %s, Address: %s, Visita: %d\n", doctors[doctor_index].name, doctors[doctor_index].specialty, doctors[doctor_index].clinic_address, doctors[doctor_index].visita);
}

int is_unique_username(const char * username, const int number_registered_patients) {
    /*
     * Takes a username and checks if it is already used in the database or not
     * If the username is already in the database it returns 0
     * If the username is unique and not in the database it returns 1
     */
    for (int i = 0; i < number_registered_patients; i++) {
        if (strcmp(username, patients[i].username) == 0) {
            return 0;
        }
    }
    return 1;
}

int count_file_lines(const char * filename) {
    /*
     * Takes the path of a file and counts the number of lines in that file
     */
    FILE * file = fopen(filename, "r");

    int lines = 0;
    char ch;
    while ((ch = fgetc(file) ) != EOF) {
        // Each line ends in \n
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);
    return lines + 1; // Normally the last line doesn't contain a \n so we account for that by adding 1
}

void add_data_to_file(const int user_index) {
    /*
     * Function used after creating an account. It adds the new user to the Patients_data.csv file
     */

    FILE * patients_file = fopen("./Data/Patients_data.csv", "a");
    fprintf(patients_file, "\n%s,%s,%s", patients[user_index].name, patients[user_index].username, patients[user_index].password);

    fclose(patients_file); // It actually wouldn't append when I forgot this!

}

void create_account(const int number_registered_patients) {
    /*
     * Asks the user for the name, username and password and creates a new account
     */

    char name[100];
    char username[100];
    char password[100];

    printf("Enter your name: ");
    fgets(name, 100, stdin);
    name[strcspn(name, "\n")] = 0; // Removes \n from the string from fgets


    while (1) {
        printf("Enter your username: ");
        fgets(username, 100, stdin);
        username[strcspn(username, "\n")] = 0;
        if (is_unique_username(username, number_registered_patients) == 1) {
            break;
        }
        else if (is_unique_username(username, number_registered_patients) == 0) {
            printf("Username must be unique, try again!\n");
        }

    }


    printf("Enter your password: ");
    fgets(password, 100, stdin);
    password[strcspn(password, "\n")] = 0;

    // strncpy(destination, source, n) copies n chars from source to destination
    strncpy(patients[number_registered_patients].name, name, sizeof(patients[number_registered_patients].name));
    strncpy(patients[number_registered_patients].username, username, sizeof(patients[number_registered_patients].username));
    strncpy(patients[number_registered_patients].password, password, sizeof(patients[number_registered_patients].password));
    add_data_to_file(number_registered_patients);

    printf("Account created successfully!\n");
}