#ifndef __INFIXVISITOR_H__
#define __INFIXVISITOR_H__
#include "treeVisitor.h"


struct InfixVisitor : public TreeVisitor {
	std::string visit(const Number& num) const override;
	std::string visit(const Plus& plus) const override;
	std::string visit(const Minus& minus) const override;
	std::string visit(const Multiply& mult) const override;
	std::string visit(const Divide& divide) const override;
};


#endif
