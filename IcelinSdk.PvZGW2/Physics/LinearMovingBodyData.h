#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/MovingBodyData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/EndPointData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428514D8
   RuntimeId:        1474
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          084B
   VfTable:          000000014227F4F0
   Address (Base):   00000001430EAEA0
*/
#pragma pack(push, 16)
class LinearMovingBodyData : public MovingBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0018[0x0008];
  Vec3 Axis; /* 0x0020 */
  EndPointData Start; /* 0x0030 */
  EndPointData End; /* 0x0044 */
  char pad_0058[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(LinearMovingBodyData) == 96);

}
