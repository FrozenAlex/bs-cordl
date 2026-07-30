#pragma once
// IWYU pragma private; include "System/Xml/XmlAutoDetectWriter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlRawWriter_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAutoDetectWriter)
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextWriter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class OnRemoveWriter;
}
namespace System::Xml {
class XmlEventCache;
}
namespace System::Xml {
struct XmlOutputMethod;
}
namespace System::Xml {
class XmlRawWriter;
}
namespace System::Xml {
struct XmlStandalone;
}
namespace System::Xml {
class XmlWriterSettings;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml {
class XmlAutoDetectWriter;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlAutoDetectWriter*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlAutoDetectWriter*, "System.Xml", "XmlAutoDetectWriter");
// Dependencies System.Xml.XmlRawWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlAutoDetectWriter
class CORDL_TYPE XmlAutoDetectWriter : public ::System::Xml::XmlRawWriter {
public:
  // Declarations
  __declspec(property(put = set_NamespaceResolver)) ::System::Xml::IXmlNamespaceResolver* NamespaceResolver;

  __declspec(property(get = get_SupportsNamespaceDeclarationInChunks)) bool SupportsNamespaceDeclarationInChunks;

  /// @brief Field eventCache, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_eventCache, put = __cordl_internal_set_eventCache)) ::System::Xml::XmlEventCache* eventCache;

  /// @brief Field onRemove, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onRemove, put = __cordl_internal_set_onRemove)) ::System::Xml::OnRemoveWriter* onRemove;

  /// @brief Field strm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_strm, put = __cordl_internal_set_strm)) ::System::IO::Stream* strm;

  /// @brief Field textWriter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_textWriter, put = __cordl_internal_set_textWriter)) ::System::IO::TextWriter* textWriter;

  /// @brief Field wrapped, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_wrapped, put = __cordl_internal_set_wrapped)) ::System::Xml::XmlRawWriter* wrapped;

  /// @brief Field writerSettings, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_writerSettings, put = __cordl_internal_set_writerSettings)) ::System::Xml::XmlWriterSettings* writerSettings;

  /// @brief Method Close, addr 0x61aecb8, size 0x3c, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method CreateWrappedWriter, addr 0x61ae714, size 0x148, virtual false, abstract: false, final false
  inline void CreateWrappedWriter(::System::Xml::XmlOutputMethod outMethod);

  /// @brief Method EnsureWrappedWriter, addr 0x61ae61c, size 0x10, virtual false, abstract: false, final false
  inline void EnsureWrappedWriter(::System::Xml::XmlOutputMethod outMethod);

  /// @brief Method Flush, addr 0x61aecf4, size 0x3c, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method IsHtmlTag, addr 0x61ae6ac, size 0x68, virtual false, abstract: false, final false
  static inline bool IsHtmlTag(::StringW tagName);

  static inline ::System::Xml::XmlAutoDetectWriter* New_ctor(::System::IO::Stream* strm, ::System::Xml::XmlWriterSettings* writerSettings);

  static inline ::System::Xml::XmlAutoDetectWriter* New_ctor(::System::IO::TextWriter* textWriter, ::System::Xml::XmlWriterSettings* writerSettings);

  static inline ::System::Xml::XmlAutoDetectWriter* New_ctor(::System::Xml::XmlWriterSettings* writerSettings);

  /// @brief Method StartElementContent, addr 0x61af060, size 0x20, virtual true, abstract: false, final false
  inline void StartElementContent();

  /// @brief Method TextBlockCreatesWriter, addr 0x61ae924, size 0x64, virtual false, abstract: false, final false
  inline bool TextBlockCreatesWriter(::StringW textBlock);

  /// @brief Method WriteBase64, addr 0x61aebf0, size 0x64, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteBinHex, addr 0x61aec54, size 0x64, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteCData, addr 0x61ae8dc, size 0x48, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x61aeb50, size 0x4c, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x61aea54, size 0x34, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteComment, addr 0x61ae988, size 0x2c, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x61ae5b4, size 0x68, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x61ae8bc, size 0x20, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndElement, addr 0x61af080, size 0x20, virtual true, abstract: false, final false
  inline void WriteEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteEndNamespaceDeclaration, addr 0x61af180, size 0x20, virtual true, abstract: false, final false
  inline void WriteEndNamespaceDeclaration();

  /// @brief Method WriteEntityRef, addr 0x61aeb04, size 0x4c, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x61af0a0, size 0x20, virtual true, abstract: false, final false
  inline void WriteFullEndElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteNamespaceDeclaration, addr 0x61af0c0, size 0x54, virtual true, abstract: false, final false
  inline void WriteNamespaceDeclaration(::StringW prefix, ::StringW ns);

  /// @brief Method WriteProcessingInstruction, addr 0x61ae9b4, size 0x2c, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteRaw, addr 0x61aea88, size 0x34, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t> buffer, int32_t index, int32_t count);

  /// @brief Method WriteRaw, addr 0x61aeabc, size 0x48, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW data);

  /// @brief Method WriteStartAttribute, addr 0x61ae85c, size 0x60, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartElement, addr 0x61ae62c, size 0x80, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW ns);

  /// @brief Method WriteStartNamespaceDeclaration, addr 0x61af134, size 0x4c, virtual true, abstract: false, final false
  inline void WriteStartNamespaceDeclaration(::StringW prefix);

  /// @brief Method WriteString, addr 0x61aea0c, size 0x48, virtual true, abstract: false, final false
  inline void WriteString(::StringW text);

  /// @brief Method WriteSurrogateCharEntity, addr 0x61aeb9c, size 0x54, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x61aed30, size 0x4c, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x61aedc8, size 0x4c, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x61aeeac, size 0x54, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x61aed7c, size 0x4c, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x61aee14, size 0x4c, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x61aee60, size 0x4c, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x61aef00, size 0x4c, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x61aef4c, size 0x4c, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteWhitespace, addr 0x61ae9e0, size 0x2c, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW ws);

  /// @brief Method WriteXmlDeclaration, addr 0x61aefc8, size 0x4c, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone);

  /// @brief Method WriteXmlDeclaration, addr 0x61af014, size 0x4c, virtual true, abstract: false, final false
  inline void WriteXmlDeclaration(::StringW xmldecl);

  constexpr ::System::Xml::XmlEventCache* const& __cordl_internal_get_eventCache() const;

  constexpr ::System::Xml::XmlEventCache*& __cordl_internal_get_eventCache();

  constexpr ::System::Xml::OnRemoveWriter* const& __cordl_internal_get_onRemove() const;

  constexpr ::System::Xml::OnRemoveWriter*& __cordl_internal_get_onRemove();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_strm() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_strm();

  constexpr ::System::IO::TextWriter* const& __cordl_internal_get_textWriter() const;

  constexpr ::System::IO::TextWriter*& __cordl_internal_get_textWriter();

  constexpr ::System::Xml::XmlRawWriter* const& __cordl_internal_get_wrapped() const;

  constexpr ::System::Xml::XmlRawWriter*& __cordl_internal_get_wrapped();

  constexpr ::System::Xml::XmlWriterSettings* const& __cordl_internal_get_writerSettings() const;

  constexpr ::System::Xml::XmlWriterSettings*& __cordl_internal_get_writerSettings();

  constexpr void __cordl_internal_set_eventCache(::System::Xml::XmlEventCache* value);

  constexpr void __cordl_internal_set_onRemove(::System::Xml::OnRemoveWriter* value);

  constexpr void __cordl_internal_set_strm(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_textWriter(::System::IO::TextWriter* value);

  constexpr void __cordl_internal_set_wrapped(::System::Xml::XmlRawWriter* value);

  constexpr void __cordl_internal_set_writerSettings(::System::Xml::XmlWriterSettings* value);

  /// @brief Method .ctor, addr 0x61ae58c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* strm, ::System::Xml::XmlWriterSettings* writerSettings);

  /// @brief Method .ctor, addr 0x61ae564, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* textWriter, ::System::Xml::XmlWriterSettings* writerSettings);

  /// @brief Method .ctor, addr 0x61ae4bc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlWriterSettings* writerSettings);

  /// @brief Method get_SupportsNamespaceDeclarationInChunks, addr 0x61af114, size 0x20, virtual true, abstract: false, final false
  inline bool get_SupportsNamespaceDeclarationInChunks();

  /// @brief Method set_NamespaceResolver, addr 0x61aef98, size 0x30, virtual true, abstract: false, final false
  inline void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAutoDetectWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAutoDetectWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAutoDetectWriter(XmlAutoDetectWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAutoDetectWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAutoDetectWriter(XmlAutoDetectWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9279 };

  /// @brief Field wrapped, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlRawWriter* ___wrapped;

  /// @brief Field onRemove, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::OnRemoveWriter* ___onRemove;

  /// @brief Field writerSettings, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::XmlWriterSettings* ___writerSettings;

  /// @brief Field eventCache, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlEventCache* ___eventCache;

  /// @brief Field textWriter, offset: 0x48, size: 0x8, def value: None
  ::System::IO::TextWriter* ___textWriter;

  /// @brief Field strm, offset: 0x50, size: 0x8, def value: None
  ::System::IO::Stream* ___strm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlAutoDetectWriter, ___wrapped) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAutoDetectWriter, ___onRemove) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAutoDetectWriter, ___writerSettings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAutoDetectWriter, ___eventCache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAutoDetectWriter, ___textWriter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlAutoDetectWriter, ___strm) == 0x50, "Offset mismatch!");

static_assert(sizeof(::System::Xml::XmlAutoDetectWriter) == 0x58, "Size mismatch!");

} // namespace System::Xml
