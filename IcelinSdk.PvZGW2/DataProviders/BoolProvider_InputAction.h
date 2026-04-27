#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProvider_InputActionConditions.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834898
   RuntimeId:        0216
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          106B
   VfTable:          00000001421ECC80
   Address (Base):   000000014311B870
*/
#pragma pack(push, 8)
class BoolProvider_InputAction : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Action; /* 0x0010 */
  DataProvider_InputActionConditions Condition; /* 0x0014 */
  FB_FLOAT32 Time; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_InputAction) == 32);

}
