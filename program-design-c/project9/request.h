#ifndef REQUEST_H_INCLUDED
#define REQUEST_H_INCLUDED

// some basic contants that are used
#define ROOM_LEN 100
#define NAME_LEN 30
#define PHONE_LEN 15

// linked list struct
struct request {
	char classroom[ROOM_LEN];
	char first[NAME_LEN + 1];
	char last[NAME_LEN + 1];
	char phone[PHONE_LEN + 1];
    // pointer to the next node of the linked list
	struct request *next;
};

// appends to the end of linked list
struct request *append_to_list(struct request *list);
// updates the room (?) and the phone number in the linked list
void update(struct request *list);
// formats and prints out the contents of a linked list
void printList(struct request *list);
// frees the memory allocated for the linked list
void clearList(struct request *list);
// reads line using pointers
int read_line(char str[], int n);
// function for error exit
void err(char *message);

#endif