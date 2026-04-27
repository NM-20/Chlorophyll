#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIHUDPropertyType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428645B8
   RuntimeId:        21F5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C69
   VfTable:          0000000142352758
   Address (Base):   00000001430E5080
*/
#pragma pack(push, 8)
class PVZUIHUDPropertyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING TitleID; /* 0x0018 */
  PVZUIHUDPropertyType PropertyType; /* 0x0020 */
  FB_INT32 StateIn; /* 0x0024 */
  FB_FLOAT32 FloatIn; /* 0x0028 */
  FB_INT32 IntIn; /* 0x002C */
  FB_INT32 IntRange1; /* 0x0030 */
  FB_INT32 IntRange2; /* 0x0034 */
  FB_CSTRING RangeID; /* 0x0038 */
  FB_CSTRING TitleIn; /* 0x0040 */
  FB_CSTRING StatusText; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZUIHUDPropertyEntityData) == 80);

}
