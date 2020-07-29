#ifndef __SOLUTIONVISITOR_H__
#define __SOLUTIONVISITOR_H__
#include "treeVisitor.h"


struct SolutionVisitor : public TreeVisitor {
	std::string visit(const Number& num) const override;
	std::string visit(const Plus& plus) const override;
	std::string visit(const Minus& minus) const override;
	std::string visit(const Multiply& mult) const override;
	std::string visit(const Divide& divide) const override;
};


#endif
