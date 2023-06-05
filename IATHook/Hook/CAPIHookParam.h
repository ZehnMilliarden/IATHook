#pragma once

#include <Windows.h>

#include "cmdline.h"

class CAPIHookParam
{
public:
    ~CAPIHookParam();
    static CAPIHookParam& Instance();

public:
    void Parse();
    bool IsSilent();

protected:
    CAPIHookParam();

private:
    cmdline::parser m_cmdParam;
    bool m_bIsSilent = false;
};