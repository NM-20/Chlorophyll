#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865EA8
   RuntimeId:        235D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          115F
   VfTable:          00000001423509F0
   Address (Base):   00000001430D0260
*/
#pragma pack(push, 8)
class MaterialPropertyPVZGameplayData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN CanRoot; /* 0x0010 */
  FB_BOOLEAN CanBorrow; /* 0x0011 */
  FB_BOOLEAN CanBeDeployedOn; /* 0x0012 */
  char pad_0013[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MaterialPropertyPVZGameplayData) == 24);

}
