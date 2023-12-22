#include <math.h>

int main(int argc, char *argv[]){
	int add = 5 + 10; //Result = 15
	int sub = 5 - 10; //Negative number! Result = -5
	int mul = 5 * 10; //Result = 50
	int div = 5 / 10; //Result = 0.5
	int remainder = 51 % 10; //Result = 1
	int bitwise_not = ~add; //Inverted 15
	int bitwise_and = add & mul;
	int bitwise_or = add | mul;
	int bitwise_xor = add ^ mul;
	int bitwise_left_shift = add << mul;
	int bitwise_right_shift = add >> mul;
	int absolute_value = abs(add);
	int arccosine = acos(add);
	int arcsine = asin(add);
	int arctangent = atan(add);
	int cuberoot = cbrt(add);
	int rounded = ceil(add);
	int cosine = cos(add);
	int hyperbolic_cosine = cosh(add); 
	int e_in_power_of_x = exp(add);
	int e_in_power_of_x_minus_one = expm1(add);
	int float_abs = fabs((float)add);
	int positive_difference = fdim(add, mul);
	int floored = floor((float)5.4); //Will return 5
	int hypot = hypot(add, mul); //Returns square root of x^2 + y^2
	int num = fma((float)add, (float)mul, (float)div); //Returns x*y+z without losing precision
	int fmax = fmax((float)add, (float)mul); //Returns max of x and y
	int fmin = fmin((float)add, (float)mul); //Returns min of x and y
	int fmod = fmod((float)add, (float)mul); //Returns floating point remainder of x/y
	int powered = pow(add, mul); //Returns x to the power of y
	int sine = sin(add); //Returns sin of x (in radians)
	int hyperbolic_sin = sinh((double)add); //Returns hyperbolic sin of double x
	float tan = tan((float)add); //Returns tangent of x (x must be in radians)
	int hyperbolic_tangent = tanh((double)add); //Returns hyperbolic tangent of double x
}
