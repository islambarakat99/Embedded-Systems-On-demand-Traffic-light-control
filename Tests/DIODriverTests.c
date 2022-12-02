#include <stdio.h>
#include "../Source/MCAL/DIO/dio.h"

void DIO_init_Test(void)
{
    // Number of Test Cases
    uint8_t Tests_Number = 6;
    uint8_t Test_Array[Tests_Number];
    uint8_t Test_Result_Array[Tests_Number];

    // Test Cases
    Test_Array[0] = DIO_init(PORT_A, 3, LOW);
    Test_Array[1] = DIO_init(13, 3, LOW);
    Test_Array[2] = DIO_init(1, 3, LOW);
    Test_Array[3] = DIO_init('B', 3, LOW);
    Test_Array[4] = DIO_init(PORT_A, 3, LOW);
    Test_Array[5] = DIO_init(PORT_A, 3, LOW);
    
    // Expected Test Results
    Test_Result_Array[0]= 1;
    Test_Result_Array[1]= 1;
    Test_Result_Array[2]= 0;
    Test_Result_Array[3]= 1;
    Test_Result_Array[4]= 1;
    Test_Result_Array[5]= 1;

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
    Test_Array[0] = DIO_init(PORT_A, 3, LOW);
    Test_Array[1] = DIO_init(13, 3, LOW);
    Test_Array[2] = DIO_init(1, 3, LOW);
    Test_Array[3] = DIO_init('B', 3, LOW);
    Test_Array[4] = DIO_init(PORT_A, 3, LOW);
    Test_Array[5] = DIO_init(PORT_A, 3, LOW);
    
    // Expected Test Results
    Test_Result_Array[0]= 1;
    Test_Result_Array[1]= 1;
    Test_Result_Array[2]= 0;
    Test_Result_Array[3]= 1;
    Test_Result_Array[4]= 1;
    Test_Result_Array[5]= 1;

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
    Test_Array[0] = DIO_init(PORT_A, 3, LOW);
    Test_Array[1] = DIO_init(13, 3, LOW);
    Test_Array[2] = DIO_init(1, 3, LOW);
    Test_Array[3] = DIO_init('B', 3, LOW);
    Test_Array[4] = DIO_init(PORT_A, 3, LOW);
    Test_Array[5] = DIO_init(PORT_A, 3, LOW);
    
    // Expected Test Results
    Test_Result_Array[0]= 1;
    Test_Result_Array[1]= 1;
    Test_Result_Array[2]= 0;
    Test_Result_Array[3]= 1;
    Test_Result_Array[4]= 1;
    Test_Result_Array[5]= 1;

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
    uint8_t Tests_Number = 6;
    uint8_t Test_Array[Tests_Number];
    uint8_t Test_Result_Array[Tests_Number];

    // Test Cases
    Test_Array[0] = DIO_init(PORT_A, 3, LOW);
    Test_Array[1] = DIO_init(13, 3, LOW);
    Test_Array[2] = DIO_init(1, 3, LOW);
    Test_Array[3] = DIO_init('B', 3, LOW);
    Test_Array[4] = DIO_init(PORT_A, 3, LOW);
    Test_Array[5] = DIO_init(PORT_A, 3, LOW);
    
    // Expected Test Results
    Test_Result_Array[0]= 1;
    Test_Result_Array[1]= 1;
    Test_Result_Array[2]= 0;
    Test_Result_Array[3]= 1;
    Test_Result_Array[4]= 1;
    Test_Result_Array[5]= 1;

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