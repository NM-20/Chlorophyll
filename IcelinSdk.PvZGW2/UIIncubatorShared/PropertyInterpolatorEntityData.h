#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/PropertyInterpolationType.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/PropertyInterpolationMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428764A8
   RuntimeId:        2DBA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09BF
   VfTable:          0000000142393358
   Address (Base):   00000001430F4C90
*/
#pragma pack(push, 8)
class PropertyInterpolatorEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  PropertyInterpolationType InterpolationType; /* 0x001C */
  PropertyInterpolationMode InterpolationMode; /* 0x0020 */
  FB_FLOAT32 Duration; /* 0x0024 */
  FB_FLOAT32 Velocity; /* 0x0028 */
  FB_BOOLEAN UseVelocity; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PropertyInterpolatorEntityData) == 48);

}
