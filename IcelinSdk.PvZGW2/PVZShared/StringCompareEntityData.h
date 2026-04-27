#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864D38
   RuntimeId:        2250
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A5A
   VfTable:          0000000142352008
   Address (Base):   00000001430E7EA0
*/
#pragma pack(push, 8)
class StringCompareEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  FB_STDARRAY(FB_CSTRING) CompareStrings; /* 0x0020 */
  FB_CSTRING CompareIn; /* 0x0028 */
  FB_UINT32 CompareHashIn; /* 0x0030 */
  FB_BOOLEAN MatchSubstring; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(StringCompareEntityData) == 56);

}
