/******************************************************************************
*                                                                             *
*                                                                             *
* Notepad3                                                                    *
*                                                                             *
* Version.h                                                                   *
*   Based on code from Notepad2-mod, (c) XhmikosR 2010-2015                   *
*                                                                             *
*                                                  (c) Rizonesoft 2008-2018   *
*                                                 https://www.rizonesoft.com  *
*                                                                             *
*                                                                             *
*******************************************************************************/

#ifndef NOTEPAD3_VERSION_H
#define NOTEPAD3_VERSION_H

#ifndef _T
#if !defined(ISPP_INVOKED) && (defined(UNICODE) || defined(_UNICODE))
#define _T(text) L##text
#else
#define _T(text) text
#endif
#endif

#define DO_STRINGIFYA(x)    #x
#define DO_STRINGIFYW(x) _T(#x)
#define STRG(x)     DO_STRINGIFYA(x)
#define TSTRG(x)    DO_STRINGIFYW(x)

#include "VersionEx.h"

// ----------------------------------------------------------------------------

#define APPNAME                     L"Notepad3"
#define APPNAMEA                     "Notepad3"

#define VERSION_FILEVERSION_NUM      VERSION_MAJOR,VERSION_MINOR,VERSION_REV,VERSION_BUILD

#define VERSION_FILEVERSION          TSTRG(VERSION_MAJOR) L"." TSTRG(VERSION_MINOR) L"." \
                                     TSTRG(VERSION_REV) L"." TSTRG(VERSION_BUILD)

#define VERSIONA_FILEVERSION         STRG(VERSION_MAJOR) "." STRG(VERSION_MINOR) "." \
                                     STRG(VERSION_REV) "." STRG(VERSION_BUILD)

#if defined(_WIN64)
//   #define VERSION_FILEVERSION_LONG  L"Notepad3 (64-bit) " TSTRG(VERSION_MAJOR) L" Build " TSTRG(VERSION_BUILD)
#define VERSION_FILEVERSION_LONG   APPNAME  L" (64-bit)" VERSION_PATCH L" v" VERSION_FILEVERSION
#define VERSIONA_FILEVERSION_LONG  APPNAMEA  " (64-bit)" VERSIONA_PATCH " v" VERSIONA_FILEVERSION
#else
//   #define VERSION_FILEVERSION_LONG  L"Notepad3 v." TSTRG(VERSION_MAJOR) L" Build " TSTRG(VERSION_BUILD)
#define VERSION_FILEVERSION_LONG   APPNAME  VERSION_PATCH L" v" VERSION_FILEVERSION
#define VERSIONA_FILEVERSION_LONG  APPNAMEA VERSIONA_PATCH " v" VERSIONA_FILEVERSION
#endif

#if defined(_DEBUG) || defined(DEBUG)
#pragma message("Debug Build: " VERSIONA_FILEVERSION_LONG)
#else
#pragma message("Release Build: " VERSIONA_FILEVERSION_LONG)
#endif

#define VERSION_LEGALCOPYRIGHT       L"Copyright © 2015-2018 Rizonesoft"
//#define VERSION_LEGALCOPYRIGHT_LONG  L"© Rizonesoft 2015-2018"
#define VERSION_AUTHORNAME           L"© Rizonesoft"
#define VERSION_WEBPAGEDISPLAY       L"https://www.rizonesoft.com"
#define VERSION_COMPANYNAME          L"© Rizonesoft"
//#define VERSION_MODPAGEDISPLAY       L"https://xhmikosr.github.io/notepad2-mod/"
//#define VERSION_WEBPAGE2DISPLAY      L"http://www.flos-freeware.ch"

#define VERSION_SCIVERSION           L"Scintilla Library v" TSTRG(SCINTILLA_VER) L"  (RegEx: Onigmo v" TSTRG(ONIGMO_REGEX_VER) L")"

// ============================================================================

#define VERSION_UPDATE_CHECK         L"https://www.rizonesoft.com/downloads/notepad3/update/?version=" VERSION_FILEVERSION

// ============================================================================

// NOT able to get "RichEdit Friendly Name Hyperlinks" up and running :-/ (https://blogs.msdn.microsoft.com/murrays/2009/09/24/richedit-friendly-name-hyperlinks/) 
// ... "{\\field{\\*\\fldinst{HYPERLINK \"" VERSIONA_FILEVERSION_LONG "\"}}{\\fldrslt{https://www.rizonesoft.com/downloads/notepad3}}}\\par"\

//"\\viewkind4\\uc1\\pard\\cf1\\f0\\fs20\\b1 " VERSIONA_FILEVERSION_LONG " \\cf0\\uc0\\par"\

#define ABOUT_INFO_RTF  "{"\
                        "\\rtf1\\ansi\\ansicpg1252\\deff0\\deflang1033{\\fonttbl{\\f0\\fswiss\\fcharset0 Arial;}}"\
                        "{\\colortbl ;\\red80\\green160\\blue80;}"\
                        "\\tx3500\\tx7000\\fs18"\
                        "\\cf0 \\b1\\ul1 Contributors:\\ul0\\b0\\par"\
                        "\\cf0 Derick Payne (\\u0169   Rizonesoft)\\tab https://www.rizonesoft.com\\par"\
                        "\\cf0 Flo Balmer et al. (Notepad2)\\tab http://www.flos-freeware.ch\\par"\
                        "\\cf0 XhmikosR (Notepad2-mod)\\tab https://xhmikosr.github.io/notepad2-mod\\par"\
                        "\\cf0 Kai Liu (CodeFolding)\\tab http://code.kliu.org/misc/notepad2\\par"\
                        "\\cf0 RL Vision (Bookmarks)\\tab http://www.rlvision.com/notepad2/about.php\\par"\
                        "\\cf0 Aleksandar Lekov (MarkOcc./AutoCompl.)\\par"\
                        "\\cf0 Bruno Barbieri\\par"\
                        "\\cf0 Matthew Ellis (MinimizeToTray)\\par"\
                        "\\cf0 Igal Tabachnik (RelaunchElevated)\\tab https://github.com/hmemcpy\\par"\
                        "\\cf0 Et alii @ GitHub\\tab https://github.com/XhmikosR/notepad2-mod/graphs/contributors\\par"\
                        "\\cf0 RaiKoHoff\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Open Source / Libraries:\\ul0\\b0\\par"\
                        "\\cf0 N.Hodgson (Scintilla)\\tab http://www.scintilla.org\\par"\
                        "\\cf0 K.Takata (Onigmo Regex)\\tab https://github.com/k-takata/Onigmo\\par"\
                        "\\cf0 D.Dyer (NotepadCrypt)\\par"\
                        "\\cf0 T.D.Hanson (uthash)\\tab https://troydhanson.github.io/uthash\\par"\
                        "\\cf0 Jinsuk Kim (CED EncDet)\\tab https://github.com/google/compact_enc_det\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Acknowledgments:\\ul0\\b0\\par"\
                        "\\cf0 craigo-\\tab https://github.com/craigo-\\par"\
                        "\\cf0 LH_Mouse\\tab https://github.com/lhmouse\\par"\
                        "\\cf0 Pairi Daiza\\tab https://github.com/hpwamr\\par"\
                        "\\cf0 engelhro\\tab https://github.com/engelhro\\par"\
                        "\\cf0 AlexIljin\\tab https://github.com/AlexIljin\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Resources:\\ul0\\b0\\par"\
                        "\\cf0 NotepadCrypt Version (Java)\\tab https://www.nayuki.io/page/notepadcrypt-format-decryptor-java\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Licenses:\\ul0\\b0\\par"\
                        "\\cf0 Scintilla\\tab http://www.scintilla.org/License.txt\\par"\
                        "\\cf0 Onigmo Regex\\tab https://github.com/kkos/oniguruma/blob/master/COPYING\\par"\
                        "\\cf0 uthash\\tab https://troydhanson.github.io/uthash/license.html\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 \\b1\\ul1 Notepad3 License:\\ul0\\b0\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 Notepad3 and MiniPath Copyright \\u0169   2015-2018 Rizonesoft, All rights reserved.\\par"\
                        "\\cf0 https://www.rizonesoft.com\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 Redistribution and use in source and binary forms, with or without modification,\\par"\
                        "\\cf0 are permitted provided that the following conditions are met:\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 1. Redistributions of source code must retain the above copyright\\par"\
                        "\\cf0 notice, this list of conditions and the following disclaimer.\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 2. Redistributions in binary form must reproduce the above copyright\\par"\
                        "\\cf0 notice, this list of conditions and the following disclaimer in the\\par"\
                        "\\cf0 documentation and/or other materials provided with the distribution.\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 3. Neither the name of Florian Balmer nor the names of its contributors\\par"\
                        "\\cf0 may be used to endorse or promote products derived from this software\\par"\
                        "\\cf0 without specific prior written permission.\\par"\
                        "\\cf0 \\par"\
                        "\\cf0 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS\\par"\
                        "\\cf0 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED\\par"\
                        "\\cf0 TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A\\par"\
                        "\\cf0 PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT\\par"\
                        "\\cf0 OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,\\par"\
                        "\\cf0 SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT\\par"\
                        "\\cf0 LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,\\par"\
                        "\\cf0 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY\\par"\
                        "\\cf0 THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\\par"\
                        "\\cf0 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE\\par"\
                        "\\cf0 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\\par"\
                      "}"


//"\\trowd\\cellx4000\\cellx8000"\
//"\\intbl cell 1\\cell"\
//"\\intbl lots of text in cell two\\cell\\row"\
//"\\trowd\\cellx4000\\cellx8000"\
//"\\intbl row 2 cell 1\\cell"\
//"\\intbl lots of text in row 2 cell two\\cell\\row"\


// ============================================================================

// Compiler specific
#if defined(_MSC_VER)
    #if (_MSC_VER >= 1914)
        #if(_MSC_FULL_VER >= 191426428)
            #define VER_CPL     MS Visual C++ 2017 v15.7.0
        #endif
    #elif (_MSC_VER >= 1913)

        #if (_MSC_FULL_VER >= 191326132)
            #define VER_CPL     MS Visual C++ 2017 v15.6.7
        #elif(_MSC_FULL_VER >= 191326131)
            #define VER_CPL     MS Visual C++ 2017 v15.6.6
        #elif(_MSC_FULL_VER >= 191326129)
            #define VER_CPL     MS Visual C++ 2017 v15.6.(3-5)
        #elif(_MSC_FULL_VER >= 191326128)
            #define VER_CPL     MS Visual C++ 2017 v15.6.(0-2)
        #endif
    #elif (_MSC_VER >= 1912)
        #if(_MSC_FULL_VER >= 191225835)
            #define VER_CPL     MS Visual C++ 2017 v15.5.(5-7)
        #elif(_MSC_FULL_VER >= 191225834)
            #define VER_CPL     MS Visual C++ 2017 v15.5.(3-4)
        #elif(_MSC_FULL_VER >= 191225831)
            #define VER_CPL     MS Visual C++ 2017 v15.5.2
        #elif(_MSC_FULL_VER >= 191225830)
            #define VER_CPL     MS Visual C++ 2017 v15.5
        #else
            #define VER_CPL     MS Visual C++ 2017 (version unknown)
        #endif
    #elif (_MSC_VER >= 1911)
        #if((_MSC_FULL_VER >= 191125542) && (_MSC_FULL_VER <= 191125547))
           #define VER_CPL     MS Visual C++ 2017 v15.4
        #elif((_MSC_FULL_VER >= 191125506) && (_MSC_FULL_VER <= 191125508))
           #define VER_CPL     MS Visual C++ 2017 v15.3
        #else
           #define VER_CPL     MS Visual C++ 2017 (version unknown)
        #endif
    #elif (_MSC_VER >= 1910)
        #if ((_MSC_FULL_VER >= 191025017) && (_MSC_FULL_VER <= 191025019))
           #define VER_CPL     MS Visual C++ 2017 v15.2
        #else
            #define VER_CPL    MS Visual C++ 2017 RC
        #endif
    #elif (_MSC_VER == 1900)
        #if (_MSC_FULL_VER == 190024210) || (_MSC_FULL_VER == 190024215)
            #define VER_CPL    MS Visual C++ 2015 Update 3
        #elif (_MSC_FULL_VER == 190023918)
            #define VER_CPL    MS Visual C++ 2015 Update 2
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    MS Visual C++ 2015 Update 1
        #elif (_MSC_FULL_VER == 190023506)
            #define VER_CPL    MS Visual C++ 2015 Update 1
        #else
            #define VER_CPL    MS Visual C++ (version unknown)
        #endif
    #else
        #define VER_CPL        MS Visual C++ (version unknown)
    #endif
#else
    #define VER_CPL            (Unknown Compiler)
#endif

#pragma message("Compiler " STRG(VER_CPL) "  (v" STRG(_MSC_FULL_VER) ")")

#define VERSION_COMPILER  L"Compiled with: " TSTRG(VER_CPL) L" (VC v" TSTRG(_MSC_VER) L")"


#endif // NOTEPAD3_VERSION_H
