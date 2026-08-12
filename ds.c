#include <stdio.h>

struct Student {
    char prn[10], name[20];
    int marks;
    float cgpa;
} s[3] = {
    {"24UCS001","Sunil",560,8.1},
    {"24UCS002","Anil",350,5.2},
    {"24UCS003","Maruti",700,9.2}
};

int main() {
    int i;
    float avg = 0;

    printf("CGPA > 7.0:\n");
    for(i=0;i<3;i++)
        if(s[i].cgpa>7)
            printf("%s\n", s[i].name);

    printf("\nMarks < 600:\n");
    for(i=0;i<3;i++)
        if(s[i].marks<600)
            printf("%s\n", s[i].name);

    printf("\nMarks of Anil = ");
    for(i=0;i<3;i++)
        if(s[i].name[0]=='A')
            printf("%d\n", s[i].marks);

    for(i=0;i<3;i++)
        avg += s[i].cgpa;

    printf("\nAverage CGPA = %.2f", avg/3);

    return 0;
}