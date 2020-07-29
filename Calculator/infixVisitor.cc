#include "infixVisitor.h"
#include "wrapper.h"


// prints the number
std::string InfixVisitor::visit(const Number& num) const {
	return num.getOperation();
}


// prints brackets around the summation of left and right including a +
std::string InfixVisitor::visit(const Plus& plus) const {
	std::string expression {"("};

	expression += (plus.getLeft())->accept(*this) + plus.getOperation() + (plus.getRight())->accept(*this);
	expression += ")";

	return expression;
}


// prints brackets around the subtraction of left by right including a -
std::string InfixVisitor::visit(const Minus& minus) const {
	std::string expression {"("};

	expression += (minus.getLeft())->accept(*this) + minus.getOperation() + (minus.getRight())->accept(*this);
	expression += ")";

	return expression;
}


// prints brackets around the product of left and right including a *
std::string InfixVisitor::visit(const Multiply& mult) const {
	std::string expression {"("};

	expression += (mult.getLeft())->accept(*this) + mult.getOperation() + (mult.getRight())->accept(*this);
	expression += ")";

	return expression;
}


// prints brackets around the division of left by right including a /
std::string InfixVisitor::visit(const Divide& divide) const {
	std::string expression {"("};

	expression += (divide.getLeft())->accept(*this) + divide.getOperation() + (divide.getRight())->accept(*this);
	expression += ")";

	return expression;
}
