#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428505B8
   RuntimeId:        1397
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0649
   VfTable:          000000014227C830
   Address (Base):   00000001430FC790
*/
#pragma pack(push, 8)
class RadiusData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 radius; /* 0x0018 */
  FB_FLOAT32 outerCushion; /* 0x001C */
  FB_FLOAT32 innerCushion; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RadiusData) == 40);

}
