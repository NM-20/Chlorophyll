#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428366B0
   RuntimeId:        03E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB3
   VfTable:          00000001421F4B28
   Address (Base):   0000000143118B70
*/
#pragma pack(push, 8)
class AudioLanguageSetting : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0010 */
  FB_UINT32 NameHash; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING DisplayName; /* 0x0020 */
  FB_STDARRAY(struct AudioLanguageMapping) Mappings; /* 0x0028 */
  FB_BOOLEAN IsDefault; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AudioLanguageSetting) == 56);

}
