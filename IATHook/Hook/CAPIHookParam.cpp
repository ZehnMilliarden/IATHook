
#include "CAPIHookParam.h"

CAPIHookParam::~CAPIHookParam()
{

}

CAPIHookParam& CAPIHookParam::Instance()
{
    static CAPIHookParam ins;
    return ins;
}

void CAPIHookParam::Parse()
{
    m_cmdParam.add("silent", 's', "Hook Silent");
    m_cmdParam.parse(::GetCommandLineA());

    if (m_cmdParam.exist("silent"))
    {
        m_bIsSilent = true;
    }
}

bool CAPIHookParam::IsSilent()
{
    return m_bIsSilent;
}

CAPIHookParam::CAPIHookParam()
{

}

