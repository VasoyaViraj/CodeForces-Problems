#include <stdio.h>

int main() {
    int numberOfStudents;
    scanf("%d", &numberOfStudents);

    int count1 = 0, count2 = 0, count3 = 0;
    int indexes1[numberOfStudents], indexes2[numberOfStudents], indexes3[numberOfStudents];

    for (int i = 0; i < numberOfStudents; i++) {
        int input;
        scanf("%d", &input);
        if (input == 1) {
            indexes1[count1++] = i + 1;
        } else if (input == 2) {
            indexes2[count2++] = i + 1;
        } else if (input == 3) {
            indexes3[count3++] = i + 1;
        }
    }

    int teamcount = count1;
    if (count2 < teamcount) teamcount = count2;
    if (count3 < teamcount) teamcount = count3;

    printf("%d\n", teamcount);

    for (int i = 0; i < teamcount; i++) {
        printf("%d %d %d\n", indexes1[i], indexes2[i], indexes3[i]);
    }

    return 0;
}
