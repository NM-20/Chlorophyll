#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/BTree/EFuncType.h>

namespace fb
{

/* TypeInfo (Array): 00000001428341D8
   RuntimeId:        01A5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F96
   VfTable:          00000001421EB700
   Address (Base):   00000001430F3420
*/
#pragma pack(push, 8)
class BTFunc : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  EFuncType FuncType; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BTFunc) == 24);

}
