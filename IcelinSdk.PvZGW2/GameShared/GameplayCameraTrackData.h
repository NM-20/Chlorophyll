#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraTrackBaseData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F290
   RuntimeId:        12A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CAA
   VfTable:          00000001422768A0
   Address (Base):   00000001430EBC80
*/
#pragma pack(push, 8)
class GameplayCameraTrackData : public CameraTrackBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(GameplayCameraTrackData) == 40);

}
