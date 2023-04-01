//Joel Paul Fernandez
//Michael Olanipekun
//Brian Egona
//Hospital database group project

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "appointmentManager.h"
#include "printAppointmentmenu.h"
//#include "addAppointment.h"
//#include "displaySingleappointment.h"
#include "exitAppointmentmanager.h"
//#include "deleteappointment.h"
//#include "updateappointment.h"

#include "displayDoctorsappointmentHistory.h"
#include "displayDoctorsdiagnostics.h"


int main(int argc, char* argv[]) {

    APPOINTMENT appointments[30];

    for (int i = 0; i < 30; i++) {
        appointments[i].dayOfmonth = i + 1;
        strcpy(appointments[i].Appointed, "False");
        appointments[i].patientID = rand() % 10000; // generate a random patient ID
        strcpy(appointments[i].firstName, "");
        strcpy(appointments[i].lastName, "");
        strcpy(appointments[i].gender, "");
        strcpy(appointments[i].illness, "");
        strcpy(appointments[i].selectedDoctor, "");
    }

    bool loopcondition = true;

    int option = 0;

    printWelcome();
    printAppointmentmenu();

    do {


        printf("Enter an option for the above list: ", option);
        scanf_s("%d", &option);
        // check for command line argument
        if (argc > 1) {
            option = atoi(argv[1]);
        }
        else {
            printf("Usage: %s <option>\n", argv[0]);

            switch (option) {
            case 1:
                // add new appointment
                //addAppointment(appointments);
                break;
            case 2:
                //deleteAppointment(appointments);
                // delete existing appointment
                break;
            case 3:
                //updateAppointment(appointments);
                // update existing appointment
                break;
            case 4:
                // display single appointment
                break;
            case 5:
                // display all appointments
                break;
            case 6:
                // display doctor’s diagnostic report
                displayDoctorsdiagnostics(appointments);
                break;
            case 7:
                // display doctor appointment history with patients
                displayDoctorsappointmentHistory(appointments);
                break;
            case 8:
                // search for an appointment
                break;
            case 9:
                // exit program
                exitAppointmentmanager();
                break;
            default:
                printf("Invalid option was picked, please pick an option form 1-9.\n");
                break;
            }
            printAppointmentmenu();
        }
    } while (loopcondition);

    return 0;
}





