#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATActionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832198
   RuntimeId:        000E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F2D
   VfTable:          00000001421E33C8
   Address (Base):   000000014311DE50
*/
#pragma pack(push, 8)
class ATPrintAction : public ATActionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Text; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ATPrintAction) == 48);

}
