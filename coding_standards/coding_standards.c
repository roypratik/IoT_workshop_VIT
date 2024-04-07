/* ### 1. Loop Unrolling

**Example:**

Before unrolling:
 */

for (int i = 0; i < 4; i++)
{
    array[i] = i * i;
}

/* After unrolling:
 */

array[0] = 0 * 0;
array[1] = 1 * 1;
array[2] = 2 * 2;
array[3] = 3 * 3;

/* ### 2. Function Inlining


**Example:**

Before inlining: */

inline int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(5, 3);
    return 0;
}

/* After inlining (done by the compiler):
 */

int main()
{
    int result = 5 + 3;
    return 0;
}

/* ### 3. Avoiding Unnecessary Variables


**Example:**

Before optimization: */

int temp = a * b;
int result = temp + c;

/* After optimization:
 */

int result = (a * b) + c;

/* ### 4. Using Efficient Data Types


**Example:**

Instead of using `int` for small range values, `uint8_t` or `int8_t` can be used:
 */

uint8_t smallValue = 5; // When the value range is known to be small

/* ### 5. Using Bitwise Operations


**Example:**

Using bitwise AND to check if a number is even:
 */
if (num & 1)
{
    // Odd
}
else
{
    // Even
}

/* Using left or right shift to multiply or divide by power of 2.

a * 2 is same as a << 1
a / 2 is same as a >> 1

 */

/* ### 6. Memory Access Patterns


**Example:**

Accessing array elements in a sequential manner rather than a random manner improves cache locality:
 */
// Better cache performance
for (int i = 0; i < N; i++)
{
    sum += array[i];
}

/* ### 7. Compiler Optimizations


```bash
gcc -O2 myprogram.c -o myprogram
```
 */
