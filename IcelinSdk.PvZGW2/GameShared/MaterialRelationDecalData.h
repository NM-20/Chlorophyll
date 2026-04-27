#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsMaterialRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849A48
   RuntimeId:        0DDE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1167
   VfTable:          000000014225F940
   Address (Base):   00000001430EDAE0
*/
#pragma pack(push, 8)
class MaterialRelationDecalData : public PhysicsMaterialRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class DecalTemplateData) Decal; /* 0x0010 */
  FB_HANDLE(class DecalTemplateData) ExitDecal; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationDecalData) == 32);

}
