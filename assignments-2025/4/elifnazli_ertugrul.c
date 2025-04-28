#include <stdio.h>
#include <math.h>

void menu();
void rocket_launch();
void simulate_trajectory();
void save_trajectory_data();
int equation (double, double, double, double);
int round_to_nearest_ten(double);
void print_trajectory (double, double);
void save_trajectory (double, double);
double get_init_velocity();
double get_gravity();
double get_init_height();
double calc_max_height();
double calc_flight_duration();

int main() {
    int choice;
    menu();
    printf("Choice: ");
    scanf("%d", &choice);
    if (choice == 1) {
        rocket_launch();
    }
    else if (choice == 2) {
        simulate_trajectory();
    }
    else if (choice == 3) {
        save_trajectory_data();
    }
    else if (choice == 4) {
        printf("Exiting the program...\n");
    }
    else {
        printf("Please enter a valid number from the menu.\n");
        return 1;
    }
    return 0;
}

void menu() {
    printf("1. Enter rocket launch parameters.\n2. Simulate rocket trajectory.\n3. Save trajectory data.\n4. Exit the program.\n");
}

void rocket_launch() {
    double initial_velocity, gravity = 9.8, initial_height;
    FILE *rocket_data;
    rocket_data = fopen("rocket_data.txt", "w");
    if (rocket_data == NULL) {
        printf("Error: Cannot create the file.");
        return ;
    }
    printf("Enter initial velocity (m/s): ");
    scanf("%lf", &initial_velocity);
    printf("Enter gravity (m/s², default 9.8): ");
    scanf("%lf", &gravity);
    printf("Enter launch height (m): ");
    scanf("%lf", &initial_height);

    fprintf(rocket_data, "%lf %lf %lf", initial_velocity, gravity, initial_height);
    printf("Rocket parameters saved to rocket_data.txt!\n");
    fclose(rocket_data);
    return ;
}

void simulate_trajectory() {
    double max_height, flight_duration;
    double initial_velocity, gravity, initial_height;

    initial_velocity = get_init_velocity();
    gravity = get_gravity();
    initial_height = get_init_height();
    max_height = calc_max_height();
    flight_duration = calc_flight_duration();

    printf("Equation: h(t) = %lf * t^2 + %lf * t + %lf\n", -gravity / 2, initial_velocity, initial_height);
    printf("Simulating trajectory...\n");
    print_trajectory(max_height, flight_duration);
    return ;
}

void save_trajectory_data() {
    double max_height, flight_duration;
    max_height = calc_max_height();
    flight_duration = calc_flight_duration();

    printf("Saving trajectory data...\n");
    printf("Maximum altitude: %.2lf meters\n", max_height);
    printf("Total flight duration: %.2lf seconds\n", flight_duration);
    save_trajectory (max_height, flight_duration);
    printf("Graph saved to trajectory.txt!\n");
    return ;
}

int equation (double gravity, double time, double initial_velocity, double initial_height) {
    double height;
    height = gravity / -2 * pow(time, 2) + initial_velocity * time + initial_height;
    return round_to_nearest_ten(height);
}

int round_to_nearest_ten(double number) {
    int ones_place;
    int number_int = (int)number;
    ones_place = number_int % 10;
    number_int += 10 * (ones_place >= 5) - ones_place;
    return number_int;
}

double get_init_velocity() {
    FILE *rocket_data;
    double init_velocity;
    rocket_data = fopen("rocket_data.txt", "r");
    fscanf(rocket_data, "%lf", &init_velocity);
    fclose(rocket_data);
    return init_velocity;
}

double get_gravity() {
    FILE *rocket_data;
    double temp, gravity;
    rocket_data = fopen("rocket_data.txt", "r");
    fscanf(rocket_data, "%lf %lf", &temp, &gravity);
    fclose(rocket_data);
    return gravity;
}

double get_init_height() {
    FILE *rocket_data;
    double temp, init_height;
    rocket_data = fopen("rocket_data.txt", "r");
    fscanf(rocket_data, "%lf %lf %lf", &temp, &temp, &init_height);
    fclose(rocket_data);
    return init_height;
}

void print_trajectory (double max_height, double flight_duration) {
    int height, i, flight_duration_int, y_axis;
    double initial_velocity, gravity, initial_height, t;

    initial_velocity = get_init_velocity();
    gravity = get_gravity();
    initial_height = get_init_height();
    y_axis = round_to_nearest_ten(max_height);
    flight_duration_int = round(flight_duration);

    /* printing the y-axis */
    for (; y_axis > 0; y_axis -= 10) {
        printf("%3d |", y_axis);
        for(t = 0; t <= flight_duration; t += 0.5) {
            height = equation(gravity, t, initial_velocity, initial_height);
            if (y_axis == height) {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    /* printing the x-axis */
    printf("  0 |");
    for(i = 0; i <= flight_duration_int; i += 2) {
        printf("---|");
    }
    printf("\n ");
    for (i = 0; i <= flight_duration_int + 2; i += 2) {
        printf("%4d", i);
    }
    printf("\n");

    return ;
}

void save_trajectory (double max_height, double flight_duration) {
    FILE *trajectory_data;
    int height, i, flight_duration_int, y_axis;
    double initial_velocity, gravity, initial_height, t;

    trajectory_data = fopen("trajectory_data.txt", "w");
    if (trajectory_data == NULL) {
        printf("Error: Cannot create the file.\n");
        return ;
    }

    initial_velocity = get_init_velocity();
    gravity = get_gravity();
    initial_height = get_init_height();
    y_axis = round_to_nearest_ten(max_height);
    flight_duration_int = round(flight_duration);

    /* printing the y-axis */
    for (; y_axis > 0; y_axis -= 10) {
        fprintf(trajectory_data, "%3d |", y_axis);
        for(t = 0; t <= flight_duration; t += 0.5) {
            height = equation(gravity, t, initial_velocity, initial_height);
            if (y_axis == height) {
                fprintf(trajectory_data, "#");
            }
            else {
                fprintf(trajectory_data, " ");
            }
        }
        fprintf(trajectory_data, "\n");
    }

    /* printing the x-axis */
    fprintf(trajectory_data, "  0 |");
    for(i = 0; i <= flight_duration_int; i += 2) {
        fprintf(trajectory_data, "---|");
    }
    fprintf(trajectory_data, "\n ");
    for (i = 0; i <= flight_duration_int + 2; i += 2) {
        fprintf(trajectory_data, "%4d", i);
    }
    fprintf(trajectory_data, "\nMaximum altitude: %.2lf meters\n", max_height);
    fprintf(trajectory_data, "Total flight duration: %.2lf seconds\n", flight_duration);
    fclose(trajectory_data);
    return ;
}

double calc_max_height() {
    double init_velocity, gravity, init_height, max_height;
    init_velocity = get_init_velocity();
    gravity = get_gravity();
    init_height = get_init_height();
    max_height = init_velocity * init_velocity / (2 * gravity) + init_height;
    return max_height;
}

double calc_flight_duration() {
    double init_velocity, gravity, init_height, flight_duration;
    init_velocity = get_init_velocity();
    gravity = get_gravity();
    init_height = get_init_height();
    flight_duration = (init_velocity + sqrt(init_velocity * init_velocity + 2 * gravity * init_height)) / gravity;
    return flight_duration;
}