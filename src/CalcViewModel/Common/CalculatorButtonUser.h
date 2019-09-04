// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "CalcManager/Command.h"

namespace CalculatorApp
{
    namespace CM = CalculationManager;

public
    enum class NumbersAndOperatorsEnum
    {
        Zero = (int)CM::Command::Command0,
        One = (int)CM::Command::Command1,
        Two = (int)CM::Command::Command2,
        Three = (int)CM::Command::Command3,
        Four = (int)CM::Command::Command4,
        Five = (int)CM::Command::Command5,
        Six = (int)CM::Command::Command6,
        Seven = (int)CM::Command::Command7,
        Eight = (int)CM::Command::Command8,
        Nine = (int)CM::Command::Command9,
        Add = (int)CM::Command::CommandADD,
        Subtract = (int)CM::Command::CommandSUB,
        Multiply = (int)CM::Command::CommandMUL,
        Divide = (int)CM::Command::CommandDIV,
        Invert = (int)CM::Command::CommandREC,
        Equals = (int)CM::Command::CommandEQU,
        Decimal = (int)CM::Command::CommandPNT,
        Sqrt = (int)CM::Command::CommandSQRT,
        Percent = (int)CM::Command::CommandPERCENT,
        Negate = (int)CM::Command::CommandSIGN,
        Backspace = (int)CM::Command::CommandBACK,
        ClearEntry = (int)CM::Command::CommandCENTR,
        Clear = (int)CM::Command::CommandCLEAR,
        Degree = (int)CM::Command::CommandDEG,
        Radians = (int)CM::Command::CommandRAD,
        Grads = (int)CM::Command::CommandGRAD,
        Degrees = (int)CM::Command::CommandDegrees,
        OpenParenthesis = (int)CM::Command::CommandOPENP,
        CloseParenthesis = (int)CM::Command::CommandCLOSEP,
        Pi = (int)CM::Command::CommandPI,
        Sin = (int)CM::Command::CommandSIN,
        Cos = (int)CM::Command::CommandCOS,
        Tan = (int)CM::Command::CommandTAN,
        Factorial = (int)CM::Command::CommandFAC,
        XPower2 = (int)CM::Command::CommandSQR,
        Mod = (int)CM::Command::CommandMOD,
        FToE = (int)CM::Command::CommandFE,
        LogBaseE = (int)CM::Command::CommandLN,
        InvSin = (int)CM::Command::CommandASIN,
        InvCos = (int)CM::Command::CommandACOS,
        InvTan = (int)CM::Command::CommandATAN,
        LogBase10 = (int)CM::Command::CommandLOG,
        XPowerY = (int)CM::Command::CommandPWR,
        YRootX = (int)CM::Command::CommandROOT,
        TenPowerX = (int)CM::Command::CommandPOW10,
        EPowerX = (int)CM::Command::CommandPOWE,
        Exp = (int)CM::Command::CommandEXP,
        IsScientificMode = (int)CM::Command::ModeScientific,
        IsStandardMode = (int)CM::Command::ModeBasic,
        None = (int)CM::Command::CommandNULL,
        IsProgrammerMode = (int)CM::Command::ModeProgrammer,
        DecButton = (int)CM::Command::CommandDec,
        OctButton = (int)CM::Command::CommandOct,
        HexButton = (int)CM::Command::CommandHex,
        BinButton = (int)CM::Command::CommandBin,
        And = (int)CM::Command::CommandAnd,
        Ror = (int)CM::Command::CommandROR,
        Rol = (int)CM::Command::CommandROL,
        Or = (int)CM::Command::CommandOR,
        Lsh = (int)CM::Command::CommandLSHF,
        Rsh = (int)CM::Command::CommandRSHF,
        Xor = (int)CM::Command::CommandXor,
        Not = (int)CM::Command::CommandNot,
        A = (int)CM::Command::CommandA,
        B = (int)CM::Command::CommandB,
        C = (int)CM::Command::CommandC,
        D = (int)CM::Command::CommandD,
        E = (int)CM::Command::CommandE,
        F = (int)CM::Command::CommandF,
        Memory, // This is the memory button. Doesn't have a direct mapping to the CalcEngine.
        Sinh = (int)CM::Command::CommandSINH,
        Cosh = (int)CM::Command::CommandCOSH,
        Tanh = (int)CM::Command::CommandTANH,
        InvSinh = (int)CM::Command::CommandASINH,
        InvCosh = (int)CM::Command::CommandACOSH,
        InvTanh = (int)CM::Command::CommandATANH,
        Cube = (int) CM::Command::CommandCUB,
        DMS = (int) CM::Command::CommandDMS,
        Hyp = (int)CM::Command::CommandHYP,
        HexButton = (int)CM::Command::CommandHex,
        DecButton = (int)CM::Command::CommandDec,
        OctButton = (int)CM::Command::CommandOct,
        BinButton = (int)CM::Command::CommandBin,
        Qword = (int)CM::Command::CommandQword,
        Dword = (int)CM::Command::CommandDword,
        Word = (int)CM::Command::CommandWord,
        Byte = (int)CM::Command::CommandByte,
        Cube = (int)CM::Command::CommandCUB,
        DMS = (int)CM::Command::CommandDMS,

        Plot,
        X,
        Y,

        BINSTART = (int)CM::Command::CommandBINEDITSTART,
        BINPOS0 = (int)CM::Command::CommandBINPOS0,
        BINPOS1 = (int)CM::Command::CommandBINPOS1,
        BINPOS2 = (int)CM::Command::CommandBINPOS2,
        BINPOS3 = (int)CM::Command::CommandBINPOS3,
        BINPOS4 = (int)CM::Command::CommandBINPOS4,
        BINPOS5 = (int)CM::Command::CommandBINPOS5,
        BINPOS6 = (int)CM::Command::CommandBINPOS6,
        BINPOS7 = (int)CM::Command::CommandBINPOS7,
        BINPOS8 = (int)CM::Command::CommandBINPOS8,
        BINPOS9 = (int)CM::Command::CommandBINPOS9,
        BINPOS10 = (int)CM::Command::CommandBINPOS10,
        BINPOS11 = (int)CM::Command::CommandBINPOS11,
        BINPOS12 = (int)CM::Command::CommandBINPOS12,
        BINPOS13 = (int)CM::Command::CommandBINPOS13,
        BINPOS14 = (int)CM::Command::CommandBINPOS14,
        BINPOS15 = (int)CM::Command::CommandBINPOS15,
        BINPOS16 = (int)CM::Command::CommandBINPOS16,
        BINPOS17 = (int)CM::Command::CommandBINPOS17,
        BINPOS18 = (int)CM::Command::CommandBINPOS18,
        BINPOS19 = (int)CM::Command::CommandBINPOS19,
        BINPOS20 = (int)CM::Command::CommandBINPOS20,
        BINPOS21 = (int)CM::Command::CommandBINPOS21,
        BINPOS22 = (int)CM::Command::CommandBINPOS22,
        BINPOS23 = (int)CM::Command::CommandBINPOS23,
        BINPOS24 = (int)CM::Command::CommandBINPOS24,
        BINPOS25 = (int)CM::Command::CommandBINPOS25,
        BINPOS26 = (int)CM::Command::CommandBINPOS26,
        BINPOS27 = (int)CM::Command::CommandBINPOS27,
        BINPOS28 = (int)CM::Command::CommandBINPOS28,
        BINPOS29 = (int)CM::Command::CommandBINPOS29,
        BINPOS30 = (int)CM::Command::CommandBINPOS30,
        BINPOS31 = (int)CM::Command::CommandBINPOS31,
        BINPOS32 = (int)CM::Command::CommandBINPOS32,
        BINPOS33 = (int)CM::Command::CommandBINPOS33,
        BINPOS34 = (int)CM::Command::CommandBINPOS34,
        BINPOS35 = (int)CM::Command::CommandBINPOS35,
        BINPOS36 = (int)CM::Command::CommandBINPOS36,
        BINPOS37 = (int)CM::Command::CommandBINPOS37,
        BINPOS38 = (int)CM::Command::CommandBINPOS38,
        BINPOS39 = (int)CM::Command::CommandBINPOS39,
        BINPOS40 = (int)CM::Command::CommandBINPOS40,
        BINPOS41 = (int)CM::Command::CommandBINPOS41,
        BINPOS42 = (int)CM::Command::CommandBINPOS42,
        BINPOS43 = (int)CM::Command::CommandBINPOS43,
        BINPOS44 = (int)CM::Command::CommandBINPOS44,
        BINPOS45 = (int)CM::Command::CommandBINPOS45,
        BINPOS46 = (int)CM::Command::CommandBINPOS46,
        BINPOS47 = (int)CM::Command::CommandBINPOS47,
        BINPOS48 = (int)CM::Command::CommandBINPOS48,
        BINPOS49 = (int)CM::Command::CommandBINPOS49,
        BINPOS50 = (int)CM::Command::CommandBINPOS50,
        BINPOS51 = (int)CM::Command::CommandBINPOS51,
        BINPOS52 = (int)CM::Command::CommandBINPOS52,
        BINPOS53 = (int)CM::Command::CommandBINPOS53,
        BINPOS54 = (int)CM::Command::CommandBINPOS54,
        BINPOS55 = (int)CM::Command::CommandBINPOS55,
        BINPOS56 = (int)CM::Command::CommandBINPOS56,
        BINPOS57 = (int)CM::Command::CommandBINPOS57,
        BINPOS58 = (int)CM::Command::CommandBINPOS58,
        BINPOS59 = (int)CM::Command::CommandBINPOS59,
        BINPOS60 = (int)CM::Command::CommandBINPOS60,
        BINPOS61 = (int)CM::Command::CommandBINPOS61,
        BINPOS62 = (int)CM::Command::CommandBINPOS62,
        BINPOS63 = (int)CM::Command::CommandBINPOS63,
        BINEND = (int)CM::Command::CommandBINEDITEND,
        Hyp = (int)CM::Command::CommandHYP,

        // Enum values below are used for Tracelogging and do not map to the Calculator engine
        MemoryAdd = (int)CM::Command::CommandMPLUS,
        MemorySubtract = (int)CM::Command::CommandMMINUS,
        MemoryRecall = (int)CM::Command::CommandRECALL,
        MemoryClear = (int)CM::Command::CommandMCLEAR,
        BitflipButton = 1000,
        FullKeypadButton = 1001
    };
}
