#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851F60
   RuntimeId:        1514
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11F8
   VfTable:          000000014227EB10
   Address (Base):   00000001430EAF60
*/
#pragma pack(push, 8)
class FloatPhysicsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Density; /* 0x0010 */
  FB_FLOAT32 FilledDensity; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatPhysicsData) == 24);

}
