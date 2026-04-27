#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428348B8
   RuntimeId:        0218
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1018
   VfTable:          00000001421ECC68
   Address (Base):   000000014311B810
*/
#pragma pack(push, 8)
class BoolProvider_InputActionAnalog : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 Action; /* 0x0010 */
  FB_FLOAT32 MinValue; /* 0x0014 */
  FB_FLOAT32 MaxValue; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_InputActionAnalog) == 32);

}
