#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main() {
    struct Student s[5];
    int highest = 0;
    float total = 0, average;
    for(int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%f", &s[i].marks);
        total += s[i].marks;
        if(s[i].marks > s[highest].marks)
            highest = i;
    }
    average = total / 5;
    printf("\nHighest Marks Student\n");
    printf("Roll: %d\n", s[highest].roll);
    printf("Name: %s\n", s[highest].name);
    printf("Marks: %.2f\n", s[highest].marks);
    printf("\nAverage Marks = %.2f\n", average);
    return 0;
}