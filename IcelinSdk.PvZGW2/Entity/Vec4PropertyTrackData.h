#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SimplePropertyTrackData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283BF90
   RuntimeId:        0970
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FBF
   VfTable:          00000001422122A8
   Address (Base):   00000001430FDC30
*/
#pragma pack(push, 8)
class Vec4PropertyTrackData : public SimplePropertyTrackData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec4) Values; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(Vec4PropertyTrackData) == 48);

}
