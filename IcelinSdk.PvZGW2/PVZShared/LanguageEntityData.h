#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428654A8
   RuntimeId:        22C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0995
   VfTable:          00000001423513F0
   Address (Base):   00000001430E6580
*/
#pragma pack(push, 8)
class LanguageEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN RunOnce; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(LanguageEntityData) == 32);

}
