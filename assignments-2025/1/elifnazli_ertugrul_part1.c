#include <stdio.h>

int main() {
    float first_number, second_number;
    char operation;
    float expected_result, experimental_result;
    float error, error_percentage, error_sum = 0;
    int input_value;
    /* first run */
    printf("Enter an operation (Example 3+2): ");
    input_value = scanf(" %f %c %f", &first_number, &operation, &second_number);
    if (input_value != 3) {
        printf("Error. Please enter an operation in the correct format.");
        return 1;
    }
    if (operation == '+') {
        expected_result = first_number + second_number;
        experimental_result = first_number - second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '-') {
        expected_result = first_number - second_number;
        experimental_result = first_number * second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '*') {
        expected_result = first_number * second_number;
        experimental_result = first_number + second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '/') {
        if (second_number == 0)
        {
            printf("ERROR: Division by zero.\n");
        }
        else {
            expected_result = first_number / second_number;
            experimental_result = first_number - second_number;
            error = expected_result - experimental_result;
            if (error < 0) {
                error *= -1;
            }
            if (expected_result != 0) {
                error_percentage = error / expected_result * 100;
                error_sum += error_percentage;
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                printf("Error Percentage: %.02f%%\n", error_percentage);
            }
            else if (expected_result == 0){
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                if (error == 0) {
                    printf("Error Percentage: 0.00%%\n");
                }
                else {
                    printf("Error Percentage: Cannot be calculated. (division by zero)\n");
                }
            }
        }
    }
    /* second run */
    printf("Enter an operation (Example 3+2): ");
    input_value = scanf(" %f %c %f", &first_number, &operation, &second_number);
    if (input_value != 3) {
        printf("Error. Please enter an operation in the correct format.\n");
        return 1;
    }
    if (operation == '+') {
        expected_result = first_number + second_number;
        experimental_result = first_number - second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '-') {
        expected_result = first_number - second_number;
        experimental_result = first_number * second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '*') {
        expected_result = first_number * second_number;
        experimental_result = first_number + second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '/') {
        if (second_number == 0)
        {
            printf("ERROR: Division by zero.\n");
        }
        else {
            expected_result = first_number / second_number;
            experimental_result = first_number - second_number;
            error = expected_result - experimental_result;
            if (error < 0) {
                error *= -1;
            }
            if (expected_result != 0) {
                error_percentage = error / expected_result * 100;
                error_sum += error_percentage;
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                printf("Error Percentage: %.02f%%\n", error_percentage);
            }
            else if (expected_result == 0){
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                if (error == 0) {
                    printf("Error Percentage: 0.00%%\n");
                }
                else {
                    printf("Error Percentage: Cannot be calculated. (division by zero)\n");
                }
            }
        }
    }
    /* third run */
    printf("Enter an operation (Example 3+2): ");
    input_value = scanf(" %f %c %f", &first_number, &operation, &second_number);
    if (input_value != 3) {
        printf("Error. Please enter an operation in the correct format.\n");
        return 1;
    }
    if (operation == '+') {
        expected_result = first_number + second_number;
        experimental_result = first_number - second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '-') {
        expected_result = first_number - second_number;
        experimental_result = first_number * second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '*') {
        expected_result = first_number * second_number;
        experimental_result = first_number + second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '/') {
        if (second_number == 0)
        {
            printf("ERROR: Division by zero.\n");
        }
        else {
            expected_result = first_number / second_number;
            experimental_result = first_number - second_number;
            error = expected_result - experimental_result;
            if (error < 0) {
                error *= -1;
            }
            if (expected_result != 0) {
                error_percentage = error / expected_result * 100;
                error_sum += error_percentage;
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                printf("Error Percentage: %.02f%%\n", error_percentage);
            }
            else if (expected_result == 0){
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                if (error == 0) {
                    printf("Error Percentage: 0.00%%\n");
                }
                else {
                    printf("Error Percentage: Cannot be calculated. (division by zero)\n");
                }
            }
        }
    }
    /* fourth run */
    printf("Enter an operation (Example 3+2): ");
    input_value = scanf(" %f %c %f", &first_number, &operation, &second_number);
    if (input_value != 3) {
        printf("Error. Please enter an operation in the correct format.");
        return 1;
    }
    if (operation == '+') {
        expected_result = first_number + second_number;
        experimental_result = first_number - second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '-') {
        expected_result = first_number - second_number;
        experimental_result = first_number * second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '*') {
        expected_result = first_number * second_number;
        experimental_result = first_number + second_number;
        error = expected_result - experimental_result;
        if (error < 0) {
            error *= -1;
        }
        if (expected_result != 0) {
            error_percentage = error / expected_result * 100;
            error_sum += error_percentage;
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            printf("Error Percentage: %.02f%%\n", error_percentage);
        }
        else if (expected_result == 0){
            printf("Expected Result: %.02f\n", expected_result);
            printf("Experimental Result: %.02f\n", experimental_result);
            printf("Error: %.02f\n", error);
            if (error == 0) {
                printf("Error Percentage: 0.00%%\n");
            }
            else {
                printf("Error Percentage: Cannot be calculated. (division by zero)\n");
            }
        }
    }
    else if (operation == '/') {
        if (second_number == 0)
        {
            printf("ERROR: Division by zero.\n");
        }
        else {
            expected_result = first_number / second_number;
            experimental_result = first_number - second_number;
            error = expected_result - experimental_result;
            if (error < 0) {
                error *= -1;
            }
            if (expected_result != 0) {
                error_percentage = error / expected_result * 100;
                error_sum += error_percentage;
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                printf("Error Percentage: %.02f%%\n", error_percentage);
            }
            else if (expected_result == 0){
                printf("Expected Result: %.02f\n", expected_result);
                printf("Experimental Result: %.02f\n", experimental_result);
                printf("Error: %.02f\n", error);
                if (error == 0) {
                    printf("Error Percentage: 0.00%%\n");
                }
                else {
                    printf("Error Percentage: Cannot be calculated. (division by zero)\n");
                }
            }
        }
    }

    printf("Average Error Value: %.02f%%\n", error_sum / 4.0);
    return 0;
}