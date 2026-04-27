#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283AE40
   RuntimeId:        085D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AEF
   VfTable:          000000014220BAC0
   Address (Base):   00000001430F0240
*/
#pragma pack(push, 8)
class SimpleDofParamConverterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FocusDistance; /* 0x0018 */
  FB_FLOAT32 BlurFilterDeviation; /* 0x001C */
  FB_FLOAT32 NearDistanceScale; /* 0x0020 */
  FB_FLOAT32 FarDistanceScale; /* 0x0024 */
  FB_FLOAT32 Scale; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SimpleDofParamConverterEntityData) == 48);

}
