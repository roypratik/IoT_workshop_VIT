/* ### Static Analysis:

Static analysis involves examining the code without executing it to find bugs,
vulnerabilities, and deviations from coding standards. This automated process
can identify potential issues early in the development cycle, saving time and
reducing costs associated with later-stage debugging and testing.

### MISRA C:

The Motor Industry Software Reliability Association (MISRA) provides a set of
guidelines in the form of MISRA C, aimed at facilitating the safety, reliability,
and portability of C code, particularly in embedded systems. Here are 5 MISRA C
rules with explanations and examples: */

/* 1. **Rule 10.3: The value of an expression shall not be assigned to an object with
a narrower or different essential type.**

   Violation example: */

uint32_t u32a = 1000U;
uint16_t u16a;
u16a = u32a; // Potential loss of data

/*    Compliant solution:
 */
u16a = (uint16_t)u32a; // Explicit cast, assuming the value fits

/* 2. **Rule 11.3: A cast should not be performed between a pointer type and an
integer type.**

   Violation example: */

uint32_t intVal = 0x12345678;
uint32_t *ptr = (uint32_t *)intVal; // Unsafe casting

/*    Compliant solution:
 */
uint32_t *ptr = &intVal; // Correct way to obtain a pointer

/* 3. **Rule 8.2: Function types shall be in prototype form with named parameters.**

   Violation example: */

int add(); // Non-prototype form

/*    Compliant solution:
 */

int add(int a, int b); // Prototype form with named parameters

/* 4. **Rule 17.7: The value returned by a function having non-void return type shall
be used.**

   Violation example: */

int calculate()
{
    return 42;
}

void func()
{
    calculate(); // Return value not used
}

/*    Compliant solution: */

void func()
{
    int value = calculate(); // Now the return value is used
}

/* 5. **Rule 13.5: The right-hand operand of a logical && or || operator shall
not contain persistent side effects.**

   Violation example: */

int x = 0;
if (x != 0 && x++ > 0)
{
    // x++ has a side effect
}

/*    Compliant solution:
 */
int x = 0;
if (x != 0 && (x + 1) > 0)
{
    // No side effects
}
