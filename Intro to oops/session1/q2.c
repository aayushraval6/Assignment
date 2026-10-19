#include <stdio.h>
#include <string.h>

char tasks[5][100];
int count = 0;

void markTaskDone(int index) {
    if (index >= 0 && index < count) {
        strcat(tasks[index], " - DONE");
    }
}

int main() {
    int i, index;

    for (i = 0; i < 3; i++) {
        printf("Enter task %d: ", i + 1);
        scanf(" %[^\n]", tasks[i]);
        count++;
    }

    printf("\nEnter task number to mark DONE (1-3): ");
    scanf("%d", &index);

    markTaskDone(index - 1);

    printf("\nUpdated Task List:\n");

    for (i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}
