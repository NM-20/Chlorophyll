#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428715B8
   RuntimeId:        2A63
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A48
   VfTable:          000000014236C920
   Address (Base):   00000001430E2740
*/
#pragma pack(push, 8)
class UILetterboxEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UILetterboxEntityData) == 24);

}
