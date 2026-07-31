#include <stdio.h>
#include <stdlib.h>
struct Student {
    int roll;
    char name[50];
    float marks;
};
int main(){
    int n,highest=0;
    struct Student *s;
    printf("Enter the number of students:");
    scanf("%d",&n);
    s=(struct Student *)malloc(n* sizeof(struct Student));
    for(int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        scanf("%d", &s[i].roll);
        scanf("%s", s[i].name);
        scanf("%f", &s[i].marks);
        if(s[i].marks > s[highest].marks)
            highest = i;
    }
    printf("\nHighest Marks Student\n");
    printf("Roll: %d\n", s[highest].roll);
    printf("Name: %s\n", s[highest].name);
    printf("Marks: %.2f\n", s[highest].marks);
    free(s);
    return 0;
}