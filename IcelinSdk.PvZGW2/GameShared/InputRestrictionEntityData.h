#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849740
   RuntimeId:        0DB4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC8
   VfTable:          000000014225FD88
   Address (Base):   00000001430EE500
*/
#pragma pack(push, 8)
class InputRestrictionEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_INT32) DisabledInputs; /* 0x0018 */
  FB_BOOLEAN OverridePreviousInputRestriction; /* 0x0020 */
  FB_BOOLEAN ApplyRestrictionsToSpecificPlayer; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(InputRestrictionEntityData) == 40);

}
