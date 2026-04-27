#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/ActionTreeShared/ATFunctionNode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832AC8
   RuntimeId:        00A0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F38
   VfTable:          00000001421E2E80
   Address (Base):   000000014311CC50
*/
#pragma pack(push, 8)
class ATVectorAngleBetweenFunction : public ATFunctionNode
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ATVectorInput) Input1; /* 0x0018 */
  FB_HANDLE(class ATVectorInput) Input2; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(ATVectorAngleBetweenFunction) == 40);

}
