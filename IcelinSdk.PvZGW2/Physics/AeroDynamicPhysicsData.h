#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 00000001428510B8
   RuntimeId:        1438
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0835
   VfTable:          000000014227F690
   Address (Base):   000000014310F5D0
*/
#pragma pack(push, 16)
class AeroDynamicPhysicsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 BodyDrag; /* 0x0010 */
  Vec3 BodyDragOffsetYZ; /* 0x0020 */
  Vec3 BodyDragOffsetXZ; /* 0x0030 */
  Vec3 BodyDragOffsetXY; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(AeroDynamicPhysicsData) == 80);

}
