#include <stdio.h>
#include <string.h>
#define NUM_CHARS 30

// what is a magformer?..
struct magformer {
    char shape[NUM_CHARS + 1];
    char color[NUM_CHARS + 1];
    int quantity;
};

int main() {
    struct magformer m1 = {"triangle", "green", 6};
    struct magformer m2;

    printf("Enter quantity: ");
    scanf("%d", &m2.quantity);
    printf("Enter shape: ");
    scanf("%s", m2.shape);
    strcpy(m2.color, "green");

    printf("magformer blablabla: %s %s %d\n", m1.shape, m1.color, m1.quantity);
}