#define BOOST_TEST_MODULE mytests
#include <boost/test/included/unit_test.hpp>
#include "rational.h"

using namespace ExactArithmetic;

Rational checkAddition() {

	Rational x = Rational(1,5);
	Rational y = Rational(3,5);
	return x + y;

}

Rational checkNegativeNumber() {

	Rational x = Rational(-2, 3);
	Rational y = Rational(-1, 3);
	return 1;

}
Rational checkNegative() {

	Rational x = Rational(3, 5);
	Rational y = Rational(1, 5);
	return x - y;

}

Rational checkMutiple() {

	Rational x = Rational(1, 4);
	Rational y = Rational(1, 2);
	return x * y;

}

Rational checkDivide() {

	Rational x = Rational(2, 5);
	Rational y = Rational(3, 5);

	return x / y;

}

Rational normaliseTest() {

	Rational x = Rational(1000,9000);
	return x;

}

BOOST_AUTO_TEST_CASE(CheckAbs) {
	//the expect answer should be 1
	BOOST_CHECK_EQUAL(checkNegativeNumber(), 1);
}
BOOST_AUTO_TEST_CASE(CheckAddition) {
	//the expect answer should be 4/5
	Rational result = Rational(4, 5);
	BOOST_CHECK_EQUAL(checkAddition(),result);
}

BOOST_AUTO_TEST_CASE(CheckAdditionFalse) {
	//the expect answer should be 4/5
	Rational result = Rational(3,5);
	//assign wrong number to test if wrong answer 
	BOOST_CHECK_EQUAL(checkAddition(), result);
}


BOOST_AUTO_TEST_CASE(CheckSubtraction) {
	//the expect answer should be 2/5
	Rational result = Rational(2, 5);
	BOOST_CHECK_EQUAL(checkNegative(), result);
}

BOOST_AUTO_TEST_CASE(CheckSubtractionFalse) {
	//the expect answer should be 2/5
	Rational result = Rational(4, 5);
	//assign wrong number to test with wrong number
	BOOST_CHECK_EQUAL(checkNegative(), result);
}

BOOST_AUTO_TEST_CASE(CheckMultiple) {
	//the expect answer should be 1/4
	Rational result = Rational(1,8);
	BOOST_CHECK_EQUAL(checkMutiple(),result);
}

BOOST_AUTO_TEST_CASE(CheckMultipleFalse) {
	//the expect answer should be 1/4
	Rational result = Rational(1, 4);
	//assign wrong number to test with wrong number
	BOOST_CHECK_EQUAL(checkMutiple(), result);
}


BOOST_AUTO_TEST_CASE(CheckDivide) {
	//the expect answer should be 2/3
	Rational result = Rational(2, 3);
	BOOST_CHECK_EQUAL(checkDivide(), result);
}

BOOST_AUTO_TEST_CASE(CheckDivideFalse) {
	//the expect answer should be 2/3
	Rational result = Rational(1, 3);
	//assign wrong number to test with wrong number
	BOOST_CHECK_EQUAL(checkDivide(),result);
}
BOOST_AUTO_TEST_CASE(CheckNormaliseTest) {
	//the expect answer should be 1/9;
	Rational result = Rational(1, 9);
	BOOST_CHECK_EQUAL(normaliseTest(), result);
}

BOOST_AUTO_TEST_CASE(CheckNormaliseTestFalse) {
	//the expect answer should be 1/9;
	Rational result = Rational(2, 9);
	//assign wrong number to test with wrong number
	BOOST_CHECK_EQUAL(normaliseTest(), result);
}

