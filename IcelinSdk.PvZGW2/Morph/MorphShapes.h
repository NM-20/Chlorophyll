#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284FC78
   RuntimeId:        133B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          063C
   VfTable:          00000001422770B8
   Address (Base):   0000000143110350
*/
#pragma pack(push, 8)
class MorphShapes : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class MorphShape) Shapes; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MorphShapes) == 32);

}
