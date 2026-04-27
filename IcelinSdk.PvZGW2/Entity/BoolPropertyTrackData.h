#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SimplePropertyTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BED0
   RuntimeId:        0964
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FBE
   VfTable:          00000001422122F8
   Address (Base):   00000001430FDE70
*/
#pragma pack(push, 8)
class BoolPropertyTrackData : public SimplePropertyTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_BOOLEAN) Values; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BoolPropertyTrackData) == 48);

}
