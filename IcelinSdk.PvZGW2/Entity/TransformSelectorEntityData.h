#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B438
   RuntimeId:        08BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09AA
   VfTable:          000000014220B1B8
   Address (Base):   00000001430EF340
*/
#pragma pack(push, 16)
class TransformSelectorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform In1; /* 0x0020 */
  LinearTransform In2; /* 0x0060 */
  FB_BOOLEAN Selection; /* 0x00A0 */
  char pad_00A1[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(TransformSelectorEntityData) == 176);

}
