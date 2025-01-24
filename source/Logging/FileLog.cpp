// FileLog.cpp: implementation of the CFileLog class.
//
//////////////////////////////////////////////////////////////////////

#include "FileLog.h"
#include "../Utils/Utils.h"

// ----------------------------------------------------------------------------

CFileLog::CFileLog(ofstream &f) : m_f(f) {}

// ----------------------------------------------------------------------------

CFileLog::~CFileLog() {}

// ----------------------------------------------------------------------------

void CFileLog::Reset() {}

// ----------------------------------------------------------------------------

void CFileLog::AddText(const string &sText) { Print(m_f, sText); }

// ----------------------------------------------------------------------------
