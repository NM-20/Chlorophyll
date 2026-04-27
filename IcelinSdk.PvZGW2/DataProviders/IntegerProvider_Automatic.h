#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/IntegerProvider.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834638
   RuntimeId:        01F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          10BB
   VfTable:          00000001421ECE10
   Address (Base):   000000014311BE10
*/
#pragma pack(push, 8)
class IntegerProvider_Automatic : public IntegerProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING DataContainerType; /* 0x0010 */
  FB_CSTRING Property; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IntegerProvider_Automatic) == 32);

}
