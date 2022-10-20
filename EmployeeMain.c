//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 

 

//gcc employeeMain.c employeeTable.c employeeTwo.c 

 

#include <string.h> 

#include <stdlib.h> 

#include "employee.h" 

int main(void){ 

    //defined in employeeSearchOne.c 
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char * phoneToFind);
    //defined in employeeTable.c
    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;      
    PtrToEmployee matchPtr;  //Declaration 
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-2134"); 
    //phone example found 
    if (matchPtr != NULL) 
        printf("Employee phone number is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee phone number is NOT found in the record\n");
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "123-456-7890"); 
    //phone example found 
    if (matchPtr != NULL) 
        printf("Employee phone number is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee phone number 123-456-7890 is NOT found in the record\n");  
    return EXIT_SUCCESS; 

} 