#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851440
   RuntimeId:        146C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          084A
   VfTable:          000000014227F538
   Address (Base):   00000001430EB2C0
*/
#pragma pack(push, 8)
class MovingBodyData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Mass; /* 0x0010 */
  FB_FLOAT32 Inertia; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(MovingBodyData) == 24);

}
