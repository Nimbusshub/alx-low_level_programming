# Hash tables

**Hash Tables** (also known as Hash Maps or Dictionary) is a data structure that is used to implement an associative array to store information. It saves its information by mapping a key to a value.
Some of the concepts of Hash Table that needs to be understood for better understanding include **Hash Function** and **Hash Collision**.

## Data Structures

The data structures used for this project can be found below:

```bash
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;

```

## Files in the Directory

| Filename                | Description                                           |
| ----------------------- | ----------------------------------------------------- |
| `0-hash_table_create.c` | Function that creates a hash table                    |
| `1-djb2.c`              | Function that executes the djb2 algorithm             |
| `2-key_index.c`         | Function that returns the index of a key              |
| `3-hash_table.c`        | Function that adds an element to the hash table       |
| `4-hash_table_get.c`    | Function that retrieves a value associated with a key |
| `5-hash_table_print.c`  | Function that prints a hash table                     |
| `6-hash_table_delete.c` | Function that deletes a hash table                    |

### PS

This is a project done during **Full Stack Software Engineering** studies at **ALX_AFRICA**. The objectives of the project is to teach **ALX-SE students** about Hash tables Data Structures algorithm and its implementation using **C language**.
