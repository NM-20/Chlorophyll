#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851400
   RuntimeId:        1468
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E42
   VfTable:          000000014227F578
   Address (Base):   00000001430EAF00
*/
#pragma pack(push, 8)
class LoosePartPhysicsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FakePhysicsData) FakePhysics; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LoosePartPhysicsData) == 24);

}
