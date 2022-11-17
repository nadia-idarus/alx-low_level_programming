#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Sum a and b.
 * @a: input 1.
 * @b: input 2.
 *  Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract a and b.
 * @a: Input 1.
 * @b: Input 2.
 *
 * Return: subtraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *
 *  * op_mul - Multiply a and b.
 *
 *   * @a: Input 1.
 *
 *    * @b: Input 2.
 *
 *     *
 *
 *      * Return: Multiplication.
 *
 *       */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *
 *  * op_div - Division a and b.
 *
 *   * @a: Input 1.
 *
 *    * @b: Input 2.
 *
 *     *
 *
 *      * Return: Devision.
 *
 *       */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 *
 *  * op_mod - Remainder of the divisiona a and b.
 *
 *   * @a: Input 1.
 *
 *    * @b: Input 1.
 *
 *     *
 *
 *      * Return: Remainder of the division of a by b.
 *
 *       */
int op_mod(int a, int b)
{
	return (a % b);
}
