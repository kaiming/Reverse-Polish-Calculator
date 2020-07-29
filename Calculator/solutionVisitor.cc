#include "solutionVisitor.h"
#include "wrapper.h"


// visits a Number and returns the stored number
std::string SolutionVisitor::visit(const Number& num) const {
	return num.getOperation();
}


// visits a Plus and adds the left and the right branch then returns the result
std::string SolutionVisitor::visit(const Plus& plus) const {
	std::string leftExpression, rightExpression;

	leftExpression = (plus.getLeft())->accept(*this);
	rightExpression = (plus.getRight())->accept(*this);

	int sol {std::stoi(leftExpression) + std::stoi(rightExpression)};

	return std::to_string(sol);
}


// visits a Minus and subtracts the left branch by the right branch then returns the result
std::string SolutionVisitor::visit(const Minus& minus) const {
	std::string leftExpression, rightExpression;

	leftExpression = (minus.getLeft())->accept(*this);
	rightExpression = (minus.getRight())->accept(*this);

	int sol {std::stoi(leftExpression) - std::stoi(rightExpression)};

	return std::to_string(sol);
}


// visits a Multiply and multiplies the left and the right branch then returns the result
std::string SolutionVisitor::visit(const Multiply& mult) const {
	std::string leftExpression, rightExpression;

	leftExpression = (mult.getLeft())->accept(*this);
	rightExpression = (mult.getRight())->accept(*this);

	int sol {std::stoi(leftExpression) * std::stoi(rightExpression)};

	return std::to_string(sol);
}


// visits a Divide and divides the left branch by the right branch then returns the result
std::string SolutionVisitor::visit(const Divide& divide) const {
	std::string leftExpression, rightExpression;

	leftExpression = (divide.getLeft())->accept(*this);
	rightExpression = (divide.getRight())->accept(*this);

	int sol {std::stoi(leftExpression) / std::stoi(rightExpression)};

	return std::to_string(sol);
}
