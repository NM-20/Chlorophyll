#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876408
   RuntimeId:        2DB0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A8F
   VfTable:          00000001423932A0
   Address (Base):   00000001430E0820
*/
#pragma pack(push, 8)
class LocalizedStringEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Sid; /* 0x0018 */
  FB_STDARRAY(enum LocalizedStringArgumentType) Arguments; /* 0x0020 */
  FB_STDARRAY(FB_UINT32) ArgumentHashes; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(LocalizedStringEntityData) == 48);

}
