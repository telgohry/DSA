

// typedefs
typedef unsigned char uint8_t;
typedef signed char int8_t;

typedef unsigned short uint16_t;
typedef signed short int16_t;

typedef unsigned int uint32_t;
typedef signed int int32_t;

// functions prototypes

/***********************************************************************************/
/* SEARCHING ALGORITHMS                                                            */
/***********************************************************************************/
int8_t LinearSearch(int8_t *arr, uint8_t size, int8_t key,int8_t *index);
int8_t BinarySearch(int8_t *arr, uint8_t size, int8_t key,int8_t *index);

/***********************************************************************************/
/* SORTING ALGORITHMS                                                              */
/***********************************************************************************/
// Bubble Sort (Swap) -> n^2
int8_t BubbleSort(int8_t *arr, int8_t size);

// Insertion Sort (Temp) -> n^2
int8_t InsertionSort(int8_t *arr, int8_t size);

// Selection (Min) -> n^2
int8_t SelectionSort(int8_t *arr, int8_t size);

/***********************************************************************************/
/* UTILITIES                                                                       */
/***********************************************************************************/
// Print Array
void printArray(int8_t *arr, int8_t size);

void swap(int8_t *a, int8_t *b);