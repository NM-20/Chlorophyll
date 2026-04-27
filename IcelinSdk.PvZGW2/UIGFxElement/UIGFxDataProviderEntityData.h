#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875C68
   RuntimeId:        2D55
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A8A
   VfTable:          000000014238DEB8
   Address (Base):   00000001430E0D60
*/
#pragma pack(push, 8)
class UIGFxDataProviderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIGFxDataProviderEntityData) == 24);

}
