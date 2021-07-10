/* Copyright 2021 the SumatraPDF project authors (see AUTHORS file).
   License: Simplified BSD (see COPYING.BSD) */

namespace strconv {

std::wstring_view Utf8ToWstrV(const char* s, size_t cb = (size_t)-1, Allocator* a = nullptr);
std::wstring_view Utf8ToWstrV(std::string_view sv, Allocator* a = nullptr);
WCHAR* Utf8ToWstr(const char* s, size_t cb = (size_t)-1, Allocator* a = nullptr);

std::string_view WstrToCodePageV(uint codePage, const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
std::string_view WstrToUtf8V(const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
std::string_view WstrToUtf8V(std::wstring_view, Allocator* a = nullptr);
char* WstrToCodePage(uint codePage, const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
char* WstrToUtf8(const WCHAR* s, size_t cch = (size_t)-1, Allocator* a = nullptr);
char* WstrToUtf8(std::wstring_view sv, Allocator* a = nullptr);

// TODO: remove use of this and replace with the improved versions below
size_t WstrToUtf8Buf(const WCHAR* s, char* bufOut, size_t cbBufOut);
char* WstrToUtf8Buf(const WCHAR* s, size_t cch, char* bufOut, size_t* cbBufInOut);

std::string_view ToMultiByte(const char* src, uint codePageSrc, uint codePageDest);
WCHAR* ToWideChar(const char* src, uint codePage, int cbSrc = -1);

std::string_view UnknownToUtf8(const std::string_view&);

WCHAR* FromCodePage(const char* src, uint cp);

WCHAR* Utf8ToWstr(std::string_view sv);

std::string_view WstrToCodePage(const WCHAR* txt, uint codePage, int cchTxt = -1);
std::string_view WstrToAnsi(const WCHAR*);

WCHAR* FromAnsi(const char* src, size_t cbSrc = (size_t)-1);
size_t ToCodePageBuf(char* buf, int cbBuf, const WCHAR* s, uint cp);
size_t FromCodePageBuf(WCHAR* buf, int cchBuf, const char* s, uint cp);

} // namespace strconv
