#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BTNodeDataWithChildren.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834358
   RuntimeId:        01BD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          128D
   VfTable:          00000001421EB5E8
   Address (Base):   000000014311C050
*/
#pragma pack(push, 8)
class BTChooserNode : public BTNodeDataWithChildren
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BTChooserNode) == 32);

}
