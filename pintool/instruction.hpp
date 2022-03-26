#ifndef INTRIGUER_INSTRUCTION_HPP_
#define INTRIGUER_INSTRUCTION_HPP_

#include "pin.H"

VOID taintMOVS(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT memOp1, UINT32 readSize, ADDRINT memOp2, UINT32 writeSize);
VOID taintRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, REG reg2, ADDRINT val, UINT32 size);
VOID taintRegImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, UINT32 size);
VOID taintMemReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg1, ADDRINT val, UINT32 size);
VOID taintRegMem(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg1, UINT32 size);
VOID taintMemImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, UINT32 size);
VOID taintMemMem(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT readAddr, UINT32 readSize, ADDRINT writeAddr, UINT32 writeSize);
VOID taintSTOS(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT memOp, UINT32 writeSize);
VOID taintLODS(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT memOp, UINT32 readSize);
VOID taintLEA(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, UINT32 size);
VOID traceLEA(ADDRINT insAddr, std::string insDis, REG regBase, REG regIndex, REG regDisp, UINT32 size);
VOID traceCMPRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val1, REG reg2, ADDRINT val2, UINT32 size);
VOID traceCMPRegImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, UINT32 size, UINT64 imm);
VOID traceCMPRegMem(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, ADDRINT addr, UINT32 size);
VOID traceCMPMemReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg1, ADDRINT val, UINT32 size);
VOID traceCMPMemImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, UINT32 size, UINT64 imm);
VOID traceCMPS(ADDRINT insAddr, std::string insDis, UINT32 opCount, BOOL isFirst , ADDRINT addr1, ADDRINT addr2, UINT32 size, UINT32 count);
VOID tracePCMPRegReg(ADDRINT insAddr, std::string insDis, CONTEXT* ctx, UINT32 opCount, REG reg1, REG reg2, UINT32 size);
VOID tracePCMPRegMem(ADDRINT insAddr, std::string insDis, CONTEXT* ctx, UINT32 opCount, REG reg1, ADDRINT addr, UINT32 size);
VOID traceArithRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val1, REG reg2, ADDRINT val2, UINT32 size);
VOID traceXORRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val1, REG reg2, ADDRINT val2, UINT32 size);
VOID traceArithRegImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, UINT32 size, UINT64 imm);
VOID traceArithReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, UINT32 size);
VOID traceArithMemReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg1, ADDRINT val, UINT32 size);
VOID traceArithRegMem(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, ADDRINT addr, UINT32 size);
VOID traceArithMemImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, UINT32 size, UINT64 imm);
VOID traceArithMem(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, UINT32 size);
VOID traceANDRegImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, UINT32 size, UINT64 imm);
VOID traceANDMemImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, UINT32 size, UINT64 imm);
VOID traceORRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val1, REG reg2, ADDRINT val2, UINT32 size);
VOID traceORMemReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg1, ADDRINT val, UINT32 size);
VOID traceSHLRegImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, UINT32 size, UINT64 imm);
VOID traceSHLRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, REG reg2, ADDRINT val2, UINT32 size);
VOID traceSHLMemReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg, ADDRINT val, UINT32 size);
VOID traceSHLMemImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, UINT32 size, UINT64 imm);
VOID traceSHRRegImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, UINT32 size, UINT64 imm);
VOID traceSHRRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, REG reg2, ADDRINT val2, UINT32 size);
VOID traceSHRMemReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg, ADDRINT val, UINT32 size);
VOID traceSHRMemImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, UINT32 size, UINT64 imm);
VOID traceMULRegRegImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, REG reg2, ADDRINT val2, UINT32 size, UINT64 imm);
VOID traceMULRegMemImm(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, ADDRINT addr, UINT32 size, UINT64 imm);
VOID traceXCHGRegReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val1, REG reg2, ADDRINT val2, UINT32 size);
VOID traceXCHGMemReg(ADDRINT insAddr, std::string insDis, UINT32 opCount, ADDRINT addr, REG reg1, ADDRINT val, UINT32 size);
VOID traceXCHGRegMem(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, ADDRINT addr, UINT32 size);
VOID traceCMPXCHGRegReg(ADDRINT insAddr, std::string insDis, CONTEXT* ctx, UINT32 opCount, REG reg1, ADDRINT val1, REG reg2, ADDRINT val2, UINT32 size);
VOID traceCMPXCHGMemReg(ADDRINT insAddr, std::string insDis, CONTEXT* ctx, UINT32 opCount, ADDRINT addr, REG reg1, ADDRINT val, UINT32 size);
VOID traceBSWAP(ADDRINT insAddr, std::string insDis, UINT32 opCount, REG reg1, ADDRINT val, UINT32 size);

VOID traceUnsupport(ADDRINT insAddr, std::string insDis);

extern std::ofstream output;

#endif
