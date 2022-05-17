//===- polly/MaximalStaticExpansion.h - expand memory access -*- C++ -*-======//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This pass fully expand the memory accesses of a Scop to get rid of
// dependencies.
//
//===----------------------------------------------------------------------===//

#ifndef POLLY_MAXIMALSTATICEXPANSION_H
#define POLLY_MAXIMALSTATICEXPANSIO_H

#include "polly/ScopPass.h"
#include "llvm/IR/PassManager.h"

namespace polly {

class MaximalStaticExpander : public llvm::PassInfoMixin<MaximalStaticExpander> {
    llvm::PreservedAnalyses run(Scop &, ScopAnalysisManager &,
                              ScopStandardAnalysisResults &, SPMUpdater &);
};

} // namespace polly

#endif /* POLLY_MAXIMALSTATICEXPANSION_H */
