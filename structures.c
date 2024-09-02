#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int number;
    char string[50];
} CustomStruct;

void fill_structs(CustomStruct* structs, int size);
void print_structs(CustomStruct* structs, int size);

int main() {
    int size;
    printf("Enter the number of structures needed: ");
    scanf("%d", &size);
    
    CustomStruct* structs = (CustomStruct*) malloc(size * sizeof(CustomStruct));

    fill_structs(structs, size);
    print_structs(structs, size);

    free(structs);
    return 0;
}

void fill_structs(CustomStruct* structs, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter an integer and a string for structure %d: ", i + 1);
        scanf("%d %s", &structs[i].number, structs[i].string);
    }
}

void print_structs(CustomStruct* structs, int size) {
    for (int i = 0; i < size; i++) {
        printf("Structure %d: Number: %d, String: %s\n", i + 1, structs[i].number, structs[i].string);
    }
}
