// Inserting and Appending in an Array
#include <stdio.h>

#define MAX_SIZE 10 // Define maximum size for the array

// Structure to represent an array
struct Array
{
    int A[MAX_SIZE];
    int size;
    int length;
};

// Function to display the elements of the array
void Display(const struct Array arr)
{
    printf("\n--- Array Elements ---\n");
    for (int i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

// Function to append a value to the array
void Append(struct Array *array, int value)
{
    if (array->length < array->size)
        array->A[array->length++] = value;
    else
        printf("Error: Array is full, cannot append %d\n", value);
}

// Function to insert a value at a specific index in the array
int Insert(struct Array *array, int index, int value)
{
    if (index < 0 || index > array->length)
    {
        printf("Error: Invalid index %d\n", index);
        return -1; // Indicate failure
    }
    for (int i = array->length; i > index; i--)
        array->A[i] = array->A[i - 1];
    array->A[index] = value;
    array->length++;
    return 0; // Indicate success
}

int main()
{
    // Initialize an array with some elements
    struct Array arr1 = {{2, 3, 4, 5, 6}, MAX_SIZE, 5};

    // Append a value to the array
    Append(&arr1, 10);

    // Insert a value at the beginning of the array
    int index, value;
    printf("Enter index and value to insert: ");
    scanf("%d %d", &index, &value);
    Insert(&arr1, index, value);
    //Insert(&arr1, 0, 12);

    // Display the array
    Display(arr1);

    return 0;
}