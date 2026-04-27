#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856A80
   RuntimeId:        192D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0705
   VfTable:          00000001422CB548
   Address (Base):   000000014310D3B0
*/
#pragma pack(push, 8)
class UIFontAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING SourceFile; /* 0x0018 */
  FB_HANDLE(class UITextDatabase) TextDatabase; /* 0x0020 */
  FB_STDARRAY(FB_CSTRING) ScaleformFontName; /* 0x0028 */
  FB_BOOLEAN NumericsOnly; /* 0x0030 */
  FB_BOOLEAN Bold; /* 0x0031 */
  FB_BOOLEAN CompleteKorean; /* 0x0032 */
  FB_BOOLEAN CompleteJapanese; /* 0x0033 */
  FB_BOOLEAN CompleteTraditionalChinese; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIFontAsset) == 56);

}
