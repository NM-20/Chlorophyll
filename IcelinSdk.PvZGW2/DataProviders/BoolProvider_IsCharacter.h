#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 00000001428349D8
   RuntimeId:        022A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1068
   VfTable:          00000001421ECBA8
   Address (Base):   000000014311B510
*/
#pragma pack(push, 8)
class BoolProvider_IsCharacter : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */
  FB_BOOLEAN ReturnIfInvalid; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_IsCharacter) == 32);

}
