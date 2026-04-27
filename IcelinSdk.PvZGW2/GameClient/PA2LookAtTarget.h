#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142840418
   RuntimeId:        0ACF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F3
   VfTable:          00000001422328A0
   Address (Base):   0000000143114AF0
*/
#pragma pack(push, 8)
class PA2LookAtTarget : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityTrackBaseData) EntityTrack; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PA2LookAtTarget) == 24);

}
