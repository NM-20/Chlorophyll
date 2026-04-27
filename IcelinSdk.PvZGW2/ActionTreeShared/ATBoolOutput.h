#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATOutputProperty.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832558
   RuntimeId:        004A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0897
   VfTable:          00000001421E3180
   Address (Base):   00000001431013B0
*/
#pragma pack(push, 8)
class ATBoolOutput : public ATOutputProperty
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ATBoolOutput) == 16);

}
