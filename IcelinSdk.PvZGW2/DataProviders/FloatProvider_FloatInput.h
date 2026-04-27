#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834F00
   RuntimeId:        027A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C8
   VfTable:          00000001421EC7C0
   Address (Base):   000000014311AA30
*/
#pragma pack(push, 8)
class FloatProvider_FloatInput : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */
  FB_INT32 Action; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_FloatInput) == 32);

}
