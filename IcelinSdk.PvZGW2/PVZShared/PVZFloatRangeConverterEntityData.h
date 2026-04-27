#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865978
   RuntimeId:        230D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C5
   VfTable:          0000000142350E70
   Address (Base):   00000001430E7A80
*/
#pragma pack(push, 8)
class PVZFloatRangeConverterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  FB_FLOAT32 InStart; /* 0x001C */
  FB_FLOAT32 InEnd; /* 0x0020 */
  FB_FLOAT32 OutStart; /* 0x0024 */
  FB_FLOAT32 OutEnd; /* 0x0028 */
  FB_FLOAT32 InputValue; /* 0x002C */
  FB_BOOLEAN FireEventsOnInit; /* 0x0030 */
  FB_BOOLEAN Invert; /* 0x0031 */
  FB_BOOLEAN Clamp; /* 0x0032 */
  char pad_0033[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZFloatRangeConverterEntityData) == 56);

}
