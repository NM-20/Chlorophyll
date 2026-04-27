#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SimplePropertyTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BF30
   RuntimeId:        096A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FBC
   VfTable:          00000001422122C8
   Address (Base):   00000001430FDD50
*/
#pragma pack(push, 8)
class TransformPropertyTrackData : public SimplePropertyTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct LinearTransform) Values; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TransformPropertyTrackData) == 48);

}
