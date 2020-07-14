//== XCoreInstPrinter.h - Convert XCore MCInst to assembly syntax -*- C++ -*-=//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief This file contains the declaration of the XCoreInstPrinter class,
/// which is used to print XCore MCInst to a .s file.
///
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_XCORE_INSTPRINTER_XCOREINSTPRINTER_H
#define LLVM_LIB_TARGET_XCORE_INSTPRINTER_XCOREINSTPRINTER_H
#include "llvm/MC/MCInstPrinter.h"

namespace llvm {

class TargetMachine;

class XCoreInstPrinter : public MCInstPrinter {
public:
  XCoreInstPrinter(const MCAsmInfo &MAI, const MCInstrInfo &MII,
                  const MCRegisterInfo &MRI)
    : MCInstPrinter(MAI, MII, MRI) {}

  // Autogenerated by tblgen.
  void printInstruction(const MCInst *MI, raw_ostream &O);
  static const char *getRegisterName(unsigned RegNo);

  void printRegName(raw_ostream &OS, unsigned RegNo) const override;
  void printInst(const MCInst *MI, raw_ostream &O, StringRef Annot) override;
private:
  void printInlineJT(const MCInst *MI, int opNum, raw_ostream &O);
  void printInlineJT32(const MCInst *MI, int opNum, raw_ostream &O);
  void printOperand(const MCInst *MI, unsigned OpNo, raw_ostream &O);
  void printMemOperand(const MCInst *MI, int opNum, raw_ostream &O);
};
} // end namespace llvm

#endif