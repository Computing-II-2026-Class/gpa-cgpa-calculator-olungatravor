/*
Name: Olunga Travor
Registration Number: 25/U/BIO/028/GV
*/

#include <stdio.h>

int main(void) {
    /* Declare variables here */
    float s1[8], s2[8];
    int gp1[8], gp2[8];
    char grade1[8], grade2[8];
    int units_1[] = {4, 3, 3, 3, 3, 3, 2, 3};
    int units_2[] = {4, 3, 3, 3, 3, 3, 3, 3};
   
    float s1_contribution = 0, s2_contribution = 0;
    float gpa_1, gpa_2, cgpa;

    /* Read 16 scores */
    printf("Enter Semester I Marks:\n ");
    printf("1.  TEMB 1101: "); scanf("%f", &s1[0]);
    printf("2.  TEMB 1102: "); scanf("%f", &s1[1]);
    printf("3.  TEMB 1103: "); scanf("%f", &s1[2]);
    printf("4.  TEMB 1104: "); scanf("%f", &s1[3]);
    printf("5.  TEMB 1105: "); scanf("%f", &s1[4]);
    printf("6.  TEMB 1106: "); scanf("%f", &s1[5]);
    printf("7.  TEMB 1107: "); scanf("%f", &s1[6]);
    printf("8.  TEMB 1108: "); scanf("%f", &s1[7]);

    printf("\nEnter Semester II Marks:\n ");
    printf("9.  TEMB 1201: "); scanf("%f", &s2[0]);
    printf("10. TEMB 1202: "); scanf("%f", &s2[1]);
    printf("11. TEMB 1203: "); scanf("%f", &s2[2]);
    printf("12. TEMB 1204: "); scanf("%f", &s2[3]);
    printf("13. TEMB 1205: "); scanf("%f", &s2[4]);
    printf("14. TEMB 1206: "); scanf("%f", &s2[5]);
    printf("15. TEMB 1207: "); scanf("%f", &s2[6]);
    printf("16. TEMB 1208: "); scanf("%f", &s2[7]);


    /* Validate input */
    for(int i = 0; i < 8; i++) {
        if(s1[i] < 0 || s1[i] > 100 ||s2[i] < 0 || s2[i] > 100) {
            printf("Invalid score entered\n");
            return 0;
        }
    }

    /* Determine grades and grade points */
    // Semester I
    for(int i = 0; i < 8; i++){
        if (s1[i] >= 80) { gp1[i] = 5; grade1[i] = 'A'; }
        else if (s1[i] >= 70) { gp1[i] = 4; grade1[i] = 'B'; }
        else if (s1[i] >= 60) { gp1[i] = 3; grade1[i] = 'C'; }
        else if (s1[i] >= 50) { gp1[i] = 2; grade1[i] = 'D'; }
        else { gp1[i] = 0; grade1[i] = 'F'; }
        s1_contribution += (float)gp1[i] * units_1[i];
    }
    // Semester II
    for(int i = 0; i < 8; i++){
        if (s2[i] >= 80) { gp2[i] = 5; grade2[i] = 'A'; }
        else if (s2[i] >= 70) { gp2[i] = 4; grade2[i] = 'B'; }
        else if (s2[i] >= 60) { gp2[i] = 3; grade2[i] = 'C'; }
        else if (s2[i] >= 50) { gp2[i] = 2; grade2[i] = 'D'; }
        else { gp2[i] = 0; grade2[i] = 'F'; }
        s2_contribution += (float)gp2[i] * units_2[i];
    }

    /* Compute Semester I GPA */
   gpa_1 = s1_contribution / 24.0;

    /* Compute Semester II GPA */
    gpa_2 = s2_contribution / 25.0;


    /* Compute CGPA */
    cgpa = (s1_contribution + s2_contribution) / 49.0;

    /* Determine classification */

    /* Display full academic report */
    printf("\n%-10s | %-6s | %-5s | %-5s | %-5s | %-s\n", "Code", "Score", "Grade", "GP", "CU", "Weighted Contribution");
    printf("-----------------------------------------------------------------\n");

    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1101", s1[0], grade1[0], gp1[0], units_1[0], (float)gp1[0]*units_1[0]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1102", s1[1], grade1[1], gp1[1], units_1[1], (float)gp1[1]*units_1[1]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1103", s1[2], grade1[2], gp1[2], units_1[2], (float)gp1[2]*units_1[2]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1104", s1[3], grade1[3], gp1[3], units_1[3], (float)gp1[3]*units_1[3]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1105", s1[4], grade1[4], gp1[4], units_1[4], (float)gp1[4]*units_1[4]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1106", s1[5], grade1[5], gp1[5], units_1[5], (float)gp1[5]*units_1[5]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1107", s1[6], grade1[6], gp1[6], units_1[6], (float)gp1[6]*units_1[6]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1108", s1[7], grade1[7], gp1[7], units_1[7], (float)gp1[7]*units_1[7]);


    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1201", s2[0], grade2[0], gp2[0], units_2[0], (float)gp2[0]*units_2[0]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1202", s2[1], grade2[1], gp2[1], units_2[1], (float)gp2[1]*units_2[1]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1203", s2[2], grade2[2], gp2[2], units_2[2], (float)gp2[2]*units_2[2]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1204", s2[3], grade2[3], gp2[3], units_2[3], (float)gp2[3]*units_2[3]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1205", s2[4], grade2[4], gp2[4], units_2[4], (float)gp2[4]*units_2[4]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1206", s2[5], grade2[5], gp2[5], units_2[5], (float)gp2[5]*units_2[5]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1207", s2[6], grade2[6], gp2[6], units_2[6], (float)gp2[6]*units_2[6]);
    printf("%-10s | %-6.1f | %-5c | %-5d | %-5d | %.1f\n", "TEMB 1208", s2[7], grade2[7], gp2[7], units_2[7], (float)gp2[7]*units_2[7]);
    

    printf("\nSemester I GPA: %.2f\n", gpa_1);
    printf("Semester II GPA: %.2f\n", gpa_2);
    printf("CGPA: %.2f\n", cgpa);

    printf("Classification: ");
    if (cgpa >= 4.40) printf("First Class\n");
    else if (cgpa >= 3.60) printf("Second Class Upper\n");
    else if (cgpa >= 2.80) printf("Second Class Lower\n");
    else if (cgpa >= 2.00) printf("Pass\n");
    else printf("Fail\n");

    return 0;
}
