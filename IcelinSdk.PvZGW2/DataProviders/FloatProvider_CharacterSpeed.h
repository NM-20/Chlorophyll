#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/FloatProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834F60
   RuntimeId:        0280
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10C9
   VfTable:          00000001421EC778
   Address (Base):   000000014311A910
*/
#pragma pack(push, 8)
class FloatProvider_CharacterSpeed : public FloatProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityProvider) Entity; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(FloatProvider_CharacterSpeed) == 24);

}
