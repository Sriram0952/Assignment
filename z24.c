#include <stdio.h>

struct Employee {
    int empid;
    char ename[50];
    float basic;
    float hra;
    float da;
    float it;
    float gross;
    float netpay;
};

int main() {
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Read employee data
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].empid);

        printf("Employee Name: ");
        scanf("%s", emp[i].ename);

        printf("Basic Salary: ");
        scanf("%f", &emp[i].basic);

        // Compute salary components
        emp[i].hra = 0.02 * emp[i].basic;
        emp[i].da = 0.01 * emp[i].basic;
        emp[i].gross = emp[i].basic + emp[i].hra + emp[i].da;
        emp[i].it = 0.05 * emp[i].basic;
        emp[i].netpay = emp[i].gross - emp[i].it;
    }

    // Print employee payroll
    printf("\nEmployee Payroll:\n");
    printf("%-10s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", "Emp ID", "Emp Name", "Basic", "HRA", "DA", "IT", "Gross", "Net Pay");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f %-10.2f\n", emp[i].empid, emp[i].ename, emp[i].basic, emp[i].hra, emp[i].da, emp[i].it, emp[i].gross, emp[i].netpay);
    }

    return 0;
}
// output Enter the number of employees: 2

Enter details of employee 1:
Employee ID: 101
Employee Name: mabu
Basic Salary: 5000

Enter details of employee 2:
Employee ID: 102
Employee Name: rafi
Basic Salary: 7000
Employee Payroll:
Emp ID     Emp Name             Basic      HRA        DA         IT         Gross      Net Pay   
101        mabu                5000.00    100.00     50.00      250.00     5200.00    4950.00   
102        rafi                7000.00.   140.00     70.00      350.00     7210.00    6860.00  //