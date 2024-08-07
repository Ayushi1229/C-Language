#include <stdio.h>

struct employee {
    char name[30];
    int id;
    double salary;
};

int main() {
    struct employee emp = {"John Doe", 1234, 5000.0};
    printf("Employee name: %s\n", emp.name);
    printf("Employee ID: %d\n", emp.id);
    printf("Employee salary: %.2lf\n", emp.salary);
    return 0;
}