#include <stdio.h>
#include <string.h>

struct address {
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void printAdd(struct address add);

int main() {
    struct address adds[3];
    
    // Input for person 1
    printf("Enter info for person 1:\n");
    printf("House No: ");
    scanf("%d", &adds[0].houseNo);
    printf("Block: ");
    scanf("%d", &adds[0].block);
    printf("City: ");
    scanf("%s", adds[0].city);
    printf("State: ");
    scanf("%s", adds[0].state);
    
    // Input for person 2
    printf("Enter info for person 2:\n");
    printf("House No: ");
    scanf("%d", &adds[1].houseNo);
    printf("Block: ");
    scanf("%d", &adds[1].block);
    printf("City: ");
    scanf("%s", adds[1].city);
    printf("State: ");
    scanf("%s", adds[1].state);

    // Input for person 3
    printf("Enter info for person 3:\n");
    printf("House No: ");
    scanf("%d", &adds[2].houseNo);
    printf("Block: ");
    scanf("%d", &adds[2].block);
    printf("City: ");
    scanf("%s", adds[2].city);
    printf("State: ");
    scanf("%s", adds[2].state);
    
    // Printing the addresses
    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    
    return 0;
}

void printAdd(struct address add) {
    printf("Address is %d, %d, %s, %s\n", add.houseNo, add.block, add.city, add.state);
}
