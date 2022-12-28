#include <stdio.h>
#include <string.h>

int output();
int details();
int age1, doa[30];
long long con_num1, con_num2;
char name1[100], name2[100], sym[50], add1[100], bg1[3], gen1[11], rel[50];

int main()
{
	printf("-------------------------------------------------------------------\n");
	printf("                  Health Care Organisation System                  \n");
	printf("-------------------------------------------------------------------\n");
	details();
}

int details()
{
	//Taking Patient Details and storing The Data.
	
	printf("PATIENT DETAILS\n");
	printf("Name of patient: ");
	scanf("%s", &name1);
	
	printf("Patient Age: ");
	scanf("%s", &age1);
	
	printf("Enter Gender(m/f/t): ");
	scanf("%s", &gen1);
	
	printf("Date OF Addmission: ");
	scanf("%s", &doa);
	
	printf("Enter Blood Group: ");
	scanf("%s", &bg1);
	
	printf("Enter Personal Contact Number: ");
	scanf("%s", &con_num1);
	
	printf("Enter Guardian's Contact Number: ");
	scanf("%s", &con_num2);
	
	printf("Guardian's Relation with Patient: ");
	scanf("%s", &rel);
	
	printf("Enter Residential Address: ");
	scanf("%s", &add1);
	
	printf("Enter Symptoms: ");
	scanf("%s", &sym);
	
	printf("\n");
	printf("\n");
	
	output();
	return 0;
}

int output()
{
	int exit();
	
	printf("-------------------> Health Care Organistion <-----------------\n");
	printf("\n");
	printf("---------------------------------------------------------------\n");
	printf("                       > PAATIENT DETAILS <                    \n");
	printf("---------------------------------------------------------------\n");
	printf("\n");
  
	printf("\tName of the Patient: %s\n", name1);
	printf("\n");
	printf("\tPatient's Age: %d\n", age1);
	printf("\n");
	printf("\tPatient's Gender: %s\n", gen1);
	printf("\n");
	printf("\tPatient's Blood Group: %s\n", bg1);
	printf("\n");
	printf("\tPatient's Contact Number: %lld\n", con_num1);
	printf("\n");
  
	printf("\tGuardian's Contact Number: %lld\n", con_num2); 
	printf("\n");
	printf("\tGuardian's Relation with Patient: %s\n", rel);
	printf("\n");
  
  printf("\tPatient's Resedential Address: %s\n", add1);
  printf("\n");
  
  printf("\tPatient's Symptoms: %s\n", sym);
 
  printf("\n");
  printf("\n");
  
  printf("\t Do you want to re-submit the form or EXIT ?");
  printf("\t1. Continue\n");
  printf("\t2. EXIT\n");
  scanf("%d", &exit_task);
    
    switch(exit_task)
    {
    	case 1 :main();
    		break;
    	case 2 : printf("\tHopeyou enjoyed it! STAY SAFE");
    		break;
	  }
	return 0;
}
