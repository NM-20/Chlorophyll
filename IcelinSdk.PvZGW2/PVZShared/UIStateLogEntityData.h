#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870890
   RuntimeId:        29C5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AF6
   VfTable:          000000014236D640
   Address (Base):   00000001430E1CC0
*/
#pragma pack(push, 8)
class UIStateLogEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIStateLogEntityData) == 24);

}
