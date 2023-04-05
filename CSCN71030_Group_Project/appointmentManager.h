#pragma once

#define MAXSTRLEN 100
#define DAYSINMONTH 30

typedef struct Appointment {
    char Appointed[MAXSTRLEN];
    char firstName[MAXSTRLEN];
    char lastName[MAXSTRLEN];
    char gender[MAXSTRLEN];
    char illness[MAXSTRLEN];
    char selectedDoctor[MAXSTRLEN];
    int patientID;
    int dayOfmonth;
} APPOINTMENT;

