#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SimplePropertyTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BEF0
   RuntimeId:        0966
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FBB
   VfTable:          00000001422122D8
   Address (Base):   00000001430FDE10
*/
#pragma pack(push, 8)
class FloatPropertyTrackData : public SimplePropertyTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_FLOAT32) Values; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FloatPropertyTrackData) == 48);

}
