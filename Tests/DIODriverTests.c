#include <stdio.h>
#include "../Source/MCAL/DIO/dio.h"

void DIO_init_Test(void)
{
    // Number of Test Cases
    uint8_t Tests_Number = 6;
    uint8_t Test_Array[Tests_Number];
    uint8_t Test_Result_Array[Tests_Number];

    // Test Cases
    Test_Array[0] = DIO_init(PORT_A, 3, IN);        //Correct
    Test_Array[1] = DIO_init(13, 3, 1);             // Wrong port
    Test_Array[2] = DIO_init(1, 3, 0);              // Correct
    Test_Array[3] = DIO_init('B', 3, OUT);          // Correct
    Test_Array[4] = DIO_init(PORT_A, 3, 2);         // Wrong direction
    Test_Array[5] = DIO_init(PORT_A, 8, IN);        // Wrong pin
    
    // Expected Test Results
    Test_Result_Array[0]= 0;
    Test_Result_Array[1]= 1;
    Test_Result_Array[2]= 0;
    Test_Result_Array[3]= 0;
    Test_Result_Array[4]= 3;
    Test_Result_Array[5]= 2;

    for (int i=0;i<Tests_Number;i++)
    {
        printf("%s\n", "Tester Name: Islam Barakat");
        printf("%s\n", "Function Name: getCardHolderName");
        printf("%s", "Test Case ");
        printf("%d", i+1);
        printf("%s\n", ":");
        printf("%s", "Expected Result: ");
        printf("%d\n", Test_Result_Array[i]);
        printf("%s", "Actual Result:   ");
        printf("%d\n", Test_Array[i]);
        printf("%s\n", " ");
    }
}

void DIO_write_Test(void)
{
    // Number of Test Cases
    uint8_t Tests_Number = 6;
    uint8_t Test_Array[Tests_Number];
    uint8_t Test_Result_Array[Tests_Number];

    // Test Cases
    Test_Array[0] = DIO_write(PORT_A, 3, LOW);       // Correct
    Test_Array[1] = DIO_write(13, 3, 1);             // Wrong Port
    Test_Array[2] = DIO_write(1, 3, 0);              // Correct
    Test_Array[3] = DIO_write('B', 3, -1);           // Wrong value
    Test_Array[4] = DIO_write('c', 3, HIGH);         // Wrong Port
    Test_Array[5] = DIO_write(PORT_A, -3, LOW);      // Wrong pin
    
    // Expected Test Results
    Test_Result_Array[0]= 0;
    Test_Result_Array[1]= 1;
    Test_Result_Array[2]= 0;
    Test_Result_Array[3]= 4;
    Test_Result_Array[4]= 1;
    Test_Result_Array[5]= 2;

    for (int i=0;i<Tests_Number;i++)
    {
        printf("%s\n", "Tester Name: Islam Barakat");
        printf("%s\n", "Function Name: getCardHolderName");
        printf("%s", "Test Case ");
        printf("%d", i+1);
        printf("%s\n", ":");
        printf("%s", "Expected Result: ");
        printf("%d\n", Test_Result_Array[i]);
        printf("%s", "Actual Result:   ");
        printf("%d\n", Test_Array[i]);
        printf("%s\n", " ");
    }
}

void DIO_toggle_Test(void)
{
    // Number of Test Cases
    uint8_t Tests_Number = 6;
    uint8_t Test_Array[Tests_Number];
    uint8_t Test_Result_Array[Tests_Number];

    // Test Cases
    Test_Array[0] = DIO_toggle('C', 0);         // Correct
    Test_Array[1] = DIO_toggle(65, 4);          // Correct
    Test_Array[2] = DIO_toggle(1, 5);           // Wrong Port
    Test_Array[3] = DIO_toggle('B', 8);         // Wrong Pin
    Test_Array[4] = DIO_toggle(PORT_C, 3);      // Correct
    Test_Array[5] = DIO_toggle('D', 10);        // Wrong Pin
    
    // Expected Test Results
    Test_Result_Array[0]= 0;
    Test_Result_Array[1]= 0;
    Test_Result_Array[2]= 1;
    Test_Result_Array[3]= 2;
    Test_Result_Array[4]= 0;
    Test_Result_Array[5]= 2;

    for (int i=0;i<Tests_Number;i++)
    {
        printf("%s\n", "Tester Name: Islam Barakat");
        printf("%s\n", "Function Name: getCardHolderName");
        printf("%s", "Test Case ");
        printf("%d", i+1);
        printf("%s\n", ":");
        printf("%s", "Expected Result: ");
        printf("%d\n", Test_Result_Array[i]);
        printf("%s", "Actual Result:   ");
        printf("%d\n", Test_Array[i]);
        printf("%s\n", " ");
    }
}

void DIO_read_Test(void)
{
    // Number of Test Cases
    uint8_t Tests_Number = 3;
    uint8_t Test_Array[Tests_Number];
    uint8_t Test_Result_Array[Tests_Number];

    // Test Cases
    uint8_t *value = 2;
    DIO_write(PORT_A, 3, HIGH);
    DIO_read(PORT_A, 3, *value);
    Test_Array[0] = *value;

    uint8_t *value = 2;
    DIO_write(PORT_D, 0, LOW);
    DIO_read(PORT_D, 0, *value);
    Test_Array[1] = *value;

    uint8_t *value = 2;
    DIO_write(PORT_C, 2, HIGH);
    DIO_read(PORT_C, 2, *value);
    Test_Array[2] = *value;

    // Expected Test Results
    Test_Result_Array[0]= 1;
    Test_Result_Array[1]= 0;
    Test_Result_Array[2]= 1;

    for (int i=0;i<Tests_Number;i++)
    {
        printf("%s\n", "Tester Name: Islam Barakat");
        printf("%s\n", "Function Name: getCardHolderName");
        printf("%s", "Test Case ");
        printf("%d", i+1);
        printf("%s\n", ":");
        printf("%s", "Expected Result: ");
        printf("%d\n", Test_Result_Array[i]);
        printf("%s", "Actual Result:   ");
        printf("%d\n", Test_Array[i]);
        printf("%s\n", " ");
    }
}

void main(void)
{
    DIO_init_Test();
    printf("%s\n", "--------------------------------------------------- ");
    DIO_write_Test();
    printf("%s\n", "--------------------------------------------------- ");
    DIO_toggle_Test();
    printf("%s\n", "--------------------------------------------------- ");
    DIO_read_Test();
}